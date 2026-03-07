FxFilteredStartContext *__fastcall FxFilteredStartContext::`scalar deleting destructor'(FxFilteredStartContext *this)
{
  FxFilteredStartContext::~FxFilteredStartContext(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
