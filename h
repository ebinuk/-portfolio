 .projects {
        background-color: var(--bg-color);
    }
    
    .projects-box {
        display: grid;
        grid-template-columns: repeat(auto-fit, minmax(350px, 1fr));
        place-items: center;
        gap: 3rem;
        row-gap: 5rem;
    }
    
    .project-card {
        display: flex;
        flex-direction: column;
        align-items: center;
        justify-content: space-between;
        text-align: center;
        background-color: var(--bg-color);
        border: 2px solid var(--main-color);
        border-radius: 3rem;
        gap: 2rem;
        padding: 2rem;
        overflow: hidden;
        cursor: pointer;
        box-shadow: 0 0 5px var(--main-color);
        transition: 0.3s ease;
        height: 600px; /* Set a fixed height */
        width: 350px; /* Optional: Set a fixed width for consistency */
    }
    
    .project-card:hover {
        box-shadow: 0 0 25px var(--main-color),
                    0 0 50px var(--main-color);
        transform: scale(1.02);
    }
    
    .project-card img {
        width: 100%;
        height: 150px; /* Set a fixed height */
        border-radius: 2em;
        object-fit: cover; /* Maintain aspect ratio */
    }
    
    .project-card h3 {
        font-size: 2rem;
    }
    
    .project-card h4 {
        font-size: 1.6rem;
        margin: 0;
        font-weight: 600;
    }
    
    .project-card h5 {
        font-size: 1.4rem;
        margin: 0;
        font-weight: 600;
    }
    
    .project-card h6 {
        font-size: 1.2rem;
        margin: 0.5rem 0;
        font-weight: 600;
    }
    
    .project-card p {
        font-size: 1.2rem;
        text-align: left;
        overflow: auto; /* Allow scrolling if text overflows */
        flex-grow: 1; /* Make the paragraph grow to fill available space */
    }
    
    .btn {
        /* Keep existing button properties */
        padding: 0.5rem 1rem;
        background-color: var(--main-color);
        color: whitesmoke;
        border: none;
        border-radius: 1.5rem;
        cursor: pointer;
        transition: background-color 0.3s ease;
    }