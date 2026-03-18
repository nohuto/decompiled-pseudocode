/*
 * XREFs of ?vUnLockShadow@PANSURFLOCK@@QEAAXXZ @ 0x1C0295158
 * Callers:
 *     ??1PANSURFLOCK@@QEAA@XZ @ 0x1C029253C (--1PANSURFLOCK@@QEAA@XZ.c)
 * Callees:
 *     ?ShadowUnLock@@YAXPEAU_PANDEV@@@Z @ 0x1C02940E0 (-ShadowUnLock@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall PANSURFLOCK::vUnLockShadow(PANSURFLOCK *this)
{
  _BYTE *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp

  v2 = (char *)this + 104;
  v3 = 760LL;
  do
  {
    v4 = 9LL;
    do
    {
      if ( *v2 == 1 )
      {
        EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + v3));
        *v2 = 0;
      }
      v3 -= 8LL;
      --v2;
      --v4;
    }
    while ( v4 );
  }
  while ( v3 >= 184 );
  ShadowUnLock(*((struct _PANDEV **)this + 2));
}
