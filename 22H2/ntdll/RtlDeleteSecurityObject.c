/*
 * XREFs of RtlDeleteSecurityObject @ 0x18007E0C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteSecurityObject(__int64 *a1)
{
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
  return 0LL;
}
