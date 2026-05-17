/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180109478
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180108D1C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010920C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180118E80 (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18016D568 & 1) != 0 && (dword_18016D568 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v10) >= 0 )
  {
    v8 = RtlpHpStackTraceAllocRemove(v10, a2, v6, v7);
    if ( v8 )
      RtlStackDbStackRemove(&qword_18016D570, v8);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
