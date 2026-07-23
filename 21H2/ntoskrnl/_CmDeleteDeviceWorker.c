/*
 * XREFs of _CmDeleteDeviceWorker @ 0x14072CF38
 * Callers:
 *     _CmDeleteDevice @ 0x14072BD4C (_CmDeleteDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140610B90 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     _CmDeleteDeviceInterface @ 0x14072BE74 (_CmDeleteDeviceInterface.c)
 *     _CmRemoveDeviceFromContainer @ 0x14072BF9C (_CmRemoveDeviceFromContainer.c)
 *     _CmDeleteDeviceRegKey @ 0x14072D41C (_CmDeleteDeviceRegKey.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14072DE7C (_CmGetDeviceMappedPropertyKeys.c)
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     _CmSetDeviceMappedProperty @ 0x14073A704 (_CmSetDeviceMappedProperty.c)
 *     _PnpSetObjectProperty @ 0x140745DE4 (_PnpSetObjectProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14075AB3C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetMatchingDeviceList @ 0x140773AE0 (_CmGetMatchingDeviceList.c)
 *     _CmRemovePanelDevice @ 0x140978C78 (_CmRemovePanelDevice.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeleteDeviceWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v5; // esi
  PVOID v6; // r14
  PVOID PoolWithTag; // r13
  int v8; // ebx
  int v9; // edi
  int DeviceRegProp; // eax
  int ObjectProperty; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  _WORD *i; // rbx
  __int64 v14; // rax
  PVOID v15; // rsi
  unsigned int v16; // eax
  int MatchingDeviceList; // ebx
  _OWORD *v18; // r14
  unsigned int v19; // esi
  int v20; // eax
  int v21; // r9d
  int v22; // r14d
  int DeviceMappedPropertyKeys; // eax
  unsigned int v24; // esi
  unsigned __int64 v25; // r14
  int v26; // ebx
  int v27; // eax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  _WORD *j; // rbx
  __int64 v32; // rax
  PVOID v33; // [rsp+20h] [rbp-E0h]
  unsigned int v34; // [rsp+28h] [rbp-D8h]
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v37; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  PVOID v40; // [rsp+80h] [rbp-80h]
  int v41; // [rsp+88h] [rbp-78h] BYREF
  PVOID v42; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  _OWORD v44[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v45[80]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v46[80]; // [rsp+110h] [rbp+10h] BYREF

  Handle = 0LL;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  PoolWithTag = 0LL;
  v8 = 0;
  v36 = 0;
  v41 = 0;
  NumberOfBytes = 0LL;
  v39 = 0;
  v40 = 0LL;
  if ( a3 )
    return (unsigned int)-1073741811;
  v9 = CmOpenDeviceRegKey(a1, a2, 16, 0, 33619970, 0, (__int64)&Handle, 0LL);
  if ( v9 < 0 )
    goto LABEL_51;
  LODWORD(NumberOfBytes) = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    a1,
                    a2,
                    (__int64)Handle,
                    37,
                    (__int64)&v41,
                    (__int64)v45,
                    (__int64)&NumberOfBytes,
                    0);
  if ( DeviceRegProp < 0 )
  {
    if ( DeviceRegProp == -1073741275 )
      goto LABEL_6;
LABEL_67:
    v9 = DeviceRegProp;
    goto LABEL_51;
  }
  DeviceRegProp = CmGetDeviceContainerIdFromBase(a1, a2, v45, v46);
  if ( DeviceRegProp < 0 )
    goto LABEL_67;
  DeviceRegProp = CmRemoveDeviceFromContainer(a1, (__int64)v46, (__int64)v45, a2);
  if ( DeviceRegProp < 0 )
    goto LABEL_67;
LABEL_6:
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       a1,
                       a2,
                       1LL,
                       (__int64)Handle,
                       0LL,
                       (__int64)&DEVPKEY_Device_PanelId,
                       (__int64)&v39,
                       (__int64)PoolWithTag,
                       v8,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v8 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x52504E50u);
    if ( !PoolWithTag )
    {
      ObjectProperty = -1073741801;
      break;
    }
  }
  if ( ObjectProperty < 0 )
  {
    if ( ObjectProperty == -1073741275 )
      goto LABEL_9;
LABEL_78:
    v9 = ObjectProperty;
    goto LABEL_49;
  }
  if ( v39 != 18
    || (unsigned int)NumberOfBytes < 2
    || *((_WORD *)PoolWithTag + ((unsigned __int64)(unsigned int)NumberOfBytes >> 1) - 1) )
  {
    v9 = -1073741823;
    goto LABEL_49;
  }
  ObjectProperty = CmRemovePanelDevice(a1, PoolWithTag, a2);
  if ( ObjectProperty < 0 )
    goto LABEL_78;
  while ( 1 )
  {
LABEL_9:
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            0LL,
                                            a2,
                                            0,
                                            0LL,
                                            0LL,
                                            (__int64)v6,
                                            v5,
                                            (__int64)&NumberOfBytes + 4,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      goto LABEL_10;
    v29 = 2LL * HIDWORD(NumberOfBytes);
    if ( v29 > 0xFFFFFFFF )
    {
      MatchingFilteredDeviceInterfaceList = -1073741811;
      goto LABEL_63;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    P = ExAllocatePoolWithTag(PagedPool, (unsigned int)v29, 0x52504E50u);
    v6 = P;
    if ( !P )
      break;
    v5 = HIDWORD(NumberOfBytes);
  }
  MatchingFilteredDeviceInterfaceList = -1073741801;
LABEL_10:
  if ( MatchingFilteredDeviceInterfaceList )
  {
LABEL_63:
    v9 = MatchingFilteredDeviceInterfaceList;
    goto LABEL_45;
  }
  if ( HIDWORD(NumberOfBytes) )
  {
    for ( i = v6; *i; i += v14 + 1 )
    {
      CmDeleteDeviceInterface(a1, (__int64)i, 0);
      v14 = -1LL;
      do
        ++v14;
      while ( i[v14] );
    }
  }
  v15 = v42;
  v16 = 0;
  while ( 2 )
  {
    MatchingDeviceList = CmGetMatchingDeviceList(
                           a1,
                           (unsigned int)CmMatchLastKnownParentCallback,
                           a2,
                           (_DWORD)v15,
                           v16,
                           (__int64)&v36,
                           0);
    if ( MatchingDeviceList != -1073741789 )
      goto LABEL_18;
    v30 = 2LL * v36;
    if ( v30 > 0xFFFFFFFF )
    {
      MatchingDeviceList = -1073741811;
      goto LABEL_88;
    }
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    v42 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v30, 0x52504E50u);
    v15 = v42;
    if ( v42 )
    {
      v16 = v36;
      continue;
    }
    break;
  }
  MatchingDeviceList = -1073741801;
LABEL_18:
  if ( MatchingDeviceList )
  {
LABEL_88:
    v9 = MatchingDeviceList;
    goto LABEL_43;
  }
  if ( v36 )
  {
    for ( j = v15; *j; j += v32 + 1 )
    {
      PnpSetObjectProperty(a1, (_DWORD)j, 1, 0LL, (__int64)DEVPKEY_Device_LastKnownParent, 0, 0LL, 0, 0);
      v32 = -1LL;
      do
        ++v32;
      while ( j[v32] );
    }
  }
  v18 = v44;
  v19 = 0;
  v44[0] = _mm_load_si128((const __m128i *)&_xmm);
  v44[1] = _mm_load_si128((const __m128i *)&_xmm);
  while ( 1 )
  {
    v20 = CmDeleteDeviceRegKey(a1, a2);
    if ( v20 )
    {
      if ( v20 != -1073741637 && v20 != -1073741772 && v20 != -1073741811 )
        break;
    }
    ++v19;
    v18 = (_OWORD *)((char *)v18 + 4);
    if ( v19 >= 8 )
      goto LABEL_24;
  }
  v9 = v20;
LABEL_24:
  if ( v9 >= 0 )
  {
    v40 = 0LL;
    v22 = 0;
    v34 = 0;
    v33 = 0LL;
    v37 = 0;
    while ( 1 )
    {
      LOBYTE(v21) = 1;
      DeviceMappedPropertyKeys = CmGetDeviceMappedPropertyKeys(
                                   a1,
                                   a2,
                                   (_DWORD)Handle,
                                   v21,
                                   (__int64)v33,
                                   v34,
                                   (__int64)&v37);
      if ( DeviceMappedPropertyKeys != -1073741789 )
        break;
      v24 = v37;
      v25 = 20LL * v37;
      if ( v25 > 0xFFFFFFFF )
      {
        DeviceMappedPropertyKeys = -1073741811;
        goto LABEL_65;
      }
      if ( v40 )
        ExFreePoolWithTag(v40, 0);
      v40 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v25, 0x52504E50u);
      v22 = (int)v40;
      if ( !v40 )
      {
        DeviceMappedPropertyKeys = -1073741801;
        goto LABEL_35;
      }
      v34 = v24;
      v33 = v40;
    }
    v24 = v37;
LABEL_35:
    if ( DeviceMappedPropertyKeys && DeviceMappedPropertyKeys != -1073741275 )
    {
LABEL_65:
      v9 = DeviceMappedPropertyKeys;
      goto LABEL_43;
    }
    v26 = 0;
    if ( v24 )
    {
      while ( 1 )
      {
        v27 = CmSetDeviceMappedProperty(a1, a2, v22 + 20 * v26, 0, 0LL, 0);
        if ( v27 )
        {
          if ( v27 != -1073741790 && v27 != -1073741275 && v27 != -1073741637 && v27 != -1073741802 )
            break;
        }
        if ( ++v26 >= v24 )
          goto LABEL_40;
      }
      v9 = v27;
    }
LABEL_40:
    if ( v9 >= 0 )
    {
      v9 = CmDeleteDeviceRegKey(a1, a2);
      if ( v9 >= 0 )
        CmRaiseDeleteEvent(a1, a2, 1LL);
    }
  }
LABEL_43:
  if ( v42 )
    ExFreePoolWithTag(v42, 0);
LABEL_45:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v40 )
    ExFreePoolWithTag(v40, 0);
LABEL_49:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_51:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
