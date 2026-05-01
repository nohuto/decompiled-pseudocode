/*
 * XREFs of ??$PackagedAppDisplayInformationRetrieved@PEBGPEBG_N@PinManagerTelemetry@@SAX$$QEAPEBG0$$QEA_N@Z @ 0x180131EC0
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143AB0 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000232C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::PackagedAppDisplayInformationRetrieved<unsigned short const *,unsigned short const *,bool>(
        __int64 *a1,
        __int64 *a2,
        _BYTE *a3)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v9 = *a2;
    LOBYTE(v7) = *a3;
    v11 = *a1;
    v10 = v9;
    LOBYTE(v12) = v7;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
                                            (int)result,
                                            (int)&dword_1805A0C45,
                                            v7,
                                            v8,
                                            (const WCHAR **)&v11,
                                            (const WCHAR **)&v10,
                                            (__int64)&v12);
  }
  return result;
}
