/*
 * XREFs of sub_180085DC8 @ 0x180085DC8
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

void __fastcall sub_180085DC8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        LPCRITICAL_SECTION a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32,
        __int64 a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a38,
        int a39)
{
  if ( a17 < 0 )
  {
    sub_18004BD84(STACK[0x688], 365, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", a17);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    sub_18000F708(&a9);
    sub_18000F708(&a11);
    if ( a12 )
      LeaveCriticalSection(a12);
    JUMPOUT(0x18001B460LL);
  }
  a10 = a11;
  a18 = STACK[0x2E0];
  a16 = STACK[0x2E8];
  a14 = a39;
  JUMPOUT(0x18001ACA5LL);
}
