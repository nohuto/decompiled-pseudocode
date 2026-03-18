/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140666E90
 * Callers:
 *     MiCopyToUserVa @ 0x14021CBFC (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiProbeLeafPteAccess @ 0x140236C30 (MiProbeLeafPteAccess.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiWalkVaRange @ 0x140293C34 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x1402ED4F0 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x140619EA0 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MiReplaceImportEntry @ 0x14062C720 (MiReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140642938 (MiPrepareImagePagesForHotPatch.c)
 *     MiLockAweVadsShared @ 0x14064B0E0 (MiLockAweVadsShared.c)
 *     MiMakeProtoPrivate @ 0x14064D344 (MiMakeProtoPrivate.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214DB4 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C82C (LOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x140653AB8 (MiWaitForFreePage.c)
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
    MiWaitForFreePage(*(_QWORD **)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
