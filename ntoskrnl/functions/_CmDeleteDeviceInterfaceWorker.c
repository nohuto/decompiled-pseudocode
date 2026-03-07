__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, __int64 a4)
{
  int v4; // ebx
  int *v7; // r14
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  void *Pool2; // rdi
  unsigned int v12; // r14d
  int DeviceInterfaceMappedPropertyKeys; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  unsigned int v16; // r14d
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // r9
  unsigned int v21; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v22[4]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v22[0] = 768;
    v7 = v22;
    v22[1] = 512;
    v8 = 0;
    v22[2] = 256;
    while ( 1 )
    {
      v9 = *v7;
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, *v7 | 0x30u, a4, 1);
      if ( v10 )
      {
        if ( v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 )
          break;
      }
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, a4, 0);
      if ( v10 )
      {
        if ( v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741637 && v10 != -1073741535 )
          break;
      }
      ++v8;
      ++v7;
      if ( v8 >= 3 )
        goto LABEL_16;
    }
    v4 = v10;
    if ( v10 < 0 )
      return (unsigned int)v4;
LABEL_16:
    Pool2 = 0LL;
    v12 = 0;
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(a4) = 1;
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0,
                                            a4,
                                            (__int64)Pool2,
                                            v12,
                                            (__int64)&v21);
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        break;
      v12 = v21;
      v15 = 20LL * v21;
      if ( v15 > 0xFFFFFFFF )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741811;
        goto LABEL_26;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
      if ( !Pool2 )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741801;
LABEL_26:
        v4 = DeviceInterfaceMappedPropertyKeys;
        goto LABEL_45;
      }
    }
    if ( DeviceInterfaceMappedPropertyKeys && DeviceInterfaceMappedPropertyKeys != -1073741275 )
      goto LABEL_26;
    v16 = v21;
    v17 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        v18 = CmSetDeviceInterfaceMappedProperty(a1, a2, 0LL, 0LL, (__int64)Pool2 + 20 * v17, 0, 0LL, 0);
        if ( v18 )
        {
          if ( v18 != -1073741275 && v18 != -1073741790 && v18 != -1073741802 && v18 != -1073741637 )
            break;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_36;
      }
      v4 = v18;
    }
LABEL_36:
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, v14, 1);
      if ( DeviceInterfaceMappedPropertyKeys
        && DeviceInterfaceMappedPropertyKeys != -1073741772
        && DeviceInterfaceMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_26;
      }
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v19, 0);
      if ( DeviceInterfaceMappedPropertyKeys )
      {
        if ( DeviceInterfaceMappedPropertyKeys != -1073741772
          && DeviceInterfaceMappedPropertyKeys != -1073741811
          && DeviceInterfaceMappedPropertyKeys != -1073741535 )
        {
          goto LABEL_26;
        }
      }
      CmRaiseDeleteEvent(a1, a2, 3LL);
    }
LABEL_45:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v4;
}
