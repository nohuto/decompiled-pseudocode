FxSpinLock *__fastcall FxSpinLock::GetHistory(FxSpinLock *this)
{
  if ( this->m_ObjectSize == 128 )
    return 0LL;
  else
    return this + 1;
}
