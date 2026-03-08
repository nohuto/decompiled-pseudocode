/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140664840
 * Callers:
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140211730 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1402220A0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140267D40 (MmAccessFault.c)
 *     MiProbeLeafPteAccess @ 0x140269620 (MiProbeLeafPteAccess.c)
 *     MiLockPagedAddress @ 0x1402A1684 (MiLockPagedAddress.c)
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiLockDriverPageRange @ 0x1406179F0 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x14062A2A0 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1406404D8 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockAweVadsShared @ 0x140648AC4 (MiLockAweVadsShared.c)
 *     MiMakeProtoPrivate @ 0x14064AD28 (MiMakeProtoPrivate.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x140651458 (MiWaitForFreePage.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v4; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v4 = *(struct _KTHREAD **)(Process + 1248);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
          UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    MiWaitForFreePage(*(_QWORD **)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
