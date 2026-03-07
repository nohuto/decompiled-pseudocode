__int64 __fastcall imp_WdfUsbTargetDeviceAllocAndQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBDEVICE__ *UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *StringMemoryAttributes,
        WDFMEMORY__ **StringMemory,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int16 *v10; // rbx
  __int64 result; // rax
  unsigned __int16 v12; // r12
  int String; // esi
  unsigned int Tag; // r9d
  FxMemoryObject *v15; // rdi
  unsigned __int16 *v16; // rax
  FxMemoryObject *pBuffer; // [rsp+40h] [rbp-10h] BYREF
  WDFMEMORY__ *hMemory; // [rsp+48h] [rbp-8h] BYREF
  ULONG_PTR retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 numChars; // [rsp+90h] [rbp+40h] BYREF
  FxUsbDevice *pUsbDevice; // [rsp+A8h] [rbp+58h] BYREF

  hMemory = 0LL;
  pUsbDevice = 0LL;
  numChars = 0;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)UsbDevice,
    0x1202u,
    (void **)&pUsbDevice);
  m_Globals = pUsbDevice->m_Globals;
  if ( !StringMemory )
    FxVerifierNullBugCheck(pUsbDevice->m_Globals, retaddr);
  v10 = NumCharacters;
  *StringMemory = 0LL;
  if ( v10 )
    *v10 = 0;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(m_Globals, StringMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      v12 = LangID;
      String = FxUsbDevice::GetString(pUsbDevice, 0LL, &numChars, StringIndex, LangID, 0LL, 0LL);
      if ( String >= 0 && numChars )
      {
        Tag = m_Globals->Tag;
        pBuffer = 0LL;
        if ( FxMemoryObject::_Create(
               m_Globals,
               StringMemoryAttributes,
               ExDefaultNonPagedPoolType,
               Tag,
               2LL * numChars,
               &pBuffer) < 0 )
          return 3221225626LL;
        v15 = pBuffer;
        String = FxObject::Commit(pBuffer, StringMemoryAttributes, (void **)&hMemory, 0LL, 1u);
        if ( String < 0
          || (v16 = (unsigned __int16 *)v15->GetBuffer(&v15->IFxMemory),
              String = FxUsbDevice::GetString(pUsbDevice, v16, &numChars, StringIndex, v12, 0LL, 0LL),
              String < 0) )
        {
          FxObject::ClearEvtCallbacks(v15);
          ((void (*)(void))v15->DeleteObject)();
        }
        else
        {
          if ( v10 )
            *v10 = numChars;
          *StringMemory = hMemory;
        }
      }
      return (unsigned int)String;
    }
  }
  return result;
}
