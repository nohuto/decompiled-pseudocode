/*
 * XREFs of SetHandleFlag @ 0x1C008F4F0
 * Callers:
 *     CloseProtectedHandle @ 0x1C008F4B0 (CloseProtectedHandle.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // ebp
  ULONG v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _RTL_BITMAP *v11; // rsi
  ULONG v12; // eax
  PVOID v14; // r14
  unsigned __int64 v15; // rdx
  __int64 Pool2; // rbx
  PULONG Buffer; // rdx
  char *v18; // rdx
  __int64 v19; // rax
  char v20; // r12
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
  if ( CurrentProcessWin32Process )
  {
    v11 = (struct _RTL_BITMAP *)(CurrentProcessWin32Process + 720);
    v12 = *(_DWORD *)(CurrentProcessWin32Process + 720);
    if ( a3 )
    {
      if ( v5 < v12 )
      {
LABEL_4:
        RtlSetBits(v11, v5, 1u);
        goto LABEL_5;
      }
      v14 = gpLeakTrackingAllocator;
      v15 = (unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69707355) == 0x69707355 )
      {
        v19 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v19) != 1768977237 )
          {
            if ( ++v19 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_9;
          }
          v20 = 0;
          if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
          {
            v20 = 1;
            v15 += 16LL;
          }
          Pool2 = ExAllocatePool2(261LL, v15);
          if ( !Pool2 )
            goto LABEL_15;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v14,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
LABEL_10:
              if ( Pool2 )
                goto LABEL_11;
LABEL_15:
              v4 = 0;
              goto LABEL_5;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v14,
                                       Pool2,
                                       BackTrace) )
          {
LABEL_11:
            Buffer = v11->Buffer;
            if ( Buffer )
            {
              memmove((void *)Pool2, Buffer, (unsigned __int64)v11->SizeOfBitMap >> 3);
              v18 = (char *)v11->Buffer;
              if ( v18 )
                NSInstrumentation::CLeakTrackingAllocator::Free(
                  (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                  v18);
            }
            RtlInitializeBitMap(v11, (PULONG)Pool2, (v5 + 32) & 0xFFFFFFE0);
            goto LABEL_4;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_15;
        }
      }
LABEL_9:
      Pool2 = ExAllocatePool2(261LL, v15);
      goto LABEL_10;
    }
    if ( v5 < v12 )
      RtlClearBits(v11, v5, 1u);
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
