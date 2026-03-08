/*
 * XREFs of ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0050804
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C004F960 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_OUTPUTDUPL(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 *v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  __int16 v11; // [rsp+48h] [rbp-8h]
  int v12; // [rsp+68h] [rbp+18h] BYREF
  int v13; // [rsp+70h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000200LL) )
  {
    v4 = *(_DWORD *)(v2 + 48);
    if ( !v4 )
    {
      if ( !tlgKeywordOn(v3, v1) )
        return;
      v9 = (unsigned __int8 *)&unk_1C009EF13;
      goto LABEL_12;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      if ( !tlgKeywordOn(v3, v1) )
        return;
      v9 = (unsigned __int8 *)&unk_1C009EE97;
      goto LABEL_12;
    }
    if ( v5 == 10 && tlgKeywordOn(v3, v1) )
    {
      v9 = (unsigned __int8 *)&unk_1C009EED2;
LABEL_12:
      v11 = *(_WORD *)(v8 + 4);
      v12 = *(_DWORD *)(v8 + 40);
      v10 = v8;
      v13 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v6,
        v9,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v12,
        &v10);
    }
  }
}
