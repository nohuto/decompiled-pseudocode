__int64 __fastcall FxDevice::AddIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  int v4; // edi

  v4 = FxTransactionedList::Add(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  if ( v4 >= 0 )
  {
    IoTarget->m_AddedToDeviceList = 1;
    FxObject::AddRef(IoTarget, this, 1827, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  }
  return (unsigned int)v4;
}
