/*
 * XREFs of ?DestroyChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x1801B2658
 * Callers:
 *     ??1CChannel@@AEAA@XZ @ 0x1801CB2C4 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1800CD0D4 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x18019A3F0 (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x1801CB18C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::DestroyChannel(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rdi
  CChannelTable *v4; // rbp
  int MasterTableEntry; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 17;
  v4 = (CChannelTable *)&this[7];
  v9 = this + 17;
  AcquireSRWLockExclusive(this + 17);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  MasterTableEntry = CChannelTable::GetMasterTableEntry(v4, a2, &v10);
  v6 = MasterTableEntry;
  if ( MasterTableEntry >= 0 )
  {
    CChannelTable::DestroyHandle(v4, a2);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)MasterTableEntry);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((__int64 *)&v9);
    return v6;
  }
}
