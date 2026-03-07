PANSURFLOCK *__fastcall PANSURFLOCK::PANSURFLOCK(
        PANSURFLOCK *this,
        struct _PANDEV *a2,
        struct _SURFOBJ **a3,
        struct _RECTL *a4,
        int *a5,
        struct _CLIPOBJ *a6)
{
  USHORT iType; // cx
  __int64 v9; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *a5 = 0;
  iType = (*a3)->iType;
  if ( iType == 3 )
  {
    *(_QWORD *)this = *a3;
    PANSURFLOCK::vLockBmpAndPrepareForPunt(this);
  }
  else if ( iType == 1 )
  {
    *((_QWORD *)this + 2) = a2;
    PANSURFLOCK::vLockShadow(this, a4, a6, 0);
    v9 = *((_QWORD *)this + 2);
    *a5 = 1;
    *a3 = *(struct _SURFOBJ **)(v9 + 64);
  }
  return this;
}
