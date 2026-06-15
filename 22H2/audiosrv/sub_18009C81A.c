/*
 * XREFs of sub_18009C81A @ 0x18009C81A
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

void __fastcall sub_18009C81A(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        char a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        __int64 a25)
{
  if ( a9 < 0 )
  {
    sub_18004BD84(a25, 3518, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", SHIDWORD(a9));
    JUMPOUT(0x18009C816LL);
  }
  JUMPOUT(0x180051C3FLL);
}
