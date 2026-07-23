/*
 * XREFs of _CmDeleteDeviceInterfaceWorker @ 0x14072C94C
 * Callers:
 *     _CmDeleteDeviceInterface @ 0x14072BE74 (_CmDeleteDeviceInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _CmDeleteDeviceInterfaceRegKey @ 0x14072CB90 (_CmDeleteDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14072DD10 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     _CmSetDeviceInterfaceMappedProperty @ 0x140766394 (_CmSetDeviceInterfaceMappedProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceInterfaceWorker(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  int v4; // ebx
  int *v7; // r14
  unsigned int v8; // esi
  int v9; // ebp
  int v10; // eax
  PVOID PoolWithTag; // rsi
  unsigned int v12; // r14d
  int DeviceInterfaceMappedPropertyKeys; // eax
  int v14; // ebp
  int v15; // eax
  int v16; // r9d
  unsigned int v18; // ebp
  unsigned int v19; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v20[4]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20[0] = 768;
    v7 = v20;
    v20[1] = 512;
    v8 = 0;
    v20[2] = 256;
    while ( 1 )
    {
      v9 = *v7;
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, *v7 | 0x30u, a4, 1);
      if ( v10 )
      {
        if ( v10 != -1073741637 && v10 != -1073741772 && v10 != -1073741811 )
          break;
      }
      v10 = CmDeleteDeviceInterfaceRegKey(a1, a2, v9 | 0x31u, a4, 0);
      if ( v10 )
      {
        if ( v10 != -1073741637 && v10 != -1073741772 && v10 != -1073741811 && v10 != -1073741535 )
          break;
      }
      ++v8;
      ++v7;
      if ( v8 >= 3 )
        goto LABEL_8;
    }
    v4 = v10;
    if ( v10 < 0 )
      return (unsigned int)v4;
LABEL_8:
    PoolWithTag = 0LL;
    v12 = 0;
    v19 = 0;
    do
    {
      LOBYTE(a4) = 1;
      DeviceInterfaceMappedPropertyKeys = CmGetDeviceInterfaceMappedPropertyKeys(
                                            a1,
                                            a2,
                                            0,
                                            a4,
                                            (__int64)PoolWithTag,
                                            v12,
                                            (__int64)&v19);
      v12 = v19;
      if ( DeviceInterfaceMappedPropertyKeys != -1073741789 )
        goto LABEL_10;
      v18 = 20 * v19;
      if ( 20 * (unsigned __int64)v19 > 0xFFFFFFFF )
      {
        DeviceInterfaceMappedPropertyKeys = -1073741811;
        goto LABEL_32;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x52504E50u);
    }
    while ( PoolWithTag );
    DeviceInterfaceMappedPropertyKeys = -1073741801;
LABEL_10:
    if ( DeviceInterfaceMappedPropertyKeys && DeviceInterfaceMappedPropertyKeys != -1073741275 )
    {
LABEL_32:
      v4 = DeviceInterfaceMappedPropertyKeys;
      goto LABEL_19;
    }
    v14 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v15 = CmSetDeviceInterfaceMappedProperty(a1, a2, (int)PoolWithTag + 20 * v14, 0, 0LL, 0);
        if ( v15 )
        {
          if ( v15 != -1073741790 && v15 != -1073741275 && v15 != -1073741802 && v15 != -1073741637 )
            break;
        }
        if ( ++v14 >= v12 )
          goto LABEL_15;
      }
      v4 = v15;
    }
LABEL_15:
    if ( v4 >= 0 )
    {
      DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 48, a4, 1);
      if ( !DeviceInterfaceMappedPropertyKeys
        || DeviceInterfaceMappedPropertyKeys == -1073741772
        || DeviceInterfaceMappedPropertyKeys == -1073741811 )
      {
        DeviceInterfaceMappedPropertyKeys = CmDeleteDeviceInterfaceRegKey(a1, a2, 49, v16, 0);
        if ( !DeviceInterfaceMappedPropertyKeys
          || DeviceInterfaceMappedPropertyKeys == -1073741772
          || DeviceInterfaceMappedPropertyKeys == -1073741811
          || DeviceInterfaceMappedPropertyKeys == -1073741535 )
        {
          CmRaiseDeleteEvent(a1, a2, 3LL);
          goto LABEL_19;
        }
      }
      goto LABEL_32;
    }
LABEL_19:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v4;
}
