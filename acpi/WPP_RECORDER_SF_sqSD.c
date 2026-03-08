/*
 * XREFs of WPP_RECORDER_SF_sqSD @ 0x1C0024CE0
 * Callers:
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008310C (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqSD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  const wchar_t *v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  int v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  const wchar_t *v20; // [rsp+C8h] [rbp+40h]
  va_list va1; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const wchar_t *);
  v6 = v20;
  v7 = -1LL;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v20 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v20[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = v20;
    v13 = -1LL;
    if ( !v20 )
      v12 = L"NULL";
    do
      ++v13;
    while ( aAcpiinternalno[v13] );
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
      21LL,
      "ACPIInternalNotifyAvailableDeviceObject",
      v13 + 1,
      (__int64 *)va,
      8LL,
      v12,
      v11,
      va1,
      4LL,
      0LL);
  }
  v14 = v6 == 0LL;
  if ( v6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v6[v15] );
    v9 = 2 * v15 + 2;
    v14 = v6 == 0LL;
  }
  if ( v14 )
    v6 = L"NULL";
  do
    ++v7;
  while ( aAcpiinternalno[v7] );
  LOWORD(v17) = 21;
  return WppAutoLogTrace(
           a1,
           2LL,
           6LL,
           &WPP_6f88517ea7123f8ddbeafbeda42a4256_Traceguids,
           v17,
           "ACPIInternalNotifyAvailableDeviceObject",
           v7 + 1,
           (__int64 *)va,
           8LL,
           v6,
           v9,
           va1,
           4LL,
           0LL);
}
