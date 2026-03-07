__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        CDataStreamWriter **a1,
        unsigned int a2,
        double a3,
        __int128 *a4,
        _OWORD *a5,
        int a6,
        int a7,
        int a8,
        void *Src,
        unsigned int a10)
{
  float v13; // xmm0_4
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 v18; // xmm0
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  CDataStreamWriter *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v31; // [rsp+30h] [rbp-40h] BYREF
  _BYTE Size[20]; // [rsp+34h] [rbp-3Ch]
  _BYTE v33[24]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  void *v35; // [rsp+A0h] [rbp+30h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v33, (struct CChannel *)a1);
  CChannel::CheckHandle((__int64)a1, a2, 100);
  v31 = 535;
  *(_DWORD *)Size = a2;
  v13 = a3;
  *(float *)&Size[4] = v13;
  v14 = CChannel::SendCommand((CChannel *)a1, &v31, 0xCu);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = (unsigned int)v14;
    v17 = 2958LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v16);
    goto LABEL_23;
  }
  v31 = 539;
  *(_OWORD *)Size = 0LL;
  v18 = *a4;
  *(_DWORD *)Size = a2;
  *(_OWORD *)&Size[4] = v18;
  v19 = CChannel::SendCommand((CChannel *)a1, &v31, 0x18u);
  v15 = v19;
  if ( v19 < 0 )
  {
    v16 = (unsigned int)v19;
    v17 = 2965LL;
    goto LABEL_22;
  }
  v31 = 540;
  *(_OWORD *)Size = 0LL;
  *(_DWORD *)Size = a2;
  *(_OWORD *)&Size[4] = *a5;
  v20 = CChannel::SendCommand((CChannel *)a1, &v31, 0x18u);
  v15 = v20;
  if ( v20 < 0 )
  {
    v16 = (unsigned int)v20;
    v17 = 2972LL;
    goto LABEL_22;
  }
  v31 = 516;
  *(_DWORD *)&Size[4] = a6;
  *(_DWORD *)Size = a2;
  v21 = CChannel::SendCommand((CChannel *)a1, &v31, 0xCu);
  v15 = v21;
  if ( v21 < 0 )
  {
    v16 = (unsigned int)v21;
    v17 = 2979LL;
    goto LABEL_22;
  }
  v31 = 517;
  *(_DWORD *)&Size[4] = a7;
  *(_DWORD *)Size = a2;
  v22 = CChannel::SendCommand((CChannel *)a1, &v31, 0xCu);
  v15 = v22;
  if ( v22 < 0 )
  {
    v16 = (unsigned int)v22;
    v17 = 2986LL;
    goto LABEL_22;
  }
  v31 = 518;
  *(_DWORD *)&Size[4] = a8;
  *(_DWORD *)Size = a2;
  v23 = CChannel::SendCommand((CChannel *)a1, &v31, 0xCu);
  v15 = v23;
  if ( v23 < 0 )
  {
    v16 = (unsigned int)v23;
    v17 = 2993LL;
    goto LABEL_22;
  }
  v31 = 519;
  *(_QWORD *)Size = a2;
  v24 = 24LL * a10;
  if ( v24 > 0xFFFFFFFF )
  {
    v15 = -2147024362;
    v17 = 2999LL;
    v16 = 2147942934LL;
    goto LABEL_22;
  }
  *(_DWORD *)&Size[4] = 24 * a10;
  v25 = CChannel::BeginCommand(a1, &v31, 0xCu, v24);
  v15 = v25;
  if ( v25 < 0 )
  {
    v16 = (unsigned int)v25;
    v17 = 3000LL;
    goto LABEL_22;
  }
  v26 = *(_DWORD *)&Size[4];
  if ( *(_DWORD *)&Size[4] )
  {
    v27 = a1[22];
    v35 = 0LL;
    v28 = CDataStreamWriter::GetItemDataWritePointer(v27, *(unsigned int *)&Size[4], &v35);
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xB2u, 0LL);
    else
      memcpy_0(v35, Src, v26);
  }
  CDataStreamWriter::EndItem(a1[22]);
  v15 = 0;
LABEL_23:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v33);
  return v15;
}
