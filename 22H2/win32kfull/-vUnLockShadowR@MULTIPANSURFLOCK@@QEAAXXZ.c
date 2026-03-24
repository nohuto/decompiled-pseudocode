/*
 * XREFs of ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0297128
 * Callers:
 *     ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C0294464 (--1MULTIPANSURFLOCK@@QEAA@XZ.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02962CC (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C0296080 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vUnLockShadowR(MULTIPANSURFLOCK *this)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  char *v4; // r14
  __int64 v5; // rax
  struct _PANDEV *v6; // rcx

  for ( i = 87LL; i >= 15; i -= 9LL )
  {
    v3 = 8LL;
    v4 = (char *)this + i;
    do
    {
      if ( v4[v3 + 35] == 1 )
      {
        v5 = *((_QWORD *)this + 4);
        if ( !v5 )
          v5 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v5 + 8 * (i + v3)));
        v4[v3 + 35] = 0;
      }
      --v3;
    }
    while ( v3 >= 0 );
  }
  v6 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v6 )
    v6 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLock(v6);
}
