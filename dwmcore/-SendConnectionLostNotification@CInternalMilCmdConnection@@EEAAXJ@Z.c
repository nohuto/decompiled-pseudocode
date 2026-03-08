/*
 * XREFs of ?SendConnectionLostNotification@CInternalMilCmdConnection@@EEAAXJ@Z @ 0x1801B2710
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z @ 0x1800EB6E4 (-TryGetMasterTableEntry@CChannelTable@@QEAAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@I@Z.c)
 */

void __fastcall CInternalMilCmdConnection::SendConnectionLostNotification(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  unsigned int v3; // ebx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *MasterTableEntry; // rax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v5; // rbp

  v1 = this + 17;
  AcquireSRWLockExclusive(this + 17);
  v3 = 1;
  for ( LODWORD(v1[1].Ptr) = GetCurrentThreadId(); v3 < HIDWORD(this[8].Ptr); ++v3 )
  {
    MasterTableEntry = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[7], v3);
    v5 = MasterTableEntry;
    if ( MasterTableEntry )
    {
      SetEvent(*(HANDLE *)(*((_QWORD *)MasterTableEntry + 1) + 96LL));
      SetEvent(*((HANDLE *)v5 + 2));
    }
  }
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
}
