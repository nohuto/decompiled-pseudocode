/*
 * XREFs of ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01D7360
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1C01D45E8 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C00E854A (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::SetupQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        __int64 **a4,
        unsigned int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  PDEVICE_OBJECT v11; // rcx
  char v12; // bl
  unsigned int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rdi
  CInputDest *v16; // rax
  const int *v17; // r8
  _BYTE v19[128]; // [rsp+40h] [rbp-A8h] BYREF

  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !a3 && *(_DWORD *)a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = WPP_GLOBAL_Control;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v8 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      67,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v13 = *((_DWORD *)a2 + 12);
  v14 = 0;
  v15 = *((_QWORD *)a2 + 31);
  if ( v13 )
  {
    while ( *(_DWORD *)v15 != -1 )
    {
      if ( *(_QWORD *)(v15 + 8) == a3 )
        goto LABEL_22;
      v15 += 160LL;
      if ( ++v14 >= v13 )
        goto LABEL_20;
    }
    goto LABEL_23;
  }
LABEL_20:
  if ( v14 >= v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v8, v10);
LABEL_22:
  if ( *(_DWORD *)v15 == -1 )
  {
LABEL_23:
    v16 = CInputDest::CInputDest((CInputDest *)v19, a4);
    CTouchProcessor::InitializeQFrame(a5, v15, v14, a3, v16, a5);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v12 = 0;
  if ( (_BYTE)v8 || v12 )
  {
    v17 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      (_DWORD)v17,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      68,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  return (struct CPointerQFrame *)v15;
}
