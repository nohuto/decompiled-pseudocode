/*
 * XREFs of rimFindOtherQueuedFrames @ 0x1C01A9290
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z @ 0x1C00E6BB8 (-DispatchFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@W4DispatchType@12@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMFixUpCompleteFrame @ 0x1C01A675C (RIMFixUpCompleteFrame.c)
 *     WPP_RECORDER_AND_TRACE_SF_qi @ 0x1C01A9144 (WPP_RECORDER_AND_TRACE_SF_qi.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindOtherQueuedFrames(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int **a4,
        __int64 *a5,
        unsigned int *a6)
{
  _QWORD **v6; // r15
  unsigned int v8; // edx
  unsigned int *v9; // rbp
  _QWORD *v10; // r8
  unsigned int v11; // esi
  _QWORD *v12; // r12
  unsigned int v13; // ecx
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 Pool2; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // r15
  char *v22; // rdi
  _QWORD *v23; // r12
  _QWORD *v24; // r14
  __int64 v25; // rax
  char v26; // r14
  __int64 v28; // rcx
  _QWORD *v29; // rax
  NSInstrumentation::CLeakTrackingAllocator *v30; // rcx
  int v31; // [rsp+20h] [rbp-108h]
  int v32; // [rsp+28h] [rbp-100h]
  int v33; // [rsp+38h] [rbp-F0h]
  PVOID BackTrace[27]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v36; // [rsp+140h] [rbp+18h]

  v6 = (_QWORD **)(a1 + 776);
  v36 = (_QWORD *)(a1 + 776);
  *a4 = 0LL;
  v8 = *a3;
  v9 = a3;
  v10 = *(_QWORD **)(a1 + 776);
  v11 = v8;
  *a5 = 0LL;
  v12 = (_QWORD *)(a1 + 776);
  *a6 = 0;
  if ( v10 == (_QWORD *)(a1 + 776) )
    return 0LL;
  while ( v10[4] == *(_QWORD *)(a2 + 32) )
  {
    v13 = v11 + *((_DWORD *)v10 - 2);
    if ( v13 > 0x2710 )
      break;
    v10 = (_QWORD *)*v10;
    v11 = v13;
    if ( v10 == v6 )
      goto LABEL_7;
  }
  v12 = v10;
  v36 = v10;
LABEL_7:
  if ( v11 == v8 )
    return 0LL;
  v14 = gpLeakTrackingAllocator;
  v15 = v11;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x66637352) != 0x66637352
    || (v16 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_12:
    Pool2 = ExAllocatePool2(260LL, v11);
    goto LABEL_13;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1717793618 )
  {
    if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_12;
  }
  v26 = 0;
  if ( v11 < 0x1000uLL || (v11 & 0xFFF) != 0 )
  {
    v26 = 1;
    v15 = v11 + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v15);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v26 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v14,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_14;
    }
    goto LABEL_32;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v14,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_32:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  Pool2 += 16LL;
LABEL_13:
  if ( !Pool2 )
    return 0LL;
LABEL_14:
  memmove((void *)Pool2, v9, *v9);
  RIMFixUpCompleteFrame(a1, a2, Pool2, v9, 1);
  v21 = *v6;
  v22 = (char *)(Pool2 + *v9);
  if ( v21 != v12 )
  {
    do
    {
      v23 = v21 - 1;
      v24 = v21;
      v21 = (_QWORD *)*v21;
      if ( v23[4] != *((_QWORD *)v9 + 4) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      v25 = *(_QWORD *)(a2 + 192);
      if ( !v25 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
        v25 = *(_QWORD *)(a2 + 192);
      }
      *(_QWORD *)(a2 + 192) = v25 - 1;
      LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qi(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v20,
          v25 - 1,
          v31,
          v32,
          18,
          v33,
          a2,
          v25 - 1);
      }
      v28 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) != v24 || (v29 = (_QWORD *)v24[1], (_QWORD *)*v29 != v24) )
        __fastfail(3u);
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
      v30 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
      v23[5] = 0LL;
      v24[1] = v24;
      *v24 = v24;
      NSInstrumentation::CLeakTrackingAllocator::Free(v30, (char *)v9);
      memmove(v22, v23, *(unsigned int *)v23);
      RIMFixUpCompleteFrame(a1, a2, (__int64)v22, v23, 1);
      v22 += *(unsigned int *)v23;
      v9 = (unsigned int *)v23;
      InputTraceLogging::RIM::DispatchFrame(a2);
      ObfDereferenceObject(*(PVOID *)(a2 + 32));
    }
    while ( v21 != v36 );
  }
  if ( (char *)(int)v11 != &v22[-Pool2] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM((int)v11, v18, v20);
  *a5 = Pool2;
  *a4 = v9;
  *a6 = v11;
  return 1LL;
}
