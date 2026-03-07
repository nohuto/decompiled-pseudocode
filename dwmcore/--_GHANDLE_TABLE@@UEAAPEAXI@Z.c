void **__fastcall HANDLE_TABLE::`scalar deleting destructor'(void **this, char a2)
{
  *this = &HANDLE_TABLE::`vftable';
  operator delete(this[3]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
