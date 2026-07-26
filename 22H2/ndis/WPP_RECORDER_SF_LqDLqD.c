/*
 * XREFs of WPP_RECORDER_SF_LqDLqD @ 0x1C00B81E0
 * Callers:
 *     NdisCmCloseCallComplete @ 0x1C00B7C50 (NdisCmCloseCallComplete.c)
 *     NdisCmMakeCallComplete @ 0x1C00B7F70 (NdisCmMakeCallComplete.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LqDLqD(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+28h] [rbp-51h]
  __int64 v9; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v11; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v13; // [rsp+E0h] [rbp+67h] BYREF
  va_list va2; // [rsp+E0h] [rbp+67h]
  __int64 v15; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+6Fh]
  __int64 v17; // [rsp+F0h] [rbp+77h] BYREF
  va_list va4; // [rsp+F0h] [rbp+77h]
  va_list va5; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids,
      a4,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      8LL,
      va5,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 19LL, &WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids, v8, (__int64 *)va);
}
