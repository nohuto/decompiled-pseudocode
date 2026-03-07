__int64 __fastcall CChannel::ScaleTransformUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        double a4,
        double a5,
        double a6)
{
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // ebx
  float v11; // xmm0_4
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-3Ch]
  float v16; // [rsp+28h] [rbp-38h]
  _BYTE v17[16]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v17, this);
  CChannel::CheckHandle((__int64)this, a2, 152);
  v14 = 621;
  v15 = a2;
  v8 = a3;
  v16 = v8;
  v9 = CChannel::SendCommand(this, &v14, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 2772LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v9,
      v14);
    goto LABEL_6;
  }
  v14 = 622;
  v15 = a2;
  v11 = a4;
  v16 = v11;
  v9 = CChannel::SendCommand(this, &v14, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 2779LL;
    goto LABEL_10;
  }
  v14 = 623;
  v15 = a2;
  v16 = a5;
  v9 = CChannel::SendCommand(this, &v14, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 2786LL;
    goto LABEL_10;
  }
  v14 = 624;
  v15 = a2;
  v16 = a6;
  v9 = CChannel::SendCommand(this, &v14, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v13 = 2793LL;
    goto LABEL_10;
  }
  v10 = 0;
LABEL_6:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v17);
  return v10;
}
