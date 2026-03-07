__int64 __fastcall CFormatConverter::CopyPixelsHelper(
        CFormatConverter *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        unsigned int a9,
        unsigned int a10,
        unsigned __int8 *a11)
{
  unsigned int v13; // ebx
  int v14; // edi
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v13 = 0;
  v14 = HrCheckBufferSize(*((_DWORD *)this + 18), a6, a4, a5, a7);
  if ( v14 < 0 )
  {
    v15 = 139LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v14 = HrCheckBufferSize(*((_DWORD *)this + 21), a9, a4, a5, a10);
  if ( v14 < 0 )
  {
    v15 = 145LL;
    goto LABEL_3;
  }
  if ( a5 )
  {
    do
    {
      CScanPipeline::Run((CFormatConverter *)((char *)this + 112), a11, a8, a4, a2, v13 + a3);
      a11 += a9;
      a8 += a6;
      ++v13;
    }
    while ( v13 < a5 );
  }
  return 0LL;
}
