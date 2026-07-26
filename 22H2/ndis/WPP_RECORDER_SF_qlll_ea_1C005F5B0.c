/*
 * XREFs of WPP_RECORDER_SF_qlll @ 0x1C005F5B0
 * Callers:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0115A28 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qlll(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v10; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v12; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
      0x25u,
      va,
      8LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      0LL);
  LOWORD(v7) = 37;
  return WppAutoLogTrace(a1, 4LL, 14LL, WPP_dafd92df180233d1e8f46c99921014e6_Traceguids, v7, (__int64 *)va);
}
