/*
 * XREFs of WPP_RECORDER_SF__HEX_ @ 0x1C0041698
 * Callers:
 *     UsbhIoctlTraceOutput @ 0x1C0040FD4 (UsbhIoctlTraceOutput.c)
 *     UsbhExceptionTrace @ 0x1C004AC64 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__HEX_(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v8; // r11
  __int16 *v10; // rbx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h]

  v8 = (unsigned __int64)a3 >> 16;
  v10 = (__int16 *)(a6 + 1);
  v11 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v11, ((_BYTE)a3 - 1) & 0x1F) )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, _QWORD *, __int64, _QWORD, _QWORD, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      a6 + 1,
      2LL,
      *a6,
      *v10,
      0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, 0LL, a3, a5, v13, v10);
}
