__int64 __fastcall CInternalMilCmdConnection::PostMessageToClient(RTL_SRWLOCK *this, const struct UCE_RDP_HEADER *a2)
{
  RTL_SRWLOCK *v2; // r14
  int v5; // r15d
  __int64 v6; // rcx
  const struct MIL_MESSAGE *v7; // rbx
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int LastError; // ebx
  const char *v13; // r9
  unsigned int i; // edi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *MasterTableEntry; // rax
  CChannel *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebp
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v24; // [rsp+60h] [rbp+8h] BYREF

  v2 = this + 17;
  v24 = this + 17;
  v5 = 0;
  AcquireSRWLockExclusive(this + 17);
  LODWORD(v2[1].Ptr) = GetCurrentThreadId();
  if ( !LOBYTE(this[3].Ptr) )
    goto LABEL_11;
  if ( *((_DWORD *)a2 + 1) < 0x44u || (unsigned int)(*(_DWORD *)a2 - 10) > 1 )
  {
    LastError = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0x75u, 0LL);
    v20 = 2291663875LL;
    v21 = 139LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)v20,
      v22);
    goto LABEL_30;
  }
  v7 = (const struct UCE_RDP_HEADER *)((char *)a2 + 40);
  if ( *(_DWORD *)a2 == 11 )
  {
    for ( i = 1; i < HIDWORD(this[8].Ptr); ++i )
    {
      MasterTableEntry = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[7], i);
      if ( MasterTableEntry )
      {
        v16 = (CChannel *)*((_QWORD *)MasterTableEntry + 1);
        if ( *((_BYTE *)v16 + 232) )
        {
          v17 = CChannel::PostMessageToChannel(v16, v7);
          v19 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x97u, 0LL);
          if ( !v5 || v5 >= 0 && v19 < 0 )
            v5 = v19;
        }
      }
    }
    goto LABEL_11;
  }
  v8 = CChannelTable::TryGetMasterTableEntry((CChannelTable *)&this[7], *((_DWORD *)a2 + 4));
  if ( !v8 )
  {
LABEL_11:
    LODWORD(v2[1].Ptr) = 0;
    ReleaseSRWLockExclusive(v2);
    return (unsigned int)v5;
  }
  if ( *(_DWORD *)v7 != 1 )
  {
    if ( *(_DWORD *)v7 == 2 || *(_DWORD *)v7 == 17 )
    {
      v9 = *((_QWORD *)v8 + 1);
    }
    else
    {
      v9 = *((_QWORD *)v8 + 1);
      if ( *(_DWORD *)v7 != 19 )
      {
        v10 = CChannel::PostMessageToChannel((CChannel *)v9, (const struct UCE_RDP_HEADER *)((char *)a2 + 40));
        LastError = v10;
        if ( v10 >= 0 )
          goto LABEL_11;
        v20 = (unsigned int)v10;
        v21 = 208LL;
        goto LABEL_29;
      }
    }
    *(_OWORD *)(v9 + 144) = *(_OWORD *)v7;
    *(_QWORD *)(v9 + 160) = *((_QWORD *)a2 + 7);
    *(_DWORD *)(v9 + 168) = *((_DWORD *)a2 + 16);
    goto LABEL_11;
  }
  if ( SetEvent(*((HANDLE *)v8 + 2)) )
    goto LABEL_11;
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0xAA,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
                v13);
LABEL_30:
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v24);
  return LastError;
}
