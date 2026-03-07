FxRequestContext *__fastcall FxInternalIoctlOthersContext::`vector deleting destructor'(
        FxRequestContext *this,
        char a2)
{
  this->__vftable = (FxRequestContext_vtbl *)FxRequestContext::`vftable';
  if ( (a2 & 1) != 0 )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
