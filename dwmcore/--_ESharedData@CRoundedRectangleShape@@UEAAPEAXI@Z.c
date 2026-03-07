CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::`vector deleting destructor'(
        CRoundedRectangleShape::SharedData *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
