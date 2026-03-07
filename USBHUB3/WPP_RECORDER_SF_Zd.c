__int64 WPP_RECORDER_SF_Zd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rbp
  __int64 v8; // rcx
  const wchar_t *v9; // r8
  const wchar_t *v10; // rdx
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"\b";
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0 || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    goto LABEL_11;
  if ( !a6 )
  {
    v8 = 8LL;
    goto LABEL_7;
  }
  v8 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v9 = L"NULL";
    goto LABEL_8;
  }
  v9 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v10 = L"\b";
  if ( a6 )
    v10 = a6;
  pfnWppTraceMessage(
    WPP_GLOBAL_Control->AttachedDevice,
    43LL,
    &WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
    161LL,
    v10,
    2LL,
    v9,
    v8,
    va);
LABEL_11:
  v11 = a6 == 0LL;
  if ( a6 )
    v11 = 0;
  if ( !v11 )
    v6 = a6;
  LOWORD(v13) = 161;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v13, v6);
}
