__int64 __fastcall CChannel::TranslateTransformUpdate(CChannel *this, unsigned int a2, double a3, double a4)
{
  float v6; // xmm0_4
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  float v10; // xmm0_4
  int v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-3Ch]
  float v14; // [rsp+28h] [rbp-38h]
  _BYTE v15[16]; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, this);
  CChannel::CheckHandle((__int64)this, a2, 190);
  v12 = 698;
  v13 = a2;
  v6 = a3;
  v14 = v6;
  v7 = CChannel::SendCommand(this, &v12, 0xCu);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v12 = 699;
    v13 = a2;
    v10 = a4;
    v14 = v10;
    v7 = CChannel::SendCommand(this, &v12, 0xCu);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 2752LL;
  }
  else
  {
    v9 = 2745LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v15);
  return v8;
}
