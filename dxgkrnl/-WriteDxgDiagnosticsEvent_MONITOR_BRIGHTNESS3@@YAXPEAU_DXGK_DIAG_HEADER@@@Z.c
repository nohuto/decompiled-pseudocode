/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00506E4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C004F960 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS3(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int16 v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000020LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, v1) )
    {
      v6 = *(_WORD *)(v4 + 4);
      v7 = *(_DWORD *)(v4 + 40);
      v5 = v4;
      v8 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v2,
        byte_1C009EDE2,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        &v5);
    }
  }
}
