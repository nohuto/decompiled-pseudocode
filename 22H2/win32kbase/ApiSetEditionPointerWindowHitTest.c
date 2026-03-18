/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1C0207108
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C1508 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     EditionPointerWindowHitTest @ 0x1C0232D50 (EditionPointerWindowHitTest.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  char v25; // [rsp+70h] [rbp-88h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( qword_1C02968E0 && (int)qword_1C02968E0() >= 0 )
  {
    v17 = (_OWORD *)EditionPointerWindowHitTest((unsigned int)&v25, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v18 = v17[1];
    *a1 = *v17;
    v19 = v17[2];
    a1[1] = v18;
    v20 = v17[3];
    a1[2] = v19;
    v21 = v17[4];
    a1[3] = v20;
    v22 = v17[5];
    a1[4] = v21;
    v23 = v17[6];
    a1[5] = v22;
    a1[6] = v23;
  }
  return a1;
}
