/*
 * XREFs of ??_EFxInternalIoctlOthersContext@@UEAAPEAXI@Z @ 0x1C0050330
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequestContext *__fastcall FxInternalIoctlOthersContext::`vector deleting destructor'(
        FxRequestContext *this,
        char a2)
{
  this->__vftable = (FxRequestContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
