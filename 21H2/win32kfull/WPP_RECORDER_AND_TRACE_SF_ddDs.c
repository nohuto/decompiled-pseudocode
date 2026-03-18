/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddDs @ 0x1C0118C60
 * Callers:
 *     ?PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0077A00 (-PushProcessLaunchForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WPP_RECORDER_AND_TRACE_SF_ddDs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        char a11,
        const char *a12)
{
  struct _LIST_ENTRY *Flink; // rbp
  const char *v13; // rdi
  __int64 v14; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-68h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v13 = a12;
  v14 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a12[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a12;
    if ( !a12 )
      v19 = "NULL";
    ((void (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      a1,
      43LL,
      &WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
      16LL,
      &a9,
      4LL,
      &a10,
      4LL,
      &a11,
      4LL,
      v19,
      v18,
      0LL);
  }
  if ( a3 )
  {
    if ( v13 )
    {
      do
        ++v14;
      while ( v13[v14] );
    }
    LOWORD(v20) = 16;
    WppAutoLogTrace(Flink, 4LL, 2LL, &WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids, v20, &a9, 4LL, &a10, 4LL, &a11);
  }
}
