/*
 * XREFs of ?SpeedBumpCornerLock@Cursor@InputTraceLogging@@SAXAEBUtagPOINT@@@Z @ 0x1C020B298
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0015640 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1C020A244 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::Cursor::SpeedBumpCornerLock(const struct tagPOINT *a1)
{
  int *v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 8LL) )
  {
    v3 = v1[1];
    v4 = *v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C029B6C2,
      (__int64)v1,
      v2,
      (__int64)&v4,
      (__int64)&v3);
  }
}
