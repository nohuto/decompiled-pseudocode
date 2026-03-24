/*
 * XREFs of WPP_RECORDER_SF_qqSd @ 0x1C0158694
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00539C0 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbp
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  const wchar_t *v10; // rcx
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v16; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const wchar_t *v18; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, const wchar_t *);
  v5 = gRimLog;
  v6 = v18;
  v7 = -1LL;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
      &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
      57LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v10);
  }
  v11 = v6 == 0LL;
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v8 = 2 * v7 + 2;
    v11 = v6 == 0LL;
  }
  if ( v11 )
    v6 = L"NULL";
  LOWORD(v13) = 57;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6,
           v8,
           va2);
}
