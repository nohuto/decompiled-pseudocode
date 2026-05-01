/*
 * XREFs of ??$FilePublisherRetrieved@PEBGAEAPEAG@PinManagerTelemetry@@SAX$$QEAPEBGAEAPEAG@Z @ 0x18012A290
 * Callers:
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x1801430F8 (_anonymous_namespace_--TryGetFilePublisher.c)
 * Callees:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x180256590 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::FilePublisherRetrieved<unsigned short const *,unsigned short * &>(
        __int64 *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v5; // rdx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v5 = *a2;
    v7 = *a1;
    v6 = v5;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                                            (int)result,
                                            (int)&dword_1805A0EE9,
                                            0,
                                            (__int64)&v7,
                                            (__int64)&v6);
  }
  return result;
}
