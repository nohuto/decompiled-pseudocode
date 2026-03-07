FxTagTrackingBlock *__fastcall FxTagTrackingBlock::`scalar deleting destructor'(FxTagTrackingBlock *this)
{
  FxTagTrackingBlock::~FxTagTrackingBlock(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
