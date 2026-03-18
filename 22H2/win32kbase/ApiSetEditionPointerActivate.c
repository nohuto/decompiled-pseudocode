/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1C0206FB8
 * Callers:
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01C2140 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CC1B8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D4AC0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EditionPointerActivate @ 0x1C0232C6C (EditionPointerActivate.c)
 */

__int64 (*__fastcall ApiSetEditionPointerActivate(_OWORD *a1, unsigned __int16 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v14[7]; // [rsp+30h] [rbp-78h] BYREF

  result = qword_1C0296510;
  if ( qword_1C0296510 )
  {
    result = (__int64 (*)(void))qword_1C0296510();
    if ( (int)result >= 0 )
    {
      v9 = a1[1];
      v14[0] = *a1;
      v14[2] = a1[2];
      v10 = a1[4];
      v14[1] = v9;
      v11 = a1[3];
      v14[4] = v10;
      v12 = a1[6];
      v14[3] = v11;
      v13 = a1[5];
      v14[6] = v12;
      v14[5] = v13;
      return (__int64 (*)(void))EditionPointerActivate(v14, a2, a3, a4);
    }
  }
  return result;
}
