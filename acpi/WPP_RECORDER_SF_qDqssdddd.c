/*
 * XREFs of WPP_RECORDER_SF_qDqssdddd @ 0x1C0043114
 * Callers:
 *     ACPIThermalDeviceControl @ 0x1C0040410 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qDqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v5; // rbx
  const char *v6; // rsi
  const char *v7; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  const char *v13; // r8
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v19; // [rsp+28h] [rbp-99h]
  __int64 v20; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  __int64 v22; // [rsp+118h] [rbp+57h] BYREF
  va_list va1; // [rsp+118h] [rbp+57h]
  __int64 v24; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+5Fh]
  const char *v26; // [rsp+128h] [rbp+67h]
  const char *v27; // [rsp+130h] [rbp+6Fh]
  __int64 v28; // [rsp+138h] [rbp+77h] BYREF
  va_list va3; // [rsp+138h] [rbp+77h]
  __int64 v30; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+140h] [rbp+7Fh]
  __int64 v32; // [rsp+148h] [rbp+87h] BYREF
  va_list va5; // [rsp+148h] [rbp+87h]
  va_list va6; // [rsp+150h] [rbp+8Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  v26 = va_arg(va3, const char *);
  v27 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v28 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v30 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v32 = va_arg(va6, _QWORD);
  v5 = -1LL;
  v6 = v26;
  v7 = v27;
  v10 = 5LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v27 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v27[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = v27;
    if ( !v27 )
      v13 = "NULL";
    if ( v26 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v26[v14] );
      v10 = v14 + 1;
    }
    v15 = v26;
    if ( !v26 )
      v15 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      v15,
      v10,
      v13,
      v12,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  }
  if ( v7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v7[v16] );
  }
  if ( !v7 )
    v7 = "NULL";
  if ( v6 )
  {
    do
      ++v5;
    while ( v6[v5] );
    v17 = v5 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
           v19,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           v6,
           v17,
           v7);
}
