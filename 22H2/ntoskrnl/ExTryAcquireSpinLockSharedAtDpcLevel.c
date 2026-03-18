/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14046ADB0
 * Callers:
 *     MiFreezeIoPfnNode @ 0x14062E178 (MiFreezeIoPfnNode.c)
 *     MmReadProcessPageTables @ 0x140645880 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140277510 (ExpTryAcquireSpinLockShared.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14060B190 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented();
  else
    return (unsigned __int8)ExpTryAcquireSpinLockShared(a1);
}
