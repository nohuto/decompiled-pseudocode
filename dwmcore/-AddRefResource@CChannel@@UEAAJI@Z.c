__int64 __fastcall CChannel::AddRefResource(CChannel *this, unsigned int a2)
{
  unsigned int v4; // ebx
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v6, this);
  v4 = 0;
  if ( CChannel::IsValidHandle(this, a2) )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 2) + 16LL * (a2 - 1));
  }
  else
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C3,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL,
      v6[0]);
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v6);
  return v4;
}
