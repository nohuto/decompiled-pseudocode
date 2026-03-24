/*
 * XREFs of ApiSetEditionMouseSpeedHitTest @ 0x1C0044A90
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C00446B0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     EditionMouseSpeedHitTest @ 0x1C0044C10 (EditionMouseSpeedHitTest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionMouseSpeedHitTest(
        _OWORD *a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        _DWORD *a11,
        __int64 a12)
{
  int v14; // r14d
  int v16; // edx
  int v17; // eax
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  char v26; // [rsp+60h] [rbp-88h] BYREF

  v14 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      322,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  memset(a1, 0, 0x70uLL);
  if ( a11 )
    *a11 = 0;
  if ( qword_1C0257958 )
    v17 = qword_1C0257958();
  else
    v17 = -1073741637;
  if ( v17 >= 0 )
  {
    v18 = (_OWORD *)EditionMouseSpeedHitTest(
                      (unsigned int)&v26,
                      v14,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      a8,
                      a9,
                      a10,
                      (__int64)a11,
                      a12);
    v19 = v18[1];
    *a1 = *v18;
    v20 = v18[2];
    a1[1] = v19;
    v21 = v18[3];
    a1[2] = v20;
    v22 = v18[4];
    a1[3] = v21;
    v23 = v18[5];
    a1[4] = v22;
    v24 = v18[6];
    a1[5] = v23;
    a1[6] = v24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      10,
      323,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return a1;
}
