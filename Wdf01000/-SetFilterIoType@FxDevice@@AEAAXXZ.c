void __fastcall FxDevice::SetFilterIoType(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  unsigned int Flags; // ecx
  FxTransactionedEntry *i; // rdx
  FxObject *m_TransactionedObject; // rdi
  unsigned __int8 TargetIoType; // r14
  const void *_a1; // rax
  FxTransactionedEntry *NextEntryLocked; // rax
  FxTransactionedEntry *v9; // rsi

  this->m_DeviceObject.m_DeviceObject->Flags &= 0xFFFFFFEB;
  m_DeviceObject = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( m_DeviceObject )
    this->m_DeviceObject.m_DeviceObject->Flags |= m_DeviceObject->Flags & 0x14;
  Flags = this->m_DeviceObject.m_DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
    this->m_ReadWriteIoType = WdfDeviceIoBuffered;
  else
    this->m_ReadWriteIoType = (Flags & 0x10 | 8) >> 3;
  FxTransactionedList::LockForEnum(&this->m_IoTargetsList, this->m_Globals);
  for ( i = 0LL; ; i = v9 )
  {
    NextEntryLocked = FxTransactionedList::GetNextEntryLocked(&this->m_IoTargetsList, i);
    v9 = NextEntryLocked;
    if ( !NextEntryLocked )
      break;
    m_TransactionedObject = NextEntryLocked->m_TransactionedObject;
    if ( m_TransactionedObject[3].__vftable == (FxObject_vtbl *)this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject )
    {
      TargetIoType = FxIoTarget::GetTargetIoType((FxIoTarget *)NextEntryLocked->m_TransactionedObject);
      if ( TargetIoType != HIBYTE(m_TransactionedObject[3].m_ObjectFlags)
        && SHIDWORD(m_TransactionedObject[3].m_Globals) > 1 )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(m_TransactionedObject);
        WPP_IFR_SF_q(
          m_TransactionedObject->m_Globals,
          2u,
          0xEu,
          0x3Au,
          (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids,
          _a1);
      }
      HIBYTE(m_TransactionedObject[3].m_ObjectFlags) = TargetIoType;
    }
  }
  FxTransactionedList::UnlockFromEnum(&this->m_IoTargetsList, this->m_Globals);
}
