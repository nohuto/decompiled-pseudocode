char __fastcall FxUsbDevice::IsObjectDisposedOnRemove(FxUsbDevice *this, FxDeviceBase *Object)
{
  char v4; // si
  FxDeviceBase *v5; // rdi
  FxObject *ParentObjectReferenced; // rbx
  __int64 *v8; // [rsp+30h] [rbp-28h] BYREF
  __int16 v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ah] [rbp-1Eh]
  __int16 v11; // [rsp+3Eh] [rbp-1Ah]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = Object;
  FxObject::AddRef(Object, Object, 2380, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  if ( v5 )
  {
    while ( v5 != this->m_DeviceBase )
    {
      v12 = 0LL;
      v8 = &v12;
      v9 = 4104;
      v10 = 0;
      v11 = 0;
      if ( (v5->m_Type == 4104 || v5->QueryInterface(v5, (FxQueryInterfaceParams *)&v8) >= 0) && !BYTE1(v5[1].m_Refcnt) )
        break;
      ParentObjectReferenced = FxObject::GetParentObjectReferenced(v5, Object);
      v5->Release(v5, Object, 2406, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
      v5 = (FxDeviceBase *)ParentObjectReferenced;
      if ( !ParentObjectReferenced )
        return v4;
    }
    v4 = 1;
    if ( v5 )
      v5->Release(v5, Object, 2416, "minkernel\\wdf\\framework\\shared\\targets\\usb\\fxusbdevice.cpp");
  }
  return v4;
}
