COREADAPTERACCESS *__fastcall COREADAPTERACCESS::COREADAPTERACCESS(
        COREADAPTERACCESS *this,
        struct DXGADAPTER *const a2,
        struct DXGADAPTER *const a3)
{
  *((_BYTE *)this + 1) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  *((_QWORD *)this + 5) = 0LL;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 2) = -1LL;
  }
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 13) = 0LL;
  if ( a3 )
    a2 = a3;
  *((_QWORD *)this + 11) = a2;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 10) = -1LL;
  }
  return this;
}
