/*
 * XREFs of ?SmmTelemetryEnableIommu@@YAXPEBUSYSMM_ADAPTER@@II@Z @ 0x1C03D3510
 * Callers:
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03D1B20 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x1C0071A84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@.c)
 */

void __fastcall SmmTelemetryEnableIommu(const struct SYSMM_ADAPTER *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int64 *v4; // r11
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx
  int v7; // [rsp+50h] [rbp-28h] BYREF
  int v8; // [rsp+54h] [rbp-24h] BYREF
  unsigned __int16 *v9; // [rsp+58h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+60h] [rbp-18h] BYREF
  __int16 v11; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C013A918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000800000LL) )
    {
      v5 = *v4;
      v7 = v2;
      v8 = v3;
      v6 = (unsigned __int16 *)(*(_QWORD *)(v5 + 64) + 2744LL);
      v11 = 0;
      v9 = v6;
      v10[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v6,
        byte_1C00A1EC3,
        v1,
        v2,
        (__int64)v10,
        (__int64)&v11,
        &v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
