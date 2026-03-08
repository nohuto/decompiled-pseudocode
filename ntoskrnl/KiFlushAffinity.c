/*
 * XREFs of KiFlushAffinity @ 0x1403C9158
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

volatile _KAFFINITY_EX *__fastcall KiFlushAffinity(int a1)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( a1 )
    return 0LL;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
}
