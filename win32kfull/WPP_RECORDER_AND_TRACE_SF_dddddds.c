/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddds @ 0x1C023DED4
 * Callers:
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1C023D974 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_dddddds(
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
        char a12,
        char a13,
        char a14,
        const char *a15)
{
  _UNKNOWN **result; // rax
  const char *v16; // rdi
  __int64 v17; // rbx
  struct RECORDER_LOG__ *v18; // r14
  __int64 v21; // rcx
  __int64 v22; // rcx
  const char *v23; // rax
  int v24; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v16 = a15;
  v17 = -1LL;
  v18 = gFullLog;
  if ( a2 )
  {
    if ( a15 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a15[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a15;
    if ( !a15 )
      v23 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
                            11LL,
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
                            v23,
                            v22,
                            0LL);
  }
  if ( a3 )
  {
    if ( v16 )
    {
      do
        ++v17;
      while ( v16[v17] );
    }
    LOWORD(v24) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v18,
                          4LL,
                          1LL,
                          &WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
                          v24,
                          &a9,
                          4LL,
                          &a10);
  }
  return result;
}
