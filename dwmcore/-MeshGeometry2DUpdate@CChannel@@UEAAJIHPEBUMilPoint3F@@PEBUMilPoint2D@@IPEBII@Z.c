__int64 __fastcall CChannel::MeshGeometry2DUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        int a3,
        const struct MilPoint3F *a4,
        const struct MilPoint2D *Src,
        unsigned int a6,
        const unsigned int *a7,
        unsigned int a8)
{
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  unsigned int v19; // esi
  CDataStreamWriter *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // ebx
  CDataStreamWriter *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ebx
  CDataStreamWriter *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  void *v36; // [rsp+30h] [rbp-20h] BYREF
  size_t Size; // [rsp+38h] [rbp-18h]
  _BYTE v38[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v38, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 111);
  LODWORD(v36) = 541;
  HIDWORD(v36) = a2;
  LODWORD(Size) = a3;
  v12 = CChannel::SendCommand((CChannel *)this, &v36, 0xCu);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v15 = 2537LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v14);
    goto LABEL_30;
  }
  LODWORD(Size) = 0;
  LODWORD(v36) = 542;
  HIDWORD(v36) = a2;
  v16 = 12LL * a6;
  if ( v16 > 0xFFFFFFFF )
  {
    v15 = 2543LL;
    goto LABEL_28;
  }
  LODWORD(Size) = 12 * a6;
  v17 = CChannel::BeginCommand(this, &v36, 0xCu, v16);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v17);
    v13 = v18;
    goto LABEL_30;
  }
  v19 = Size;
  if ( (_DWORD)Size )
  {
    v20 = this[22];
    v36 = 0LL;
    v21 = CDataStreamWriter::GetItemDataWritePointer(v20, Size, &v36);
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xB2u, 0LL);
    else
      memcpy_0(v36, a4, v19);
  }
  CDataStreamWriter::EndItem(this[22]);
  v23 = 16LL * a6;
  LODWORD(Size) = 0;
  HIDWORD(v36) = a2;
  LODWORD(v36) = 544;
  if ( v23 > 0xFFFFFFFF )
  {
    v15 = 2552LL;
    goto LABEL_28;
  }
  LODWORD(Size) = 16 * a6;
  v24 = CChannel::BeginCommand(this, &v36, 0xCu, v23);
  v13 = v24;
  if ( v24 < 0 )
  {
    v14 = (unsigned int)v24;
    v15 = 2553LL;
    goto LABEL_29;
  }
  v25 = Size;
  if ( (_DWORD)Size )
  {
    v26 = this[22];
    v36 = 0LL;
    v27 = CDataStreamWriter::GetItemDataWritePointer(v26, Size, &v36);
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xB2u, 0LL);
    else
      memcpy_0(v36, Src, v25);
  }
  CDataStreamWriter::EndItem(this[22]);
  LODWORD(v36) = 546;
  LODWORD(Size) = 0;
  v29 = 4LL * a8;
  HIDWORD(v36) = a2;
  if ( v29 > 0xFFFFFFFF )
  {
    v15 = 2561LL;
LABEL_28:
    v13 = -2147024362;
    v14 = 2147942934LL;
    goto LABEL_29;
  }
  LODWORD(Size) = 4 * a8;
  v30 = CChannel::BeginCommand(this, &v36, 0xCu, v29);
  v13 = v30;
  if ( v30 < 0 )
  {
    v14 = (unsigned int)v30;
    v15 = 2562LL;
    goto LABEL_29;
  }
  v31 = Size;
  if ( (_DWORD)Size )
  {
    v32 = this[22];
    v36 = 0LL;
    v33 = CDataStreamWriter::GetItemDataWritePointer(v32, Size, &v36);
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xB2u, 0LL);
    else
      memcpy_0(v36, a7, v31);
  }
  CDataStreamWriter::EndItem(this[22]);
  v13 = 0;
LABEL_30:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v38);
  return v13;
}
