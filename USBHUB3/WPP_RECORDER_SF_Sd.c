__int64 WPP_RECORDER_SF_Sd(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const wchar_t *a6,
        ...)
{
  const wchar_t *v6; // rbp
  __int64 v7; // rdi
  unsigned int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // rcx
  const wchar_t *v13; // rdx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = -1LL;
  v9 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = L"NULL";
    if ( a6 )
      v13 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids,
      a4,
      v13,
      v12,
      va,
      4LL,
      0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v14 = a6 == 0LL;
  }
  if ( !v14 )
    v6 = a6;
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, v9, 1LL, &WPP_5169c4c8089132207a438b4341aed5b6_Traceguids, v16, v6);
}
