__int64 __fastcall CChannel::ImageLegacyMilBrushUpdate(
        struct CChannel *a1,
        unsigned int a2,
        double a3,
        _OWORD *a4,
        _OWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        unsigned int a17)
{
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // ebx
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v25[20]; // [rsp+24h] [rbp-3Ch]
  _BYTE v26[24]; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v26, a1);
  CChannel::CheckHandle(a1, a2, 84LL);
  if ( a6 )
    CChannel::CheckHandle(a1, a6, 62LL);
  if ( a7 )
    CChannel::CheckHandle(a1, a7, 186LL);
  if ( a8 )
    CChannel::CheckHandle(a1, a8, 186LL);
  if ( a11 )
    CChannel::CheckHandle(a1, a11, 140LL);
  if ( a12 )
    CChannel::CheckHandle(a1, a12, 140LL);
  if ( a17 )
    CChannel::CheckHandle(a1, a17, 85LL);
  v24 = 535;
  *(_DWORD *)v25 = a2;
  v19 = a3;
  *(float *)&v25[4] = v19;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3039LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v20,
      v24);
    goto LABEL_29;
  }
  v24 = 523;
  *(_OWORD *)v25 = 0LL;
  *(_DWORD *)v25 = a2;
  *(_OWORD *)&v25[4] = *a4;
  v20 = CChannel::SendCommand(a1, &v24, 0x18u);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3046LL;
    goto LABEL_33;
  }
  v24 = 525;
  *(_OWORD *)v25 = 0LL;
  *(_DWORD *)v25 = a2;
  *(_OWORD *)&v25[4] = *a5;
  v20 = CChannel::SendCommand(a1, &v24, 0x18u);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3053LL;
    goto LABEL_33;
  }
  v24 = 536;
  *(_DWORD *)&v25[4] = a6;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3060LL;
    goto LABEL_33;
  }
  v24 = 537;
  *(_DWORD *)&v25[4] = a7;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3067LL;
    goto LABEL_33;
  }
  v24 = 538;
  *(_DWORD *)v25 = a2;
  *(_DWORD *)&v25[4] = a8;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3074LL;
    goto LABEL_33;
  }
  v24 = 521;
  *(_DWORD *)&v25[4] = a9;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3081LL;
    goto LABEL_33;
  }
  v24 = 522;
  *(_DWORD *)&v25[4] = a10;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3088LL;
    goto LABEL_33;
  }
  v24 = 524;
  *(_DWORD *)v25 = a2;
  *(_DWORD *)&v25[4] = a11;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3095LL;
    goto LABEL_33;
  }
  v24 = 526;
  *(_DWORD *)v25 = a2;
  *(_DWORD *)&v25[4] = a12;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3102LL;
    goto LABEL_33;
  }
  v24 = 527;
  *(_DWORD *)&v25[4] = a13;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3109LL;
    goto LABEL_33;
  }
  v24 = 528;
  *(_DWORD *)&v25[4] = a14;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3116LL;
    goto LABEL_33;
  }
  v24 = 529;
  *(_DWORD *)&v25[4] = a15;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3123LL;
    goto LABEL_33;
  }
  v24 = 530;
  *(_DWORD *)&v25[4] = a16;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3130LL;
    goto LABEL_33;
  }
  v24 = 534;
  *(_DWORD *)&v25[4] = a17;
  *(_DWORD *)v25 = a2;
  v20 = CChannel::SendCommand(a1, &v24, 0xCu);
  v21 = v20;
  if ( v20 < 0 )
  {
    v23 = 3137LL;
    goto LABEL_33;
  }
  v21 = 0;
LABEL_29:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v26);
  return v21;
}
