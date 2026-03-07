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
