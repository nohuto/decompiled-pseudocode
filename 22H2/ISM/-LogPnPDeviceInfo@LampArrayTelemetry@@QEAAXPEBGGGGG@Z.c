/*
 * XREFs of ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800A49E0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800266B0 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@444@Z @ 0x1800A4540 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 */

void __fastcall LampArrayTelemetry::LogPnPDeviceInfo(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *v9; // r10
  unsigned __int16 v10; // [rsp+50h] [rbp-18h] BYREF
  __int16 v11; // [rsp+52h] [rbp-16h] BYREF
  __int16 v12; // [rsp+54h] [rbp-14h] BYREF
  const wchar_t *v13; // [rsp+58h] [rbp-10h] BYREF
  LampArrayTelemetry *v14; // [rsp+70h] [rbp+8h] BYREF

  v14 = this;
  if ( (unsigned int)dword_1802063F0 > 5 && tlgKeywordOn((__int64)&dword_1802063F0, 0x400000000000LL) )
  {
    LOWORD(v14) = a6;
    v10 = a5;
    v11 = v8;
    v12 = v7;
    v13 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v6,
      byte_1801CB12C,
      v7,
      v8,
      &v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v14);
  }
}
