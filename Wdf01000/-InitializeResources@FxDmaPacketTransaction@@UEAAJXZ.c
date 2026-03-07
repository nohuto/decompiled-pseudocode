__int64 __fastcall FxDmaPacketTransaction::InitializeResources(
        FxDmaPacketTransaction *this,
        __int64 a2,
        unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 oldIrql; // [rsp+30h] [rbp+8h] BYREF

  this->m_DeviceAddressOffset = 0;
  oldIrql = 0;
  FxNonPagedObject::Lock(this, &oldIrql, a3);
  v4 = oldIrql;
  this->m_IsCancelled = 0;
  FxNonPagedObject::Unlock(this, v4, v5);
  return 0LL;
}
