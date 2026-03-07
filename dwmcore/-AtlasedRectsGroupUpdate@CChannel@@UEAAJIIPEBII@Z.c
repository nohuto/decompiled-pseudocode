__int64 __fastcall CChannel::AtlasedRectsGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  CDataStreamWriter *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // [rsp+20h] [rbp-30h]
  void *v21; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-18h]
  _BYTE v23[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v23, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 7);
  if ( a3 )
    CChannel::CheckHandle((__int64)this, a3, 13);
  LODWORD(v21) = 487;
  HIDWORD(v21) = a2;
  v22 = a3;
  v9 = CChannel::SendCommand((CChannel *)this, &v21, 0xCu);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = (unsigned int)v9;
    v19 = 2650LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)v18,
      v20);
    goto LABEL_10;
  }
  LODWORD(v21) = 488;
  v22 = 0;
  v11 = 4LL * a5;
  HIDWORD(v21) = a2;
  if ( v11 > 0xFFFFFFFF )
  {
    v10 = -2147024362;
    v19 = 2656LL;
    v18 = 2147942934LL;
    goto LABEL_15;
  }
  v22 = 4 * a5;
  v12 = CChannel::BeginCommand(this, &v21, 0xCu, v11);
  v10 = v12;
  if ( v12 < 0 )
  {
    v18 = (unsigned int)v12;
    v19 = 2657LL;
    goto LABEL_15;
  }
  v13 = v22;
  if ( v22 )
  {
    v14 = this[22];
    v21 = 0LL;
    v15 = CDataStreamWriter::GetItemDataWritePointer(v14, v22, &v21);
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB2u, 0LL);
    else
      memcpy_0(v21, a4, v13);
  }
  CDataStreamWriter::EndItem(this[22]);
  v10 = 0;
LABEL_10:
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v23);
  return v10;
}
