/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C001E5A8
 * Callers:
 *     ?ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z @ 0x1C001E3DC (-ndisMIndicatePDConfigChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEBXKE@Z.c)
 *     ?ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007E090 (-ndisOidPrePDQueryConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qdd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, a4, va, 8LL, va1, 4LL, va2, 4LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 4LL, 29LL, &WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids, v8, (__int64 *)va);
}
