/*
 * XREFs of WPP_RECORDER_SF_Zqq @ 0x1C0029EF4
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104CEC (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C012126C (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0121470 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFindRootDevice @ 0x1C013B3A8 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zqq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rbx
  unsigned __int64 v10; // rdi
  int v12; // eax
  bool v13; // zf
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= 4u )
  {
    if ( a6 )
      v15 = *a6;
    else
      v15 = 8LL;
    if ( a6 && *a6 )
      v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v16 = L"NULL";
    v17 = a6;
    if ( !a6 )
      v17 = L"\b";
    ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, &a7, 8LL, va, 8LL, 0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
    v13 = 0;
  if ( v13 )
    v7 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v18, v7);
}
