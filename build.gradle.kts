plugins {
    `cpp-application`
    `cpp-unit-test`
}

group = "edu.tyut"
version = "1.0-SNAPSHOT"

application{
    targetMachines = listOf(machines.linux.x86_64,
        machines.windows.x86, machines.windows.x86_64,
        machines.macOS.x86_64)
    dependencies{
        // add libs
    }
}

repositories {
    mavenCentral()
}

println("root build.gradle.kts...")