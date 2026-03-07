__int64 WPP_RECORDER_SF_qSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  const wchar_t *v10; // rcx
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  __int64 v15; // [rsp+68h] [rbp-10h]
  __int64 v16; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v18; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, const wchar_t *);
  v5 = v18;
  v6 = -1LL;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v18 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v18[v9] );
    }
    v10 = v18;
    if ( !v18 )
      v10 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
      12LL,
      (__int64 *)va,
      8LL,
      v10);
  }
  v11 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v8 = 2 * v6 + 2;
    v11 = v5 == 0LL;
  }
  if ( v11 )
    v5 = L"NULL";
  LOWORD(v13) = 12;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           v5,
           v8,
           va1,
           4LL,
           0LL,
           v14,
           v15);
}
