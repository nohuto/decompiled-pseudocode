__int64 __fastcall CChannel::AtlasedRectsMeshUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        const struct MilRectF *Src,
        const struct MilRectF *a6,
        unsigned int a7)
{
  unsigned __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  CDataStreamWriter *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  CDataStreamWriter *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // [rsp+20h] [rbp-30h]
  void *v29; // [rsp+30h] [rbp-20h] BYREF
  size_t Size; // [rsp+38h] [rbp-18h]
  _BYTE v31[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v31, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 8);
  v11 = 16LL * a7;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    v27 = 2599LL;
    v26 = 2147942934LL;
    goto LABEL_21;
  }
  LODWORD(v29) = 490;
  HIDWORD(v29) = a2;
  LODWORD(Size) = a3;
  v12 = CChannel::SendCommand((CChannel *)this, &v29, 0xCu);
  v13 = v12;
  if ( v12 < 0 )
  {
    v26 = (unsigned int)v12;
    v27 = 2605LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v26,
      v28);
    goto LABEL_13;
  }
  LODWORD(v29) = 491;
  HIDWORD(v29) = a2;
  LODWORD(Size) = a4;
  v14 = CChannel::SendCommand((CChannel *)this, &v29, 0xCu);
  v13 = v14;
  if ( v14 < 0 )
  {
    v26 = (unsigned int)v14;
    v27 = 2612LL;
    goto LABEL_21;
  }
  LODWORD(v29) = 492;
  HIDWORD(v29) = a2;
  LODWORD(Size) = 16 * a7;
  v15 = CChannel::BeginCommand(this, &v29, 0xCu, v11);
  v13 = v15;
  if ( v15 < 0 )
  {
    v26 = (unsigned int)v15;
    v27 = 2619LL;
    goto LABEL_21;
  }
  v16 = Size;
  if ( (_DWORD)Size )
  {
    v17 = this[22];
    v29 = 0LL;
    v18 = CDataStreamWriter::GetItemDataWritePointer(v17, Size, &v29);
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xB2u, 0LL);
    else
      memcpy_0(v29, Src, v16);
  }
  CDataStreamWriter::EndItem(this[22]);
  LODWORD(v29) = 494;
  HIDWORD(v29) = a2;
  LODWORD(Size) = 16 * a7;
  v20 = CChannel::BeginCommand(this, &v29, 0xCu, v11);
  v13 = v20;
  if ( v20 < 0 )
  {
    v26 = (unsigned int)v20;
    v27 = 2628LL;
    goto LABEL_21;
  }
  v21 = Size;
  if ( (_DWORD)Size )
  {
    v22 = this[22];
    v29 = 0LL;
    v23 = CDataStreamWriter::GetItemDataWritePointer(v22, Size, &v29);
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xB2u, 0LL);
    else
      memcpy_0(v29, a6, v21);
  }
  CDataStreamWriter::EndItem(this[22]);
  v13 = 0;
LABEL_13:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v31);
  return v13;
}
