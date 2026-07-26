/*
 * XREFs of WPP_RECORDER_SF_DqlD @ 0x1C0029120
 * Callers:
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C002909C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DqlD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      0x27u,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      va3,
      4LL,
      0LL);
  LOWORD(v7) = 39;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_3ecb09451b79381299710a0782e8cc63_Traceguids, v7, (__int64 *)va);
}
