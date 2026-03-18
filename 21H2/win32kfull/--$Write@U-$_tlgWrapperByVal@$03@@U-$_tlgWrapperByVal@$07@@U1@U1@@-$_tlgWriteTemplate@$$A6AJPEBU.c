/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0129D50 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C012C190 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C012CC5C (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     GreResetDCInternal @ 0x1C014BAFC (GreResetDCInternal.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015E148 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z @ 0x1C01D24AC (-RestoreMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z.c)
 *     ?SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z @ 0x1C01D2638 (-SaveMonitorAndWindowSnapshot@DesktopRecalc@InputTraceLogging@@SAXIPEAUtagDESKTOP@@II@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSelectBrush @ 0x1C02AE790 (NtGdiSelectBrush.c)
 *     NtGdiSelectPen @ 0x1C02AE890 (NtGdiSelectPen.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-39h] BYREF
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  __int64 v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]

  v16 = a8;
  v14 = a7;
  v12 = a6;
  v10 = a5;
  v17 = 4LL;
  v15 = 4LL;
  v13 = 8LL;
  v11 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v9);
}
