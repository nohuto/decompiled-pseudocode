/*
 * XREFs of ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C00F0F66
 * Callers:
 *     rimSimulatedPointerDeviceScanTime @ 0x1C00F1808 (rimSimulatedPointerDeviceScanTime.c)
 *     rimExtractScantime @ 0x1C01D7F80 (rimExtractScantime.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1C01D31B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_.c)
 */

void __fastcall InputTraceLogging::RIM::UpdateScantime(const struct tagHPD_FRAME_SCAN_TIME *a1)
{
  int v1; // r8d
  int *v2; // r9
  int v3; // r10d
  char v4; // cf
  int v5; // [rsp+90h] [rbp+17h] BYREF
  int v6; // [rsp+94h] [rbp+1Bh] BYREF
  int v7; // [rsp+98h] [rbp+1Fh] BYREF
  int v8; // [rsp+9Ch] [rbp+23h] BYREF
  int v9; // [rsp+A0h] [rbp+27h] BYREF
  int v10; // [rsp+A4h] [rbp+2Bh] BYREF
  int v11; // [rsp+A8h] [rbp+2Fh] BYREF
  int v12; // [rsp+ACh] [rbp+33h] BYREF
  int v13; // [rsp+B0h] [rbp+37h] BYREF
  int v14; // [rsp+B4h] [rbp+3Bh] BYREF
  __int64 v15; // [rsp+B8h] [rbp+3Fh] BYREF
  __int64 v16; // [rsp+C0h] [rbp+47h] BYREF
  int v17; // [rsp+F8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 5 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v15 = *((_QWORD *)v2 + 5);
    v16 = *((_QWORD *)v2 + 4);
    v17 = v2[7];
    v5 = v2[6];
    v6 = v2[5];
    v7 = v2[4];
    v8 = v2[3];
    v9 = v2[2];
    v10 = v2[1];
    v11 = *v2;
    v4 = v2[12] & 1;
    v13 = v1;
    v14 = v3;
    v12 = -v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029897F,
      v1,
      (_DWORD)v2,
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
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
}
