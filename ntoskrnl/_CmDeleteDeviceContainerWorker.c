/*
 * XREFs of _CmDeleteDeviceContainerWorker @ 0x140A60E84
 * Callers:
 *     _CmDeleteDeviceContainer @ 0x140A609A4 (_CmDeleteDeviceContainer.c)
 * Callees:
 *     _CmDeleteDeviceContainerRegKey @ 0x140A60ACC (_CmDeleteDeviceContainerRegKey.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x140A61518 (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x140A61D50 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmRaiseDeleteEvent @ 0x140A62958 (_CmRaiseDeleteEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  int *v6; // r14
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  void *Pool2; // rbx
  unsigned int v14; // ebp
  int DeviceContainerMappedPropertyKeys; // eax
  int v16; // edx
  int v17; // r8d
  unsigned __int64 v18; // r14
  unsigned int v19; // r14d
  __int64 v20; // rbp
  int v21; // eax
  unsigned int v23; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v23 = 336;
    v6 = (int *)&v23;
    v7 = 0;
    while ( 1 )
    {
      v8 = CmDeleteDeviceContainerRegKey(a1, a2, *v6);
      if ( v8 )
      {
        if ( v8 != -1073741772 && v8 != -1073741811 && v8 != -1073741637 )
          break;
      }
      ++v7;
      ++v6;
      if ( v7 )
        goto LABEL_11;
    }
    v3 = v8;
    if ( v8 < 0 )
      return (unsigned int)v3;
LABEL_11:
    Pool2 = 0LL;
    v14 = 0;
    v23 = 0;
    while ( 1 )
    {
      DeviceContainerMappedPropertyKeys = CmGetDeviceContainerMappedPropertyKeys(
                                            v10,
                                            v9,
                                            v11,
                                            v12,
                                            (__int64)Pool2,
                                            v14,
                                            (__int64)&v23);
      if ( DeviceContainerMappedPropertyKeys != -1073741789 )
        break;
      v14 = v23;
      v18 = 20LL * v23;
      if ( v18 > 0xFFFFFFFF )
      {
        DeviceContainerMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v18, 1380994640LL);
      if ( !Pool2 )
      {
        DeviceContainerMappedPropertyKeys = -1073741801;
LABEL_21:
        v3 = DeviceContainerMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DeviceContainerMappedPropertyKeys && DeviceContainerMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    v19 = v23;
    v20 = 0LL;
    if ( v23 )
    {
      while ( 1 )
      {
        v21 = CmSetDeviceContainerMappedProperty(5 * (int)v20, v16, v17, 0, (__int64)Pool2 + 20 * v20);
        if ( v21 )
        {
          if ( v21 != -1073741275 && v21 != -1073741790 && v21 != -1073741802 && v21 != -1073741637 )
            break;
        }
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 >= v19 )
          goto LABEL_31;
      }
      v3 = v21;
    }
LABEL_31:
    if ( v3 >= 0 )
    {
      DeviceContainerMappedPropertyKeys = CmDeleteDeviceContainerRegKey(a1, a2, 80);
      if ( DeviceContainerMappedPropertyKeys
        && DeviceContainerMappedPropertyKeys != -1073741772
        && DeviceContainerMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 5LL);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v3;
}
