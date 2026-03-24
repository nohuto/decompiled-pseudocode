/*
 * XREFs of WPP_RECORDER_SF_sscc @ 0x1C01C24E0
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C009C0B8 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sscc(_DWORD a1, _BYTE a2, _DWORD a3, _BYTE a4, __int64 a5, const char *a6, const char *a7, ...)
{
  struct RECORDER_LOG__ *v7; // rbp
  __int64 v8; // rbx
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  const char *v13; // r9
  __int64 v14; // r8
  __int64 v15; // r8
  const char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+C8h] [rbp+40h] BYREF
  va_list va; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a7);
  va_start(va, a7);
  v22 = va_arg(va1, _QWORD);
  v7 = gBaseLog;
  v8 = -1LL;
  v9 = a7;
  v10 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = "NULL";
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
      11LL,
      v16,
      v15,
      v13,
      v12,
      (__int64 *)va);
  }
  if ( a7 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a7[v17] );
    v18 = v17 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a7 )
    v9 = "NULL";
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v19 = v8 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !a6 )
    v10 = "NULL";
  LOWORD(v21) = 11;
  return WppAutoLogTrace(
           v7,
           4LL,
           6LL,
           &WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids,
           v21,
           v10,
           v19,
           v9,
           v18,
           (__int64 *)va,
           1LL,
           va1);
}
