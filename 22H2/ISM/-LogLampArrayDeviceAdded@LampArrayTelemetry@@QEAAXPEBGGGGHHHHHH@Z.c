/*
 * XREFs of ?LogLampArrayDeviceAdded@LampArrayTelemetry@@QEAAXPEBGGGGHHHHHH@Z @ 0x1800A48F0
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A716C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1800A460C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3.c)
 */

void __fastcall LampArrayTelemetry::LogLampArrayDeviceAdded(
        LampArrayTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const wchar_t *v14; // r10
  __int16 v15; // [rsp+70h] [rbp-11h] BYREF
  __int16 v16; // [rsp+72h] [rbp-Fh] BYREF
  int v17; // [rsp+74h] [rbp-Dh] BYREF
  int v18; // [rsp+78h] [rbp-9h] BYREF
  int v19; // [rsp+7Ch] [rbp-5h] BYREF
  int v20; // [rsp+80h] [rbp-1h] BYREF
  int v21; // [rsp+84h] [rbp+3h] BYREF
  int v22; // [rsp+88h] [rbp+7h] BYREF
  const wchar_t *v23; // [rsp+90h] [rbp+Fh] BYREF
  LampArrayTelemetry *v24; // [rsp+B0h] [rbp+2Fh] BYREF

  v24 = this;
  if ( (unsigned int)dword_1802063F0 > 5 && tlgKeywordOn((__int64)&dword_1802063F0, 0x400000000000LL) )
  {
    v17 = a11;
    v18 = a10;
    v19 = a9;
    v20 = a8;
    v21 = a7;
    v22 = a6;
    LOWORD(v24) = a5;
    v15 = v13;
    v16 = v12;
    v23 = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v11,
      byte_1801CB03F,
      v12,
      v13,
      &v23,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
}
