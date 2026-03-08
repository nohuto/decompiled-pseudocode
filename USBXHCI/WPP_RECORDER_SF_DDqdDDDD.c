/*
 * XREFs of WPP_RECORDER_SF_DDqdDDDD @ 0x1C0002F20
 * Callers:
 *     Isoch_Stage_CompleteTD @ 0x1C00029D0 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C0045868 (Isoch_Transfer_PrepareForCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDqdDDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-98h]
  __int64 v8; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  __int64 v10; // [rsp+F0h] [rbp+38h] BYREF
  va_list va1; // [rsp+F0h] [rbp+38h]
  __int64 v12; // [rsp+F8h] [rbp+40h] BYREF
  va_list va2; // [rsp+F8h] [rbp+40h]
  __int64 v14; // [rsp+100h] [rbp+48h] BYREF
  va_list va3; // [rsp+100h] [rbp+48h]
  __int64 v16; // [rsp+108h] [rbp+50h] BYREF
  va_list va4; // [rsp+108h] [rbp+50h]
  __int64 v18; // [rsp+110h] [rbp+58h] BYREF
  va_list va5; // [rsp+110h] [rbp+58h]
  __int64 v20; // [rsp+118h] [rbp+60h] BYREF
  va_list va6; // [rsp+118h] [rbp+60h]
  va_list va7; // [rsp+120h] [rbp+68h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  LOWORD(v7) = 16;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           &WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           (__int64 *)va3,
           4LL,
           (__int64 *)va4,
           4LL,
           (__int64 *)va5,
           4LL,
           (__int64 *)va6,
           4LL,
           va7,
           4LL,
           0LL);
}
