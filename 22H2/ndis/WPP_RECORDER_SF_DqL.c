/*
 * XREFs of WPP_RECORDER_SF_DqL @ 0x1C000F670
 * Callers:
 *     ndisIfQueryFilterObject @ 0x1C00FB860 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryObject @ 0x1C00FBC40 (ndisIfQueryObject.c)
 *     ndisIfQueryMiniportObjectNotPresent @ 0x1C00FBD50 (ndisIfQueryMiniportObjectNotPresent.c)
 *     ndisIfQueryLoopbackObject @ 0x1C00FBFE0 (ndisIfQueryLoopbackObject.c)
 *     ndisIfQueryMiniportObject @ 0x1C00FE5D8 (ndisIfQueryMiniportObject.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DqL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids, a4, va, 4LL, va1, 8LL, va2, 4LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 22LL, &WPP_c920fc8b5d2332d789f3c4881e4e0e63_Traceguids, v8, (__int64 *)va);
}
