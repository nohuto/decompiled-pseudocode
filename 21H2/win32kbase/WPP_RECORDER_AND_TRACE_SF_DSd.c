/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_DSd @ 0x1C01A1054
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00C33C0 (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_DSd(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, __int64 a8, ...)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v18; // [rsp+20h] [rbp-68h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+68h] [rbp-20h]
  __int64 v21; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  const wchar_t *v23; // [rsp+D8h] [rbp+50h]
  va_list va1; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, const wchar_t *);
  v8 = v23;
  v9 = -1LL;
  v13 = 10LL;
  if ( a2 )
  {
    if ( v23 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v23[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v23;
    if ( !v23 )
      v16 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      57LL,
      (__int64 *)va,
      4LL,
      v16,
      v15,
      va1,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v17 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v13 = 2 * v9 + 2;
      v17 = v8 == 0LL;
    }
    if ( v17 )
      v8 = L"NULL";
    LOWORD(v18) = 57;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_3100a0ce65ca3ababb0b99fd70935186_Traceguids,
      v18,
      (__int64 *)va,
      4LL,
      v8,
      v13,
      va1,
      4LL,
      0LL,
      v19,
      v20);
  }
}
