void __fastcall FxIoTarget::WaitForSentIoToComplete(FxIoTarget *this)
{
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
