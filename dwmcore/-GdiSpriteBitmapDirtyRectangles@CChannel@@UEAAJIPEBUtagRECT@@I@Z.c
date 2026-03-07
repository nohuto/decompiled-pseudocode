__int64 __fastcall CChannel::GdiSpriteBitmapDirtyRectangles(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3,
        unsigned int a4)
{
  unsigned __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  CDataStreamWriter *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  void *v19; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-20h]
  _BYTE v21[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v21, (struct CChannel *)this);
  CChannel::CheckHandle(this, a2, 65LL);
  LODWORD(v19) = 506;
  v20 = 0;
  HIDWORD(v19) = a2;
  v8 = 16LL * a4;
  if ( v8 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    v17 = 2258LL;
    v16 = 2147942934LL;
    goto LABEL_11;
  }
  v20 = 16 * a4;
  v9 = CChannel::BeginCommand((CChannel *)this, &v19, 0xCu, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = (unsigned int)v9;
    v17 = 2259LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v16,
      v18);
    goto LABEL_7;
  }
  v11 = v20;
  if ( v20 )
  {
    v12 = this[22];
    v19 = 0LL;
    v13 = CDataStreamWriter::GetItemDataWritePointer(v12, v20, &v19);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB2u, 0LL);
    else
      memcpy_0(v19, a3, v11);
  }
  CDataStreamWriter::EndItem(this[22]);
  v10 = 0;
LABEL_7:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v21);
  return v10;
}
