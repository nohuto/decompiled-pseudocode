/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqq @ 0x1C007AC8C
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C007AA20 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C021647C (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void WPP_RECORDER_AND_TRACE_SF_sqq(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+C8h] [rbp+50h] BYREF
  va_list va; // [rsp+C8h] [rbp+50h]
  va_list va1; // [rsp+D0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v19 = va_arg(va1, _QWORD);
  v9 = a9;
  v10 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      a8,
      a7,
      v17,
      v16,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v10;
      while ( a9[v10] );
      v14 = v10 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    if ( !a9 )
      v9 = "NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(a4, 4LL, a6, a8, v18, v9, v14, (__int64 *)va, 8LL, va1, 8LL, 0LL);
  }
}
