/*
 * XREFs of WPP_RECORDER_SF_qdDSd @ 0x1C015030C
 * Callers:
 *     RIMOpenDev @ 0x1C00AD020 (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // r14
  __int64 v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v17; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v19; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const wchar_t *v21; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v21 = va_arg(va3, const wchar_t *);
  v5 = gRimLog;
  v6 = -1LL;
  v7 = v21;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v21 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v21[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v21;
    if ( !v21 )
      v11 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v11,
      v10,
      va3,
      4LL,
      0LL);
  }
  v12 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v12 = v7 == 0LL;
  }
  if ( v12 )
    v7 = L"NULL";
  LOWORD(v14) = a4;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v7);
}
