/*
 * XREFs of HmgIsProcessCleanupRequired @ 0x1C00A4C60
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C0035EF8 (-vGarbageCollectObjects@@YAXXZ.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00A4C10 (HmgIsProcessCleanupRequiredByW32Pid.c)
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
