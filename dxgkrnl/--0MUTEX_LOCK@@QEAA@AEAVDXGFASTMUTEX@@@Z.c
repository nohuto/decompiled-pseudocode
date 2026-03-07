MUTEX_LOCK *__fastcall MUTEX_LOCK::MUTEX_LOCK(MUTEX_LOCK *this, struct DXGFASTMUTEX *a2)
{
  *(_QWORD *)this = a2;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)this);
  return this;
}
