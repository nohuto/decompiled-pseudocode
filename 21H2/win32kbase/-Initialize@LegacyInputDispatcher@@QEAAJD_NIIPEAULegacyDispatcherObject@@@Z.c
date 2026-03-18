/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00BD000
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        struct LegacyDispatcherObject *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  PVOID v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 Pool2; // rsi
  _DWORD *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  _DWORD *v16; // r14
  size_t v17; // r13
  size_t v18; // rdx
  __int64 v19; // rsi
  void *v20; // rcx
  struct LegacyDispatcherObject *v21; // r8
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  char v27; // r15
  __int64 v28; // rax
  char v29; // r15
  __int64 v30; // rax
  char v31; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-E0h] BYREF
  PVOID v33[28]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 Size; // [rsp+1B0h] [rbp+B0h]
  char v35; // [rsp+1B8h] [rbp+B8h]
  char v36; // [rsp+1C0h] [rbp+C0h]

  v36 = a3;
  v35 = a2;
  v6 = 0LL;
  v7 = a4;
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_QWORD *)this + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v9 = gpLeakTrackingAllocator;
  Size = 8 * v7;
  v10 = 8 * v7;
  v11 = v7;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x79737355) == 0x79737355 )
  {
    v26 = 0LL;
    if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v26) != 2037609301 )
      {
        if ( ++v26 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_9;
      }
      v27 = 0;
      if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
      {
        v27 = 1;
        v10 += 16LL;
      }
      Pool2 = ExAllocatePool2(68LL, v10);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v27 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v9,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_10;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v9,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_10;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
      Pool2 = 0LL;
      goto LABEL_10;
    }
  }
LABEL_9:
  Pool2 = ExAllocatePool2(68LL, v10);
LABEL_10:
  v13 = gpLeakTrackingAllocator;
  *((_QWORD *)this + 1) = Pool2;
  v14 = 48 * v11;
  if ( (v13[10] & 0x774B7355) == 0x774B7355 )
  {
    v28 = 0LL;
    if ( v13[11] )
    {
      while ( v13[v28] != 2001433429 )
      {
        if ( ++v28 >= (unsigned __int64)(unsigned int)v13[11] )
          goto LABEL_11;
      }
      v29 = 0;
      if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
      {
        v29 = 1;
        v14 += 16LL;
      }
      v15 = ExAllocatePool2(68LL, v14);
      if ( v15 )
      {
        memset(v33, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, v33, 0LL);
        if ( v29 && (unsigned __int64)(v15 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v13,
                                  v15,
                                  v33) )
          {
            v15 += 16LL;
            goto LABEL_12;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v13,
                                     v15,
                                     v33) )
        {
          goto LABEL_12;
        }
        ExFreePoolWithTag((PVOID)v15, 0);
      }
      v15 = 0LL;
      goto LABEL_12;
    }
  }
LABEL_11:
  v15 = ExAllocatePool2(68LL, v14);
LABEL_12:
  v16 = gpLeakTrackingAllocator;
  v17 = 16 * v11;
  *((_QWORD *)this + 3) = v15;
  v18 = v17;
  if ( (v16[10] & 0x70694843) == 0x70694843 )
  {
    v30 = 0LL;
    if ( v16[11] )
    {
      while ( v16[v30] != 1885947971 )
      {
        if ( ++v30 >= (unsigned __int64)(unsigned int)v16[11] )
          goto LABEL_13;
      }
      v31 = 0;
      if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
      {
        v31 = 1;
        v18 = v17 + 16;
      }
      v19 = ExAllocatePool2(260LL, v18);
      if ( v19 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v31 && (unsigned __int64)(v19 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v16,
                                  v19,
                                  BackTrace) )
          {
            v19 += 16LL;
            goto LABEL_14;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v16,
                                     v19,
                                     BackTrace) )
        {
          goto LABEL_14;
        }
        ExFreePoolWithTag((PVOID)v19, 0);
      }
      v19 = 0LL;
      goto LABEL_14;
    }
  }
LABEL_13:
  v19 = ExAllocatePool2(260LL, v17);
LABEL_14:
  *((_QWORD *)this + 4) = v19;
  *((_DWORD *)this + 12) = 1;
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v20 = (void *)*((_QWORD *)this + 1);
  if ( !v20 || !v19 )
    return 3221225495LL;
  memset(v20, 0, Size);
  memset(*((void **)this + 4), 0, v17);
  if ( a5 )
  {
    v21 = a6;
    v22 = a5;
    do
    {
      v23 = v21 - a6;
      *(_QWORD *)(v6 + *((_QWORD *)this + 1)) = *(_QWORD *)v21;
      v6 += 8LL;
      v24 = *((_QWORD *)v21 + 1);
      v21 = (struct LegacyDispatcherObject *)((char *)v21 + 16);
      *(_QWORD *)(v23 + *((_QWORD *)this + 4)) = v24;
      --v22;
    }
    while ( v22 );
  }
  *((_DWORD *)this + 11) = a4;
  *((_BYTE *)this + 56) = v35;
  *((_BYTE *)this + 57) = v36;
  result = 0LL;
  *((_DWORD *)this + 13) = a5;
  return result;
}
