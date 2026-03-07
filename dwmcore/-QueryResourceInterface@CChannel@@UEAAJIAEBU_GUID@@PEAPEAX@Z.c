__int64 __fastcall CChannel::QueryResourceInterface(CChannel *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  unsigned int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // rcx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v11, this);
  if ( CChannel::IsValidHandle(this, a2) )
  {
    *a4 = 0LL;
    v9 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 16LL * (a2 - 1) + 8);
    v8 = (**v9)(v9, a3, a4);
  }
  else
  {
    v8 = -2147024890;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070006LL);
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v11);
  return v8;
}
