/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1C00997F4
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
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
        const char *a19)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r15
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  const char *v27; // rax
  int v28; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+2Fh] BYREF

  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v21 = -1LL;
  v22 = (__int64)a19;
  if ( a2 )
  {
    if ( a19 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)&a19[2 * v25] );
      v26 = 2 * v25 + 2;
    }
    else
    {
      v26 = 10LL;
    }
    v27 = a19;
    if ( !a19 )
      v27 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
                            17LL,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            4LL,
                            &a14,
                            4LL,
                            &a15,
                            4LL,
                            &a16,
                            4LL,
                            &a17,
                            4LL,
                            &a18,
                            4LL,
                            v27,
                            v26,
                            0LL);
  }
  if ( a3 )
  {
    if ( v22 )
    {
      do
        ++v21;
      while ( *(_WORD *)(v22 + 2 * v21) );
    }
    LOWORD(v28) = 17;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          23LL,
                          &WPP_c7e965b19b733746190bb823e4964b27_Traceguids,
                          v28,
                          &a9,
                          4LL,
                          &a10,
                          4LL,
                          &a11);
  }
  return result;
}
