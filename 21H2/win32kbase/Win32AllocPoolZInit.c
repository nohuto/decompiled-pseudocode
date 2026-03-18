/*
 * XREFs of Win32AllocPoolZInit @ 0x1C00869F0
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ??$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z @ 0x1C00D7C88 (--$CreateWindowProp@VGroupedFGBoostProp@@@CWindowProp@@SAJPEAPEAVGroupedFGBoostProp@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     RIMConfigureDeviceFeedback @ 0x1C00DBFA0 (RIMConfigureDeviceFeedback.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C00DC348 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     NtRIMQueryDevicePath @ 0x1C0180CE0 (NtRIMQueryDevicePath.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     ?AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z @ 0x1C01BE43C (-AssignPointerCaptureData@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAUCPointerMsgData@@@Z.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall Win32AllocPoolZInit(unsigned __int64 a1, int a2)
{
  PVOID v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  char v6; // bp
  __int64 Pool2; // rdi
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  if ( (a2 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a2 )
    return ExAllocatePool2(260LL, a1);
  v3 = 0LL;
  v5 = 0LL;
  if ( !*((_DWORD *)gpLeakTrackingAllocator + 11) )
    return ExAllocatePool2(260LL, a1);
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != a2 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      return ExAllocatePool2(260LL, a1);
  }
  v6 = 0;
  if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
  {
    v6 = 1;
    a1 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, a1);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v2,
                              Pool2,
                              BackTrace) )
        return Pool2 + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v2,
                                 Pool2,
                                 BackTrace) )
    {
      return Pool2;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  return v3;
}
