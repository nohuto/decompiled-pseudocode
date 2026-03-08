/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0072420
 * Callers:
 *     DeferMessagesOnQueue @ 0x1C000AF98 (DeferMessagesOnQueue.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1C0071AC0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00CDE04 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C00DBC20 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B68A8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C01B7674 (-_ShellHandwritingDelegationReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qiqdd(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rbp
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v14; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  __int64 v16; // [rsp+E0h] [rbp+58h] BYREF
  va_list va2; // [rsp+E0h] [rbp+58h]
  __int64 v18; // [rsp+E8h] [rbp+60h] BYREF
  va_list va3; // [rsp+E8h] [rbp+60h]
  va_list va4; // [rsp+F0h] [rbp+68h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  v8 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               (__int64 *)va2,
               8LL,
               (__int64 *)va3,
               4LL,
               va4,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(v8, 4LL, 18LL, a8, v11, (__int64 *)va, 8LL, (__int64 *)va1);
  }
  return result;
}
