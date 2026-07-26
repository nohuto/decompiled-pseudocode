/*
 * XREFs of WPP_RECORDER_SF_qDqLqD @ 0x1C00A29A0
 * Callers:
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1C00A186C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqLqD(__int64 a1, _BYTE a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+28h] [rbp-61h]
  _DWORD v8[4]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+E0h] [rbp+57h] BYREF
  va_list va; // [rsp+E0h] [rbp+57h]
  __int64 v11; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+5Fh]
  __int64 v13; // [rsp+F0h] [rbp+67h] BYREF
  va_list va2; // [rsp+F0h] [rbp+67h]
  __int64 v15; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+6Fh]
  va_list va4; // [rsp+100h] [rbp+77h] BYREF

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
  v8[0] = 0;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(
      &WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      0x6Eu,
      va,
      8LL,
      va1,
      4LL,
      va2,
      8LL,
      va3,
      4LL,
      va4,
      8LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 110;
  return WppAutoLogTrace(a1, 5LL, 11LL, &WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids, v7, (__int64 *)va);
}
