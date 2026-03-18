/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1C0186618
 * Callers:
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_qqDdS(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        const wchar_t *a13)
{
  struct RECORDER_LOG__ *v13; // r14
  __int64 v14; // rdi
  const wchar_t *v15; // rbx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  bool v22; // zf
  int v23; // [rsp+20h] [rbp-88h]

  v13 = gRimLog;
  v14 = -1LL;
  v15 = a13;
  v18 = 10LL;
  if ( a2 )
  {
    if ( a13 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a13[v19] );
      v20 = 2 * v19 + 2;
    }
    else
    {
      v20 = 10LL;
    }
    v21 = a13;
    if ( !a13 )
      v21 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      71LL,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v21,
      v20,
      0LL);
  }
  if ( a3 )
  {
    v22 = v15 == 0LL;
    if ( v15 )
    {
      do
        ++v14;
      while ( v15[v14] );
      v18 = 2 * v14 + 2;
      v22 = v15 == 0LL;
    }
    if ( v22 )
      v15 = L"NULL";
    LOWORD(v23) = 71;
    WppAutoLogTrace(
      v13,
      4LL,
      1LL,
      &WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v23,
      &a9,
      8LL,
      &a10,
      8LL,
      &a11,
      4LL,
      &a12,
      4LL,
      v15,
      v18,
      0LL);
  }
}
