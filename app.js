document.getElementById('searchBtn').addEventListener('click', function() {
    const query = document.getElementById('searchQuery').value;

    fetch('http://localhost/cgi-bin/backend.cgi', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/x-www-form-urlencoded',
        },
        body: `query=${query}`,
    })
    .then(response => response.text())
    .then(data => {
        document.getElementById('results').innerHTML = data;
    })
    .catch(error => console.error('Error:', error));
});
