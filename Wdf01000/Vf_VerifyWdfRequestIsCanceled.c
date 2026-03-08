/*
 * XREFs of Vf_VerifyWdfRequestIsCanceled @ 0x1C00BA218
 * Callers:
 *     imp_WdfRequestIsCanceled @ 0x1C0035250 (imp_WdfRequestIsCanceled.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA8A0 (-Vf_VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA2C (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall Vf_VerifyWdfRequestIsCanceled(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(pRequest, &irql, a3);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_5;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
    {
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
      goto LABEL_6;
    }
LABEL_5:
    IsDriverOwned = 0;
  }
LABEL_6:
  FxNonPagedObject::Unlock(pRequest, irql, v5);
  return (unsigned int)IsDriverOwned;
}
