/*
 * XREFs of MiPageTableLockIsContended @ 0x1402E6A30
 * Callers:
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiDispatchFault @ 0x140237F10 (MiDispatchFault.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiProbePacketContended @ 0x1402E6584 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x1402E65E0 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402F155C (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140630CA0 (MiInsertViewOfPhysicalSection.c)
 *     MiVadRangeIsIoSpace @ 0x140631764 (MiVadRangeIsIoSpace.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140632AA8 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiAddPagesToEnclave @ 0x140646A80 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1406472A8 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1406482B8 (MiProtectEnclavePages.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x14065E4AC (MiScrubLargeMappedPage.c)
 * Callees:
 *     MiGetPageTableLockBuffer @ 0x1403195F8 (MiGetPageTableLockBuffer.c)
 */

__int64 __fastcall MiPageTableLockIsContended(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v3; // r8
  unsigned __int64 v4; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rax
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rcx
  bool v9; // zf
  __int64 v10; // rcx
  _DWORD *PageTableLockBuffer; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v14 = 0;
  v3 = v2 & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v3 )
    {
      v7 = v2 & 7;
      if ( v7 == 7 )
      {
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = v7 == 5;
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        if ( !v9 )
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    return SelfmapLockHandle->LockQueue.Next != 0LL;
  }
  else
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL )
    {
      if ( v3 )
      {
        if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(a1, a2, &v14);
          return (*PageTableLockBuffer >> v14 >> 1) & 1;
        }
      }
      else if ( a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v10 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 624);
        if ( v10 )
          return (*(_DWORD *)(v10 + 4 * ((a2 >> 3) & 0x1FF)) >> 30) & 1;
      }
    }
    v4 = *(_QWORD *)a2;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v4 & 1) != 0
      && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v13 = *((_QWORD *)&Flink->Flink + ((a2 >> 3) & 0x1FF));
        if ( (v13 & 0x20) != 0 )
          v4 |= 0x20uLL;
        if ( (v13 & 0x42) != 0 )
          v4 |= 0x42uLL;
      }
    }
    return (v4 >> 60) & 2;
  }
}
