/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x1C0205EF4
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C01D9F20 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EditionDoPointerDPITransforms @ 0x1C00E78C2 (EditionDoPointerDPITransforms.c)
 */

__int64 (*__fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1))(void)
{
  __int64 (*result)(void); // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[7]; // [rsp+20h] [rbp-78h] BYREF

  result = qword_1C02969F0;
  if ( qword_1C02969F0 )
  {
    result = (__int64 (*)(void))qword_1C02969F0();
    if ( (int)result >= 0 )
    {
      v3 = a1[1];
      v8[0] = *a1;
      v8[2] = a1[2];
      v4 = a1[4];
      v8[1] = v3;
      v5 = a1[3];
      v8[4] = v4;
      v6 = a1[6];
      v8[3] = v5;
      v7 = a1[5];
      v8[6] = v6;
      v8[5] = v7;
      return (__int64 (*)(void))EditionDoPointerDPITransforms(v8);
    }
  }
  return result;
}
