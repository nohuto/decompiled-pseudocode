CTransport *__fastcall CTransport::`scalar deleting destructor'(CTransport *this, char a2)
{
  *(_QWORD *)this = &CTransport::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
