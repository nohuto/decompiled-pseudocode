void __fastcall FxUsbUrb::FxUsbUrb(
        FxUsbUrb *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        USBD_HANDLE__ *USBDHandle,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  FxMemoryObject::FxMemoryObject(this, FxDriverGlobals, 0x88u, BufferSize);
  this->m_pBuffer = Buffer;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxUsbUrb::`vftable'{for `FxObject'};
  this->m_USBDHandle = USBDHandle;
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `IFxMemory'};
  FxObject::MarkDisposeOverride(this, ObjectLock);
}
