__int64 __fastcall CChannel::CachedVisualImageSnapshot(CChannel *this, unsigned int a2, const struct tagRECT *a3)
{
  __int128 v6; // xmm0
  int v7; // eax
  unsigned int v8; // ebx
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v12[2]; // [rsp+34h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v10, this);
  CChannel::CheckHandle((__int64)this, a2, 18);
  v11 = 28;
  v12[0] = 0LL;
  v6 = (__int128)*a3;
  LODWORD(v12[0]) = a2;
  *(_OWORD *)((char *)v12 + 4) = v6;
  v7 = CChannel::SendCommand(this, &v11, 0x18u);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x967,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v7);
  }
  else
  {
    *((_BYTE *)this + 233) = 1;
    v8 = 0;
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v10);
  return v8;
}
