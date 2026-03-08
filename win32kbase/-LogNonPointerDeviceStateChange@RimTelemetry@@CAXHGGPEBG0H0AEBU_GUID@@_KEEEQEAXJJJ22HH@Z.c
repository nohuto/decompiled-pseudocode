/*
 * XREFs of ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1C0087818
 * Callers:
 *     ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1C00875D8 (-ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U6@U6@U5@U3@U3@U3@U5@U5@U3@U3@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@88755577557@Z @ 0x1C00879D8 (--$Write@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrap.c)
 */

void __fastcall RimTelemetry::LogNonPointerDeviceStateChange(
        int a1,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4)
{
  __int64 v4; // rcx
  void *v5; // rdx

  if ( a1 )
  {
    if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x800000000000LL) )
    {
      v5 = &unk_1C0295BD8;
LABEL_5:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        v5);
    }
  }
  else if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x800000000000LL) )
  {
    v5 = &unk_1C02957C5;
    goto LABEL_5;
  }
}
