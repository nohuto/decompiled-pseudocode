__int64 __fastcall CChannel::InteractionUpdateConfiguration(
        CDataStreamWriter **a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        void *Src,
        unsigned int Size)
{
  int v11; // eax
  unsigned int v12; // ebx
  CDataStreamWriter *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  void *v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v20[6]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)v19, (struct CChannel *)a1);
  CChannel::CheckHandle((__int64)a1, a2, 89);
  v20[0] = 195;
  v20[2] = a3;
  v20[1] = a2;
  v20[3] = a4;
  v20[4] = a5;
  v11 = CChannel::BeginCommand(a1, v20, 0x14u, Size);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x98C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v11,
      v17);
  }
  else
  {
    if ( Size )
    {
      v13 = a1[22];
      v18 = 0LL;
      v14 = CDataStreamWriter::GetItemDataWritePointer(v13, Size, &v18);
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB2u, 0LL);
      else
        memcpy_0(v18, Src, Size);
    }
    CDataStreamWriter::EndItem(a1[22]);
    v12 = 0;
  }
  CChannel::CChannelLock::~CChannelLock((CChannel::CChannelLock *)v19);
  return v12;
}
