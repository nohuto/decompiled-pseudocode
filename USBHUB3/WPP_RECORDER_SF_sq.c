/*
 * XREFs of WPP_RECORDER_SF_Sq @ 0x1C0034628
 * Callers:
 *     HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey @ 0x1C008908C (HUBREG_ReadUsb4HostNameStringFromDeviceHardwareKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = L"NULL";
    if ( a6 )
      v11 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids,
      158LL,
      v11,
      v10,
      va,
      8LL,
      0LL);
  }
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = a6 == 0LL;
  }
  if ( !v12 )
    v6 = a6;
  LOWORD(v14) = 158;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_7a0afab5c79d3741c23ff4ee70090e0b_Traceguids, v14, v6);
}
