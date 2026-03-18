/*
 * XREFs of ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x18019D9B8
 * Callers:
 *     ?GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z @ 0x1800AE2E0 (-GetComposedEventId@CInternalMilCmdConnection@@QEAAJPEAI@Z.c)
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1800CD79C (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1800CDA78 (-WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800EC200 (-PostMessageToClient@CInternalMilCmdConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801B5858 (-DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
  {
    *(_DWORD *)(v1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)v1);
  }
}
