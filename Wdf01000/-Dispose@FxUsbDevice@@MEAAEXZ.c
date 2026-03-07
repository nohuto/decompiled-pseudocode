unsigned __int8 __fastcall FxUsbDevice::Dispose(FxUsbDevice *this)
{
  USBD_HANDLE__ *m_USBDHandle; // rbx
  void (__fastcall *v3)(_QWORD); // rax

  KeFlushQueuedDpcs();
  m_USBDHandle = this->m_USBDHandle;
  if ( m_USBDHandle )
  {
    *((_BYTE *)m_USBDHandle + 225) = 1;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)m_USBDHandle + 55, 0xFFFFFFFF) <= 1 )
    {
      if ( *((_BYTE *)m_USBDHandle + 225) )
      {
        v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)m_USBDHandle + 14);
        if ( v3 )
          v3(*((_QWORD *)m_USBDHandle + 6));
        ExFreePoolWithTag(m_USBDHandle, *((_DWORD *)m_USBDHandle + 16));
      }
      else if ( g_EnableDbgPrints )
      {
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", m_USBDHandle);
      }
    }
    this->m_USBDHandle = 0LL;
  }
  return FxIoTarget::Dispose(this);
}
