/*
 * XREFs of ApiSetEditionNonDwmSpeedHitTest @ 0x1C00C9A5C
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0057AD4 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     EditionNonDwmSpeedHitTest @ 0x1C00B6BE4 (EditionNonDwmSpeedHitTest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionNonDwmSpeedHitTest(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v10[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( qword_1C02968A0 && (int)qword_1C02968A0() >= 0 )
  {
    v2 = EditionNonDwmSpeedHitTest(v10);
    v3 = v2[1];
    *a1 = *v2;
    v4 = v2[2];
    a1[1] = v3;
    v5 = v2[3];
    a1[2] = v4;
    v6 = v2[4];
    a1[3] = v5;
    v7 = v2[5];
    a1[4] = v6;
    v8 = v2[6];
    a1[5] = v7;
    a1[6] = v8;
  }
  return a1;
}
