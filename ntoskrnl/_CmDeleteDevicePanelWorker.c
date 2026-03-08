/*
 * XREFs of _CmDeleteDevicePanelWorker @ 0x140A63660
 * Callers:
 *     _CmDeleteDevicePanel @ 0x140A630D4 (_CmDeleteDevicePanel.c)
 * Callees:
 *     _CmRaiseDeleteEvent @ 0x140A62958 (_CmRaiseDeleteEvent.c)
 *     _CmDeleteDevicePanelRegKey @ 0x140A631FC (_CmDeleteDevicePanelRegKey.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x140A63950 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmSetDevicePanelMappedProperty @ 0x140A64260 (_CmSetDevicePanelMappedProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDevicePanelWorker(__int64 a1, __int64 a2, __int16 a3)
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
  int DevicePanelMappedPropertyKeys; // eax
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
    v23 = 352;
    v6 = (int *)&v23;
    v7 = 0;
    while ( 1 )
    {
      v8 = CmDeleteDevicePanelRegKey(a1, a2, *v6);
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
      DevicePanelMappedPropertyKeys = CmGetDevicePanelMappedPropertyKeys(
                                        v10,
                                        v9,
                                        v11,
                                        v12,
                                        (__int64)Pool2,
                                        v14,
                                        (__int64)&v23);
      if ( DevicePanelMappedPropertyKeys != -1073741789 )
        break;
      v14 = v23;
      v18 = 20LL * v23;
      if ( v18 > 0xFFFFFFFF )
      {
        DevicePanelMappedPropertyKeys = -1073741811;
        goto LABEL_21;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v18, 1380994640LL);
      if ( !Pool2 )
      {
        DevicePanelMappedPropertyKeys = -1073741801;
LABEL_21:
        v3 = DevicePanelMappedPropertyKeys;
        goto LABEL_36;
      }
    }
    if ( DevicePanelMappedPropertyKeys && DevicePanelMappedPropertyKeys != -1073741275 )
      goto LABEL_21;
    v19 = v23;
    v20 = 0LL;
    if ( v23 )
    {
      while ( 1 )
      {
        v21 = CmSetDevicePanelMappedProperty(5 * (int)v20, v16, v17, 0, (__int64)Pool2 + 20 * v20);
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
      DevicePanelMappedPropertyKeys = CmDeleteDevicePanelRegKey(a1, a2, 96);
      if ( DevicePanelMappedPropertyKeys
        && DevicePanelMappedPropertyKeys != -1073741772
        && DevicePanelMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_21;
      }
      CmRaiseDeleteEvent(a1, a2, 6u);
    }
LABEL_36:
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v3;
}
