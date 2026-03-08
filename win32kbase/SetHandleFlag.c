/*
 * XREFs of SetHandleFlag @ 0x1C00A4E60
 * Callers:
 *     CloseProtectedHandle @ 0x1C00A4E18 (CloseProtectedHandle.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v8; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v9; // rcx
  struct _RTL_BITMAP *v10; // rbx
  ULONG v11; // eax
  ULONG *QuotaZInit; // rax
  ULONG *v14; // r14
  PULONG Buffer; // rdx
  char *v16; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
  {
    v10 = (struct _RTL_BITMAP *)(CurrentProcessWin32Process + 712);
    v11 = *(_DWORD *)(CurrentProcessWin32Process + 712);
    if ( a3 )
    {
      if ( v5 >= v11 )
      {
        QuotaZInit = (ULONG *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                v9,
                                v8,
                                (unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3,
                                0x69707355u);
        v14 = QuotaZInit;
        if ( !QuotaZInit )
        {
          v4 = 0;
          goto LABEL_6;
        }
        Buffer = v10->Buffer;
        if ( Buffer )
        {
          memmove(QuotaZInit, Buffer, (unsigned __int64)v10->SizeOfBitMap >> 3);
          v16 = (char *)v10->Buffer;
          if ( v16 )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v16);
        }
        RtlInitializeBitMap(v10, v14, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits(v10, v5, 1u);
    }
    else if ( v5 < v11 )
    {
      RtlClearBits(v10, v5, 1u);
    }
  }
LABEL_6:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}
