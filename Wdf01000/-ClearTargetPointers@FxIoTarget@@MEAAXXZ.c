void __fastcall FxIoTarget::ClearTargetPointers(FxIoTarget *this)
{
  this->m_TargetDevice = 0LL;
  this->m_TargetPdo = 0LL;
  this->m_TargetFileObject = 0LL;
  *(_WORD *)&this->m_TargetStackSize = 0;
}
