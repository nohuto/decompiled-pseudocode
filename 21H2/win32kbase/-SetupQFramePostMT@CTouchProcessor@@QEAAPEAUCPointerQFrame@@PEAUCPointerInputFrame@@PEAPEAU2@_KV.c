/*
 * XREFs of ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01D752C
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00449EC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C00E854A (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00E859A (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetupQFramePostMT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 **a5,
        unsigned int a6)
{
  __int64 *v7; // r15
  __int64 v8; // rbp
  PDEVICE_OBJECT v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // esi
  __int64 i; // rdi
  __int64 v17; // rdx
  CTouchProcessor *v18; // rcx
  __int64 v19; // r8
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  const int *v22; // r8
  CInputDest *v24; // rax
  _BYTE v25[128]; // [rsp+40h] [rbp-98h] BYREF

  v7 = (__int64 *)a3;
  v8 = a2;
  v9 = WPP_GLOBAL_Control;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      81,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)v9, v8, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = *(_DWORD *)(v8 + 48);
  v15 = 0;
  for ( i = *(_QWORD *)(v8 + 248); v15 < v14; ++v15 )
  {
    if ( (*(_DWORD *)(i + 140) & 0x10) == 0 )
    {
      if ( *(_DWORD *)i == -1 )
      {
        v24 = CInputDest::CInputDest((CInputDest *)v25, a5);
        CTouchProcessor::InitializeQFrame(a6, i, v15, a4, v24, a6);
LABEL_33:
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v11) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 0;
        }
        if ( (_BYTE)v11 || v10 )
        {
          v21 = 82;
LABEL_30:
          v22 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
          LOBYTE(v22) = v10;
          WPP_RECORDER_AND_TRACE_SF_(
            v20->AttachedDevice,
            v11,
            (_DWORD)v22,
            v20->DeviceExtension,
            5,
            7,
            v21,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        goto LABEL_31;
      }
      if ( *(_QWORD *)(i + 8) == a4 )
        goto LABEL_33;
    }
    i += 160LL;
  }
  i = *v7;
  *v7 = 0LL;
  *(_QWORD *)(i + 8) = a4;
  CInputDest::operator=(i + 16, (__int64)a5);
  if ( *(_DWORD *)(i + 144) != 22 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
  CTouchProcessor::InitializeQFrameCoalesceState(v18, (struct CPointerQFrame *)i, a6);
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v10 = 0;
  if ( (_BYTE)v11 || v10 )
  {
    v21 = 83;
    goto LABEL_30;
  }
LABEL_31:
  CInputDest::SetEmpty((CInputDest *)a5);
  return i;
}
