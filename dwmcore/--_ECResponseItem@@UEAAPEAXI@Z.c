CResponseItem *__fastcall CResponseItem::`vector deleting destructor'(CResponseItem *this, char a2)
{
  *(_QWORD *)this = &CResponseItem::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
