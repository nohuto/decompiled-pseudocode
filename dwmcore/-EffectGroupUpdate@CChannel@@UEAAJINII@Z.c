__int64 __fastcall CChannel::EffectGroupUpdate(CChannel *this, unsigned int a2, double a3, int a4, float a5)
{
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v14; // [rsp+24h] [rbp-2Ch]
  float v15; // [rsp+28h] [rbp-28h]
  _BYTE v16[16]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v16, this);
  CChannel::CheckHandle((__int64)this, a2, 58);
  if ( a5 != 0.0 )
    CChannel::CheckHandle((__int64)this, LODWORD(a5), 187);
  v13 = 503;
  v14 = a2;
  v8 = a3;
  v15 = v8;
  v9 = CChannel::SendCommand(this, &v13, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 2336LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      v13);
    goto LABEL_7;
  }
  v13 = 504;
  v14 = a2;
  v15 = *(float *)&a4;
  v9 = CChannel::SendCommand(this, &v13, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 2343LL;
    goto LABEL_11;
  }
  v13 = 505;
  v14 = a2;
  v15 = a5;
  v9 = CChannel::SendCommand(this, &v13, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v12 = 2350LL;
    goto LABEL_11;
  }
  v10 = 0;
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v16);
  return v10;
}
