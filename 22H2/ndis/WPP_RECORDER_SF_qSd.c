/*
 * XREFs of WPP_RECORDER_SF_qSd @ 0x1C005FD98
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x1C0115F60 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v15; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, const wchar_t *);
  v5 = (__int64)v15;
  v6 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( v15 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v15[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v15;
    if ( !v15 )
      v10 = L"NULL";
    ndisWppFastTraceMessage(&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids, 0x10u, va, 8LL, v10, v9, va1, 4LL, 0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
  }
  LOWORD(v12) = 16;
  return WppAutoLogTrace(a1, 2LL, 8LL, &WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids, v12, (__int64 *)va);
}
