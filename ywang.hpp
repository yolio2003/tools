#ifndef YWANG_HPP
#define YWANG_HPP


// Debugging utility for probing a variable's value
#define TOKEN_TO_STRING(t) # t
#define STRINGIZE_TOKEN(t) TOKEN_TO_STRING(t)

#define B(x) \
    (cout << "\n====== " << x << " ======\n" << endl)

#define P(x) \
    (cout << ":key_start:" << STRINGIZE_TOKEN(x) << ":key_end:" \
          << " :equals: " \
          << ":val_start:" << (x) << ":val_end:" << endl)

#define L(x) \
    (cout << x << endl)

#endif
