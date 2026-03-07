stdext::bad_array_new_length *__fastcall stdext::bad_array_new_length::`vector deleting destructor'(
        stdext::bad_array_new_length *this,
        char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
