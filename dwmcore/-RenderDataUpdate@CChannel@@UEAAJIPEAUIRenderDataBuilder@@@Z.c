__int64 __fastcall CChannel::RenderDataUpdate(CDataStreamWriter **this, unsigned int a2, struct IRenderDataBuilder *a3)
{
  unsigned int v6; // r9d
  int v7; // eax
  unsigned int v8; // ebx
  size_t v9; // rbx
  const void *v11; // rdi
  CDataStreamWriter *v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-20h] BYREF
  size_t Size; // [rsp+34h] [rbp-1Ch]
  _BYTE v18[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  void *v20; // [rsp+70h] [rbp+20h] BYREF

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v18, (struct CChannel *)this);
  CChannel::CheckHandle(this, a2, 145LL);
  v16 = 334;
  Size = a2;
  if ( a3 )
    v6 = *((_DWORD *)a3 + 10);
  else
    v6 = 0;
  HIDWORD(Size) = v6;
  v7 = CChannel::BeginCommand((CChannel *)this, &v16, 0xCu, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x469,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v7,
      v15);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v18);
    return v8;
  }
  else
  {
    v9 = HIDWORD(Size);
    if ( HIDWORD(Size) )
    {
      if ( *((_DWORD *)a3 + 2) )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v11 = (const void *)*((_QWORD *)a3 + 2);
      v12 = this[22];
      v20 = 0LL;
      v13 = CDataStreamWriter::GetItemDataWritePointer(v12, HIDWORD(Size), &v20);
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xB2u, 0LL);
      else
        memcpy_0(v20, v11, v9);
    }
    CDataStreamWriter::EndItem(this[22]);
    CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v18);
    return 0LL;
  }
}
