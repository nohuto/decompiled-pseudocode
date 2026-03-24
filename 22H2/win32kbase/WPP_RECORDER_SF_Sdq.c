/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C016D558
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0053EC0 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C954 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, const wchar_t *a6, ...)
{
  struct RECORDER_LOG__ *v6; // r14
  __int64 v7; // rdi
  const wchar_t *v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  bool v14; // zf
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v17 = va_arg(va1, _QWORD);
  v6 = gRimLog;
  v7 = -1LL;
  v8 = a6;
  v10 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      a4,
      v13,
      v12,
      (__int64 *)va,
      4LL,
      va1);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v10 = 2 * v7 + 2;
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v8 = L"NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           v6,
           4LL,
           1LL,
           &WPP_a75f261dfb463415346bb11edf387329_Traceguids,
           v16,
           v8,
           v10,
           (__int64 *)va,
           4LL,
           va1,
           8LL,
           0LL);
}
