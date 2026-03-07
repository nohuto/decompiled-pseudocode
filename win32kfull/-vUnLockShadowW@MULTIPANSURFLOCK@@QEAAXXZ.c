void __fastcall MULTIPANSURFLOCK::vUnLockShadowW(MULTIPANSURFLOCK *this)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rcx
  struct _PANDEV *v6; // rcx

  v2 = (char *)this + 211;
  v3 = 760LL;
  do
  {
    v4 = 9LL;
    do
    {
      if ( *v2 == 1 )
      {
        v5 = *((_QWORD *)this + 4);
        if ( !v5 )
          v5 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v3 + v5));
        *v2 = 0;
      }
      v3 -= 8LL;
      --v2;
      --v4;
    }
    while ( v4 );
  }
  while ( v3 >= 184 );
  v6 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v6 )
    v6 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLock(v6);
}
