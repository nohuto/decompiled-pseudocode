/*
 * XREFs of ??$OperationAllowedChecked@AEA_NW4OperationAllowedCheckResult@PinManagerTelemetry@@@PinManagerTelemetry@@SAXAEA_N$$QEAW4OperationAllowedCheckResult@0@@Z @ 0x180131DA0
 * Callers:
 *     ?IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV?$shared_ptr@VPinOperationContext@@@std@@_NAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x18013B4F0 (-IsPinOperationAllowed@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NV-$shared_p.c)
 * Callees:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18042EC54 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::OperationAllowedChecked<bool &,enum PinManagerTelemetry::OperationAllowedCheckResult>(
        char *a1,
        int *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  char v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v7 = *a2;
    v8 = *a1;
    v9 = v7;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1805A0B9D,
                                            v5,
                                            v6,
                                            (__int64)&v8,
                                            (__int64)&v9);
  }
  return result;
}
