/*
 * XREFs of ??$OperationContextCreatedStandard@PEBGPEBGPEBGPEBGAEAW4PinOperationType@@@PinManagerTelemetry@@SAX$$QEAPEBG000AEAW4PinOperationType@@@Z @ 0x180131F6C
 * Callers:
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800021D4 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::OperationContextCreatedStandard<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,enum PinOperationType &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp-20h] BYREF
  __int64 v17; // [rsp+70h] [rbp-18h] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v10 = *a3;
    v11 = *a4;
    v16 = *a2;
    v12 = *a5;
    v17 = *a1;
    v15 = v10;
    LODWORD(v13) = v12;
    v14 = v11;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                                            (int)result,
                                            (int)&dword_1805A0F6E,
                                            0,
                                            v11,
                                            (const WCHAR **)&v17,
                                            (const WCHAR **)&v16,
                                            (const WCHAR **)&v15,
                                            (const WCHAR **)&v14,
                                            (__int64)&v13);
  }
  return result;
}
