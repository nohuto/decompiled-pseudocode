__int64 __fastcall CInternalMilCmdConnection::CreateChannel(
        RTL_SRWLOCK *this,
        struct IDwmChannelProvider *a2,
        struct CChannel **a3)
{
  RTL_SRWLOCK *v3; // rsi
  DWORD CurrentThreadId; // eax
  char *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // edx
  int v12; // eax
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v13; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17[2]; // [rsp+20h] [rbp-28h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v18; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char *v20; // [rsp+50h] [rbp+8h] BYREF
  char *v21; // [rsp+68h] [rbp+20h] BYREF

  v3 = this + 17;
  *(_QWORD *)v17 = this + 17;
  AcquireSRWLockExclusive(this + 17);
  CurrentThreadId = GetCurrentThreadId();
  v20 = 0LL;
  LODWORD(v3[1].Ptr) = CurrentThreadId;
  v8 = (char *)DefaultHeap::AllocClear(0xF0uLL);
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v8 = &CChannel::`vftable';
  *((_QWORD *)v8 + 2) = 0LL;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 4) = 0LL;
  *((_QWORD *)v8 + 12) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v8 + 104));
  InitializeCriticalSection((LPCRITICAL_SECTION)(v8 + 184));
  *((_QWORD *)v8 + 7) = this;
  *((_QWORD *)v8 + 11) = v8 + 80;
  *((_QWORD *)v8 + 10) = v8 + 80;
  *((_QWORD *)v8 + 8) = a2;
  v21 = v8;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  v9 = CChannel::Initialize((CChannel *)v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      v17[0]);
    wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(&v21);
    v15 = v10;
    v16 = 46LL;
  }
  else
  {
    v11 = *((_DWORD *)v8 + 18);
    v20 = v8;
    v12 = CChannelTable::AssignChannelEntry((CChannelTable *)&this[7], v11, &v18);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = v18;
      *a3 = (struct CChannel *)v8;
      *((_QWORD *)v13 + 1) = v8;
      LODWORD(v3[1].Ptr) = 0;
      ReleaseSRWLockExclusive(v3);
      return 0LL;
    }
    v15 = (unsigned int)v12;
    v16 = 50LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
    (const char *)v15,
    v17[0]);
  wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(&v20);
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(v17);
  return v10;
}
