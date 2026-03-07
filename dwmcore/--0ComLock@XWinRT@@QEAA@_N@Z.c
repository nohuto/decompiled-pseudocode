RTL_SRWLOCK *__fastcall XWinRT::ComLock::ComLock(RTL_SRWLOCK *this)
{
  LODWORD(this->Ptr) = 0;
  InitializeSRWLock(this + 1);
  return this;
}
