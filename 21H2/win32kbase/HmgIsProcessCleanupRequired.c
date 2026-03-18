/*
 * XREFs of HmgIsProcessCleanupRequired @ 0x1C001B4E4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0017AB0 (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C001B494 (HmgIsProcessCleanupRequiredByW32Pid.c)
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
