__int64 __fastcall CInternalMilCmdConnection::WaitForSyncFlush(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rdi
  int MasterTableEntry; // eax
  unsigned int v6; // ebx
  void *v7; // rbx
  const char *v8; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 17;
  v12 = (struct CLIENT_CHANNEL_HANDLE_ENTRY *)&this[17];
  AcquireSRWLockExclusive(this + 17);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( !LOBYTE(this[3].Ptr) )
  {
    v6 = -2003303402;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x116,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)0x88980416LL,
      v10);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v12);
    return v6;
  }
  v12 = 0LL;
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this[7], a2, &v12);
  v6 = MasterTableEntry;
  if ( MasterTableEntry < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x119,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)MasterTableEntry,
      v10);
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
    return v6;
  }
  v7 = (void *)*((_QWORD *)v12 + 2);
  LODWORD(v2[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v2);
  if ( WaitForSingleObject(v7, 0xFFFFFFFF) == -1 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x121,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
             v8);
  else
    return 0LL;
}
