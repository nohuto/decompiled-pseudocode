/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00169F8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000A574 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@555555555555555@Z @ 0x1C004FABC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SetTimingsFromVidPnSourceMasksPacket(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // r9
  char v4; // [rsp+B0h] [rbp+37h] BYREF
  char v5; // [rsp+B1h] [rbp+38h] BYREF
  char v6; // [rsp+B2h] [rbp+39h] BYREF
  char v7; // [rsp+B3h] [rbp+3Ah] BYREF
  char v8; // [rsp+B4h] [rbp+3Bh] BYREF
  char v9; // [rsp+B5h] [rbp+3Ch] BYREF
  char v10; // [rsp+B6h] [rbp+3Dh] BYREF
  char v11; // [rsp+B7h] [rbp+3Eh] BYREF
  char v12; // [rsp+B8h] [rbp+3Fh] BYREF
  char v13; // [rsp+B9h] [rbp+40h] BYREF
  char v14; // [rsp+BAh] [rbp+41h] BYREF
  char v15; // [rsp+BBh] [rbp+42h] BYREF
  int v16; // [rsp+BCh] [rbp+43h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+47h] BYREF
  char v18; // [rsp+E0h] [rbp+67h] BYREF
  char v19; // [rsp+E8h] [rbp+6Fh] BYREF
  char v20; // [rsp+F0h] [rbp+77h] BYREF
  char v21; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C013A8E0 > 4 && tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000800LL) )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A8E0, 0x200000000001LL) )
    {
      v18 = *(_BYTE *)(v3 + 63);
      v19 = *(_BYTE *)(v3 + 62);
      v20 = *(_BYTE *)(v3 + 61);
      v21 = *(_BYTE *)(v3 + 60);
      v4 = *(_BYTE *)(v3 + 59);
      v5 = *(_BYTE *)(v3 + 58);
      v6 = *(_BYTE *)(v3 + 57);
      v7 = *(_BYTE *)(v3 + 56);
      v8 = *(_BYTE *)(v3 + 55);
      v9 = *(_BYTE *)(v3 + 54);
      v10 = *(_BYTE *)(v3 + 53);
      v11 = *(_BYTE *)(v3 + 52);
      v12 = *(_BYTE *)(v3 + 51);
      v13 = *(_BYTE *)(v3 + 50);
      v14 = *(_BYTE *)(v3 + 49);
      v15 = *(_BYTE *)(v3 + 48);
      v16 = *(_DWORD *)(v3 + 40);
      v17 = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v1,
        (unsigned int)&unk_1C009EA39,
        v2,
        v3,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v4,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
}
