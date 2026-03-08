/*
 * XREFs of ?WriteDxgDiagnosticsEvent_QDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A198
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C004F960 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_QDC(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdx
  struct _DXGK_DIAG_HEADER *v8; // [rsp+40h] [rbp-10h] BYREF
  __int16 v9; // [rsp+48h] [rbp-8h]
  int v10; // [rsp+68h] [rbp+18h] BYREF
  int v11; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
  {
    if ( (unsigned int)dword_1C013A8E0 > 1
      && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000001LL)
      && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v3) )
    {
      v7 = &unk_1C009F148;
LABEL_11:
      v9 = *((_WORD *)a1 + 2);
      v10 = *((_DWORD *)a1 + 10);
      v8 = a1;
      v11 = 8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v4,
        (_DWORD)v7,
        v5,
        v6,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v8);
    }
  }
  else if ( (unsigned int)dword_1C013A8E0 > 4
         && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, 0x200000000001LL)
         && (unsigned __int8)tlgKeywordOn(&dword_1C013A8E0, v2) )
  {
    v7 = &unk_1C009F11C;
    goto LABEL_11;
  }
}
