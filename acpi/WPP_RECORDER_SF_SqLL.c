/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C0032328
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C0088E00 (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SqLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v18; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e31de8e794e03abc169a9744a0587e03_Traceguids,
      12LL,
      v12,
      v11,
      (__int64 *)va);
  }
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = 2 * v7 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v6 = L"NULL";
  LOWORD(v15) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           6LL,
           &WPP_e31de8e794e03abc169a9744a0587e03_Traceguids,
           v15,
           v6,
           v9,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
