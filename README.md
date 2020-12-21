# Ring-Buffer-cpp
A lightweight, basic C++ Ring Buffer.

### Usage

```cpp
ring_buffer<char, 500> r_buf{};

for (int i = 0; i < 500; i++) {
    r_buf.write('a');
}

r_buf.write('b');
r_buf.as_string(); // expected output is 1 x b, and 499 x a.