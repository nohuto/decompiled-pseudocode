/*
 * XREFs of WPP_RECORDER_SF_Sdqdqq @ 0x1C0048730
 * Callers:
 *     UsbhQueryGlobalDeviceValue @ 0x1C0045E00 (UsbhQueryGlobalDeviceValue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdqdqq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-98h]
  __int64 v15; // [rsp+F0h] [rbp+38h] BYREF
  va_list va; // [rsp+F0h] [rbp+38h]
  __int64 v17; // [rsp+F8h] [rbp+40h] BYREF
  va_list va1; // [rsp+F8h] [rbp+40h]
  __int64 v19; // [rsp+100h] [rbp+48h] BYREF
  va_list va2; // [rsp+100h] [rbp+48h]
  va_list va3; // [rsp+108h] [rbp+50h] BYREF

  va_start(va3, a6);
  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
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
    v11 = a6;
    if ( !a6 )
      v11 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
      74LL,
      v11,
      v10,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      va3);
  }
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  LOWORD(v14) = 74;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_290dcc7ac903398322657943f635c8d9_Traceguids, v14, v6);
}
