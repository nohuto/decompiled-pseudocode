FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this)
{
  MxTimer::~MxTimer(&this->Timer);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
