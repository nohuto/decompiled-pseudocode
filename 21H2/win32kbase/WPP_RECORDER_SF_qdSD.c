/*
 * XREFs of WPP_RECORDER_SF_qdSD @ 0x1C01825D4
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C01820FC (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbp
  __int64 v6; // rdi
  const wchar_t *v7; // rbx
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
  v6 = -1LL;
  v7 = v18;
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
      &WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      v10);
  }
  v11 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v8 = 2 * v6 + 2;
    v11 = v7 == 0LL;
  }
  if ( v11 )
    v7 = L"NULL";
  LOWORD(v13) = 11;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           v7,
           v8,
           va2);
}
