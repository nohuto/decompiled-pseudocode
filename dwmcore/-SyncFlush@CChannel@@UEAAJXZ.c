__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v5, this);
  v2 = CChannel::SyncFlushInternal(this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x281,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v2,
      v5[0]);
  else
    v3 = 0;
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v5);
  return v3;
}
