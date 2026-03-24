/*
 * XREFs of ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C019E908
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C019BC9C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009E41C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C0196650 (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C01966A0 (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetupNewQFrame(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 **a5,
        unsigned int a6)
{
  __int64 v7; // rbp
  PDEVICE_OBJECT v8; // rcx
  unsigned int v9; // eax
  int v10; // esi
  __int64 v11; // rbx
  CTouchProcessor *v12; // rcx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  CInputDest *v17; // rax
  _BYTE v18[128]; // [rsp+40h] [rbp-A8h] BYREF

  v7 = a2;
  v8 = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        7,
        83,
        (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v8, v7) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3280);
  if ( !*(_DWORD *)a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3281);
  v9 = *(_DWORD *)(v7 + 48);
  v10 = 0;
  v11 = *(_QWORD *)(v7 + 144);
  if ( v9 )
  {
    while ( *(_DWORD *)v11 != -1 )
    {
      v11 += 160LL;
      if ( ++v10 >= v9 )
        goto LABEL_11;
    }
    v17 = CInputDest::CInputDest((CInputDest *)v18, a5);
    CTouchProcessor::InitializeQFrame(a6, v11, v10, 0LL, v17, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 84;
        goto LABEL_16;
      }
    }
  }
  else
  {
LABEL_11:
    v11 = *a3;
    *a3 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    CInputDest::operator=(v11 + 16, (__int64)a5);
    if ( *(_DWORD *)(v11 + 144) != 22 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3320);
    CTouchProcessor::InitializeQFrameCoalesceState(v12, (struct CPointerQFrame *)v11, a6);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 85;
LABEL_16:
        LOBYTE(v13) = 5;
        WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
    }
  }
  CInputDest::SetEmpty((CInputDest *)a5);
  return v11;
}
