/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140462EB0
 * Callers:
 *     MiFreezeIoPfnNode @ 0x14062BCF8 (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x14064325C (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140321970 (ExpTryAcquireSpinLockShared.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140608D40 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented();
  else
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1);
}
