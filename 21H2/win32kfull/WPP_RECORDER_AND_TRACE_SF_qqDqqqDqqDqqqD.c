/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1C016B302
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00AB408 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
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
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 result; // rax
  int v25; // [rsp+28h] [rbp-170h]

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, const unsigned int *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
               22LL,
               &a9,
               8LL,
               &a10,
               8LL,
               &a11,
               4LL,
               &a12,
               8LL,
               &a13,
               8LL,
               &a14,
               8LL,
               &a15,
               4LL,
               &a16,
               8LL,
               &a17,
               8LL,
               &a18,
               4LL,
               &a19,
               8LL,
               &a20,
               8LL,
               &a21,
               8LL,
               &a22,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v25) = 22;
    return WppAutoLogTrace(
             Flink,
             4LL,
             18LL,
             &WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
             v25,
             &a9,
             8LL,
             &a10,
             8LL,
             &a11);
  }
  return result;
}
