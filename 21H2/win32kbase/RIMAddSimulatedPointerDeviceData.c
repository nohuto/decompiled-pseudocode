/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C018F340
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01B1008 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_SetUsageValue @ 0x1C018E94C (rimHidP_SetUsageValue.c)
 *     RIMSetContactBoundary @ 0x1C0198678 (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        unsigned int *a6)
{
  __int64 v6; // rbx
  __int64 v10; // rax
  struct _HIDP_PREPARSED_DATA *v11; // r15
  unsigned int v12; // ebp
  int v13; // edi
  PVOID v14; // rdi
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 Pool2; // rbx
  int v18; // edx
  int v19; // r8d
  char v20; // si
  PDEVICE_OBJECT v22; // rcx
  __int16 v23; // r9
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a2 != *(_QWORD *)(v6 + 472) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_QWORD *)(v6 + 456);
  v11 = *(struct _HIDP_PREPARSED_DATA **)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    v13 = RIMSetContactBoundary(a2, a4 + 128, *(_QWORD *)(a3 + 2596), 0, 0);
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  v14 = gpLeakTrackingAllocator;
  v15 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 456) + 44LL);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63707352) != 0x63707352
    || (v16 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_11:
    Pool2 = ExAllocatePool2(260LL, v15);
    goto LABEL_12;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1668313938 )
  {
    if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_11;
  }
  v20 = 0;
  if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
  {
    v20 = 1;
    v15 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v15);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v14,
           (const void *)Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
LABEL_12:
      if ( Pool2 )
        goto LABEL_13;
      return (unsigned int)-1073741801;
    }
LABEL_25:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v14,
          Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_25;
LABEL_13:
  v13 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *(_DWORD *)(a3 + 2596), v11, (char *)Pool2, v12);
  if ( v13 < 0 )
  {
    v22 = WPP_GLOBAL_Control;
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 41;
      goto LABEL_44;
    }
  }
  else
  {
    v13 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2600), v11, (char *)Pool2, v12);
    if ( v13 >= 0 )
    {
      *a5 = Pool2;
      *a6 = v12;
      return (unsigned int)v13;
    }
    v22 = WPP_GLOBAL_Control;
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = 40;
LABEL_44:
      WPP_RECORDER_AND_TRACE_SF_D(
        v22->AttachedDevice,
        v18,
        v19,
        (_DWORD)gRimLog,
        3,
        1,
        v23,
        (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
        v13);
    }
  }
  return (unsigned int)v13;
}
