/*
 * XREFs of _CmDeleteDeviceContainerWorker @ 0x14072C484
 * Callers:
 *     _CmDeleteDeviceContainer @ 0x14072C32C (_CmDeleteDeviceContainer.c)
 * Callees:
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x14072C3F0 (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x14072C600 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmDeleteDeviceContainerRegKey @ 0x14072C664 (_CmDeleteDeviceContainerRegKey.c)
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceContainerWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  unsigned int *v6; // r14
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID PoolWithTag; // rdi
  unsigned int v14; // ebp
  int DeviceContainerMappedPropertyKeys; // eax
  __int64 v16; // r14
  int v17; // eax
  unsigned int v19; // r14d
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20 = 336;
    v6 = &v20;
    v7 = 0;
    while ( 1 )
    {
      v8 = CmDeleteDeviceContainerRegKey(a1, a2, *v6);
      if ( v8 )
      {
        if ( v8 != -1073741637 && v8 != -1073741772 && v8 != -1073741811 )
          break;
      }
      ++v7;
      ++v6;
      if ( v7 )
        goto LABEL_6;
    }
    v3 = v8;
    if ( v8 < 0 )
      return (unsigned int)v3;
LABEL_6:
    PoolWithTag = 0LL;
    v14 = 0;
    v20 = 0;
    do
    {
      DeviceContainerMappedPropertyKeys = CmGetDeviceContainerMappedPropertyKeys(
                                            v10,
                                            v9,
                                            v11,
                                            v12,
                                            (__int64)PoolWithTag,
                                            v14,
                                            &v20);
      v14 = v20;
      if ( DeviceContainerMappedPropertyKeys != -1073741789 )
        goto LABEL_8;
      v19 = 20 * v20;
      if ( 20 * (unsigned __int64)v20 > 0xFFFFFFFF )
      {
        DeviceContainerMappedPropertyKeys = -1073741811;
        goto LABEL_25;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x52504E50u);
    }
    while ( PoolWithTag );
    DeviceContainerMappedPropertyKeys = -1073741801;
LABEL_8:
    if ( DeviceContainerMappedPropertyKeys && DeviceContainerMappedPropertyKeys != -1073741275 )
    {
LABEL_25:
      v3 = DeviceContainerMappedPropertyKeys;
      goto LABEL_16;
    }
    v16 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        v17 = CmSetDeviceContainerMappedProperty(5 * (int)v16, v9, v11, 0, (__int64)PoolWithTag + 20 * v16);
        if ( v17 )
        {
          if ( v17 != -1073741790 && v17 != -1073741275 && v17 != -1073741802 && v17 != -1073741637 )
            break;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= v14 )
          goto LABEL_13;
      }
      v3 = v17;
    }
LABEL_13:
    if ( v3 >= 0 )
    {
      DeviceContainerMappedPropertyKeys = CmDeleteDeviceContainerRegKey(a1, a2, 80LL);
      if ( !DeviceContainerMappedPropertyKeys
        || DeviceContainerMappedPropertyKeys == -1073741772
        || DeviceContainerMappedPropertyKeys == -1073741811 )
      {
        CmRaiseDeleteEvent(a1, a2, 5LL);
        goto LABEL_16;
      }
      goto LABEL_25;
    }
LABEL_16:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v3;
}
