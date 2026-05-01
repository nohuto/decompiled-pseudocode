/*
 * XREFs of ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18014001C
 * Callers:
 *     ??R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x180136750 (--R_lambda_06451eacb7a8912ae3302a5615ee0eb8_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ??R_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTelemetry@@J@Z @ 0x180136984 (--R_lambda_3157cebf66dd36ffc1ef22aa7a99425b_@@QEAAXW4PinManagerRequestPinItemResult@PinManagerTe.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x1801376D0 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@AEBUhstring@winrt@@1@Z @ 0x180138490 (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$shared_ptr@VPinReq.c)
 *     ?Create@PinOperationContext@@SA?AV?$shared_ptr@VPinOperationContext@@@std@@V?$shared_ptr@VPinRequestContext@@@3@PEFBU_ITEMIDLIST@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1801386FC (-Create@PinOperationContext@@SA-AV-$shared_ptr@VPinOperationContext@@@std@@V-$share_ea_1801386FC.c)
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x180138E40 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180139398 (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143C20 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall PinRequestContext::RequestorImagePath(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  _OWORD *result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 32);
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v2 + 2 * v3) );
    *((_QWORD *)&v5 + 1) = v3;
  }
  else
  {
    v5 = 0uLL;
  }
  result = a2;
  *a2 = v5;
  return result;
}
