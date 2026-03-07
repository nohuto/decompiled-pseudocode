__int64 __fastcall CChannel::SyncFlushInternal(CChannel *this)
{
  int v2; // edi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 53;
  v2 = CChannel::SendCommand(this, &v9, 4u);
  if ( v2 < 0 )
  {
    v6 = 630LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return (unsigned int)v2;
  }
  v2 = CChannel::InternalCommit(this, 0LL);
  if ( v2 < 0 )
  {
    v6 = 632LL;
    goto LABEL_7;
  }
  v3 = CInternalMilCmdConnection::WaitForSyncFlush(*((CInternalMilCmdConnection **)this + 7), *((_DWORD *)this + 18));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x279,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v3,
    v7);
  return v4;
}
