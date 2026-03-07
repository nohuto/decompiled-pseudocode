__int64 __fastcall CChannel::ReleaseResource(__int64 **this, unsigned int a2)
{
  __int64 *v4; // r8
  __int64 v5; // rdi
  __int64 *v7; // rcx
  int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+54h] [rbp+1Ch]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v14, (struct CChannel *)this);
  if ( CChannel::IsValidHandle((CChannel *)this, a2) )
  {
    v4 = this[2];
    v5 = 2LL * (a2 - 1);
    if ( LODWORD(v4[v5])-- == 1 )
    {
      v7 = this[8];
      if ( v7 )
      {
        v12 = *v7;
        v13 = v4[v5 + 1];
        v4[v5 + 1] = 0LL;
        (*(void (__fastcall **)(__int64 *, __int64))(v12 + 64))(v7, v13);
      }
      else
      {
        v16 = 45;
        v17 = a2;
        v8 = CChannel::SendCommand((CChannel *)this, &v16, 8u);
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x35E,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
            (const char *)(unsigned int)v8,
            v14[0]);
      }
      v9 = this[2];
      HIDWORD(v9[v5]) = 0;
      v10 = v9[v5 + 1];
      v9[v5 + 1] = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      this[5] = (__int64 *)((char *)this[5] - 1);
    }
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070057LL,
      v14[0]);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v14);
    return 2147942487LL;
  }
}
