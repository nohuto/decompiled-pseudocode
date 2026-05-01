/*
 * XREFs of ?SetStopResult@?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x18014024C
 * Callers:
 *     ?Destroy@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180138D7C (-Destroy@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ?SetStopResult@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXJPEAJ@Z @ 0x1801401E4 (-SetStopResult@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflecto.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180154D70 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180154E34 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C3E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C4E8 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015C5FC (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1801AD14C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 */

bool __fastcall wil::ActivityBase<TaskbarLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TaskbarLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        __int64 a1,
        int a2,
        int *a3)
{
  int v3; // r9d
  int v4; // eax
  const struct wil::FailureInfo *v6; // rdx
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = *(_DWORD *)(a1 + 72);
  if ( v3 < 1 )
  {
    memset_0(v7, 0, sizeof(v7));
    wil::details::WilFailFast((wil::details *)v7, v6);
  }
  v4 = *(_DWORD *)(a1 + 76);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 76) = a2;
    v4 = a2;
  }
  if ( a3 )
  {
    *a3 = v4;
    v3 = *(_DWORD *)(a1 + 72);
  }
  *(_DWORD *)(a1 + 72) = v3 - 1;
  return v3 == 1;
}
