/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_S @ 0x1C009A694
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C00249B8 (zzzSetWindowsHookEx.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_S(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9)
{
  struct _LIST_ENTRY *Flink; // r15
  const char *v10; // rbx
  __int64 v11; // rdi
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v10 = a9;
  v11 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)&a9[2 * v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v18,
      v17,
      0LL);
  }
  if ( a3 )
  {
    v15 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v11;
      while ( *(_WORD *)&a9[2 * v11] );
      v14 = 2 * v11 + 2;
      v15 = a9 == 0LL;
    }
    if ( v15 )
      v10 = L"NULL";
    LOWORD(v19) = a7;
    WppAutoLogTrace(Flink, a5, a6, a8, v19, v10, v14, 0LL, v20, v21);
  }
}
