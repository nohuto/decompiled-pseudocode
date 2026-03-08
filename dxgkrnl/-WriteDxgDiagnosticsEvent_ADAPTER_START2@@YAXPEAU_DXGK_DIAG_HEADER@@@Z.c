/*
 * XREFs of ?WriteDxgDiagnosticsEvent_ADAPTER_START2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0023690
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@43333@Z @ 0x1C004F884 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@@-$_tlgWriteTemplat.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU_tlgWrapperBinary@@@Z @ 0x1C004F960 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U_tlgWrapperBinary@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_ADAPTER_START2(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r9d
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+60h] [rbp+27h] BYREF
  int v11; // [rsp+64h] [rbp+2Bh] BYREF
  __int64 v12; // [rsp+68h] [rbp+2Fh] BYREF
  struct _DXGK_DIAG_HEADER *v13; // [rsp+70h] [rbp+37h] BYREF
  __int16 v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+A0h] [rbp+67h] BYREF
  int v16; // [rsp+A8h] [rbp+6Fh] BYREF
  int v17; // [rsp+B0h] [rbp+77h] BYREF
  int v18; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000001000LL) && tlgKeywordOn((__int64)&dword_1C013A8E0, v2) )
    {
      v14 = *((_WORD *)a1 + 2);
      v15 = *((_DWORD *)a1 + 10);
      v13 = a1;
      v16 = 6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v5,
        (unsigned int)&unk_1C009EC69,
        v6,
        v3,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v13);
      v3 = dword_1C013A8E0;
    }
    if ( v3 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x400000001000LL) && *((int *)a1 + 12) < 0 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A8E0, v4) )
      {
        v15 = *((_DWORD *)a1 + 18);
        v16 = *((_DWORD *)a1 + 16);
        v17 = *((_DWORD *)a1 + 13);
        v12 = *((_QWORD *)a1 + 10);
        v13 = (struct _DXGK_DIAG_HEADER *)*((_QWORD *)a1 + 7);
        v10 = *((_DWORD *)a1 + 10);
        v18 = v9;
        v11 = 6;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          (unsigned int)&unk_1C009EBF0,
          v8,
          v9,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15);
      }
    }
  }
}
