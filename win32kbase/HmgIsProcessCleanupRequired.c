/*
 * XREFs of HmgIsProcessCleanupRequired @ 0x1C00B1BB0
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238 (-vGarbageCollectObjects@@YAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00B1B60 (HmgIsProcessCleanupRequiredByW32Pid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgIsProcessCleanupRequired(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 64) )
    return 1LL;
  return result;
}
