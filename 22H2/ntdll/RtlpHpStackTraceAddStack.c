/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x180108840
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x180005968 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlCaptureStackBackTrace @ 0x1800526A0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpStackTraceAllocAdd @ 0x180108968 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010920C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x1801188A8 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180118E80 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_18016D568 & 1) != 0
    && (dword_18016D568 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v9) >= 0 )
  {
    v8 = RtlpHpEnvHandle;
    v5 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0x600uLL, 0, &v8);
    v3 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = RtlStackDbStackAdd(&qword_18016D570, v3);
        v7 = v6;
        if ( v6 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v9, a2, v6) )
            v7 = 0LL;
          if ( v7 )
            RtlStackDbStackRemove(&qword_18016D570, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v3 )
  {
    v8 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v3, &v8);
  }
}
