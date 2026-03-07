CInternalMilCmdConnection *__fastcall CInternalMilCmdConnection::CInternalMilCmdConnection(
        CInternalMilCmdConnection *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &CInternalMilCmdConnection::`vftable';
  *((_DWORD *)this + 17) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 7) = &CChannelTable::`vftable';
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 16) = 24;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 180) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 10);
  return this;
}
