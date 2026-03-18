/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Ds @ 0x1C023BDAC
 * Callers:
 *     ?ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z @ 0x1C023B0A0 (-ValidateDesktopRecalcSetting@DesktopRecalcSettings@@YA_NIK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_Ds(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        char a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  __int64 v12; // rbx
  const char *v13; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  __int64 v19; // rbx
  int v20; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v12 = -1LL;
  v13 = a10;
  if ( a2 )
  {
    if ( a10 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a10[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a10;
    if ( !a10 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
                            a7,
                            &a9,
                            4LL,
                            v18,
                            v17,
                            0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v12;
      while ( v13[v12] );
      v19 = v12 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v20) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          23LL,
                          &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
                          v20,
                          &a9,
                          4LL,
                          v13,
                          v19,
                          0LL);
  }
  return result;
}
