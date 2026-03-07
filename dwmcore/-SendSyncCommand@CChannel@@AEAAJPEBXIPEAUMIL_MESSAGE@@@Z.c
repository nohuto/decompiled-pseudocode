__int64 __fastcall CChannel::SendSyncCommand(CChannel *this, void *a2, unsigned int a3, struct MIL_MESSAGE *a4)
{
  int v6; // esi
  __int64 v7; // rdx
  int v9; // eax
  __int64 v10; // xmm1_8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_OWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  v6 = CChannel::SendCommand(this, a2, a3);
  if ( v6 < 0 )
  {
    v7 = 222LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CChannel::SyncFlushInternal(this);
  if ( v6 < 0 )
  {
    v7 = 225LL;
    goto LABEL_3;
  }
  if ( a4 )
  {
    v9 = *((_DWORD *)this + 42);
    v10 = *((_QWORD *)this + 20);
    *(_OWORD *)a4 = *((_OWORD *)this + 9);
    *((_QWORD *)a4 + 2) = v10;
    *((_DWORD *)a4 + 6) = v9;
  }
  return 0LL;
}
