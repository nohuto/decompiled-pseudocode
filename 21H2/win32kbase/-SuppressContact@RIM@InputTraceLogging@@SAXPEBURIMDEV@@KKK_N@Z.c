/*
 * XREFs of ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01B5E1C
 * Callers:
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01B69D4 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01B5D78 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall InputTraceLogging::RIM::SuppressContact(
        const struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // r11
  BOOL v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+54h] [rbp-24h] BYREF
  int v11; // [rsp+58h] [rbp-20h] BYREF
  int v12; // [rsp+5Ch] [rbp-1Ch] BYREF
  _QWORD v13[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v9 = a5;
    v10 = v6;
    v11 = v5;
    v12 = v7;
    v13[0] = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C028EE70,
      byte_1C025FD7D,
      v5,
      v6,
      (__int64)v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
