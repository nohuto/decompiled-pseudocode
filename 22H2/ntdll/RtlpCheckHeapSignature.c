/*
 * XREFs of RtlpCheckHeapSignature @ 0x18005FA90
 * Callers:
 *     RtlValidateHeap @ 0x18005F650 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005F960 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005FA00 (RtlUnlockHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800F8870 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8C2C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9074 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1800F91B8 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F927C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9570 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9714 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9860 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9DE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800F9FB0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA144 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1800FA2C8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA358 (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x1800FA47C (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
