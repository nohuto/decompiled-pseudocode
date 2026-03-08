/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x1C0048DA0
 * Callers:
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qqdd(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF
  va_list va1; // [rsp+C8h] [rbp+50h]
  __int64 v16; // [rsp+D0h] [rbp+58h] BYREF
  va_list va2; // [rsp+D0h] [rbp+58h]
  va_list va3; // [rsp+D8h] [rbp+60h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v8 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
               20LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               (__int64 *)va2,
               4LL,
               va3,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 20;
    return WppAutoLogTrace(
             v8,
             4LL,
             18LL,
             &WPP_b2df51b585c137d44ad42ff4c9684e7b_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
