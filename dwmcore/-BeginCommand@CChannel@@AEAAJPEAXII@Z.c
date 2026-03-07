__int64 __fastcall CChannel::BeginCommand(CDataStreamWriter **this, void *a2, unsigned int a3, int a4)
{
  int v7; // eax
  unsigned int v8; // esi
  CDataStreamWriter *v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  void *v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 + a4 < a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9C,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL,
      v13);
    return 2147942934LL;
  }
  else
  {
    v7 = CChannel::EnsureSize((CChannel *)this, a3 + a4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)v7,
        v13);
      return v8;
    }
    else
    {
      CDataStreamWriter::BeginItem(this[22]);
      if ( a3 )
      {
        v9 = this[22];
        v14 = 0LL;
        v10 = CDataStreamWriter::GetItemDataWritePointer(v9, a3, &v14);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB2u, 0LL);
        else
          memcpy_0(v14, a2, a3);
      }
      return 0LL;
    }
  }
}
