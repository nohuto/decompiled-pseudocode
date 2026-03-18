/*
 * XREFs of ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01DC630
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::PopulateCustomDispatcherObjectsArray(
        LegacyInputDispatcher *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rbp
  void **v4; // r14
  int v6; // r15d
  PVOID v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 Pool2; // rax
  char v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = (unsigned int)a2;
  v4 = a3;
  v6 = a2 + 1;
  if ( *((_DWORD *)this + 11) < (unsigned int)(a2 + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 2) )
    goto LABEL_22;
  v7 = gpLeakTrackingAllocator;
  v8 = 8LL * *((unsigned int *)this + 11);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79737355) != 0x79737355
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_8:
    Pool2 = ExAllocatePool2(68LL, v8);
    goto LABEL_9;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 2037609301 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_8;
  }
  v12 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 += 16LL;
  }
  v13 = ExAllocatePool2(68LL, v8);
  if ( !v13 )
    goto LABEL_15;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v12 || (unsigned __int64)(v13 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v7,
           v13,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      *((_QWORD *)this + 2) = v13;
      goto LABEL_22;
    }
LABEL_26:
    ExFreePoolWithTag((PVOID)v13, 0);
LABEL_15:
    *((_QWORD *)this + 2) = 0LL;
    return 3221225506LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v7,
          (const void *)v13,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_26;
  Pool2 = v13 + 16;
LABEL_9:
  *((_QWORD *)this + 2) = Pool2;
  if ( !Pool2 )
    return 3221225506LL;
LABEL_22:
  if ( (_DWORD)v3 )
  {
    v14 = 8LL;
    v15 = v3;
    do
    {
      v16 = (__int64)*v4++;
      *(_QWORD *)(v14 + *((_QWORD *)this + 2)) = v16;
      v14 += 8LL;
      --v15;
    }
    while ( v15 );
  }
  *((_DWORD *)this + 12) = v6;
  return 0LL;
}
