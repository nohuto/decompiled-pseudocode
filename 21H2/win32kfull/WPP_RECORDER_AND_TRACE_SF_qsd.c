/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsd @ 0x1C023C2E4
 * Callers:
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_qsd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  const char *v15; // rcx
  __int64 v16; // rbx
  int v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  const char *v20; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const char *);
  v8 = v20;
  v9 = -1LL;
  if ( a2 )
  {
    if ( v20 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( v20[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = v20;
    if ( !v20 )
      v15 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      16LL,
      (__int64 *)va,
      8LL,
      v15,
      v14,
      va1,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v16 = v9 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    if ( !v8 )
      v8 = "NULL";
    LOWORD(v17) = 16;
    WppAutoLogTrace(
      a4,
      4LL,
      23LL,
      &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      v17,
      (__int64 *)va,
      8LL,
      v8,
      v16,
      va1);
  }
}
