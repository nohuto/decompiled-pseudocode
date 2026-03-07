void __fastcall MUTEX_LOCK::~MUTEX_LOCK(DXGFASTMUTEX **this)
{
  if ( !*this )
    WdLogSingleEntry0(1LL);
  DXGFASTMUTEX::Release(*this);
}
