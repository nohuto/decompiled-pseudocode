__int64 __fastcall CChannel::SolidColorLegacyMilBrushUpdate(
        CChannel *this,
        unsigned int a2,
        double a3,
        const struct _D3DCOLORVALUE *a4)
{
  float v7; // xmm0_4
  int v8; // eax
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[20]; // [rsp+24h] [rbp-3Ch]
  _BYTE v15[24]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v15, this);
  CChannel::CheckHandle((__int64)this, a2, 175);
  v13 = 535;
  *(_DWORD *)v14 = a2;
  v7 = a3;
  *(float *)&v14[4] = v7;
  v8 = CChannel::SendCommand(this, &v13, 0xCu);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 2927LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8,
      v13);
    goto LABEL_4;
  }
  v13 = 671;
  *(_OWORD *)v14 = 0LL;
  v10 = *(_OWORD *)&a4->r;
  *(_DWORD *)v14 = a2;
  *(_OWORD *)&v14[4] = v10;
  v8 = CChannel::SendCommand(this, &v13, 0x18u);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 2934LL;
    goto LABEL_7;
  }
  v9 = 0;
LABEL_4:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v15);
  return v9;
}
