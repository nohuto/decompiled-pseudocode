/*
 * XREFs of IoGetDeviceProperty @ 0x1406B8A70
 * Callers:
 *     PoStoreRequester @ 0x14034BEB8 (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x140510278 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1405271B0 (KseDsCallbackHookAddDevice.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x14074557C (IopProcessSetInterfaceState.c)
 *     IoGetDmaAdapter @ 0x1407643C0 (IoGetDmaAdapter.c)
 *     ArbShareDriverExclusive @ 0x1407B98A4 (ArbShareDriverExclusive.c)
 *     PopGenerateDeviceFriendlyName @ 0x1407BE618 (PopGenerateDeviceFriendlyName.c)
 *     ArbQueryConflict @ 0x140867210 (ArbQueryConflict.c)
 *     IopIsPciRootBus @ 0x1408A2F40 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E3000 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1408E6D7C (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408E8148 (PopDiagQueryDevicePropertyString.c)
 *     SshpGenerateDeviceFriendlyName @ 0x1408FB170 (SshpGenerateDeviceFriendlyName.c)
 *     IoWMISuggestInstanceName @ 0x1409314A0 (IoWMISuggestInstanceName.c)
 *     VfIsPCIBus @ 0x1409CC7F8 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     PpvUtilFailDriver @ 0x140510020 (PpvUtilFailDriver.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406A3164 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpBusTypeGuidGet @ 0x1406A504C (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegProperty @ 0x1406B8FC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1406BA24C (_CmGetDeviceRegProp.c)
 *     ObQueryNameStringMode @ 0x14070FFB0 (ObQueryNameStringMode.c)
 *     PpIrpQueryCapabilities @ 0x1407478A8 (PpIrpQueryCapabilities.c)
 *     PnpDetermineResourceListSize @ 0x14075020C (PnpDetermineResourceListSize.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E568 (PiGetDeviceRegistryProperty.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v5; // bx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  PVOID DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v17; // zf
  const void **PoolWithTag; // rax
  const void **v20; // rdi
  int v21; // eax
  ULONG v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  int v30; // eax
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rbx
  size_t v34; // rdi
  unsigned int v35; // eax
  size_t v36; // r15
  unsigned int v37; // ebx
  int v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  int v41; // eax
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  __int64 v44; // rcx
  ULONG v45; // eax
  ULONG *v46; // rdx
  ULONG v47; // eax
  ULONG v48; // [rsp+40h] [rbp-61h] BYREF
  int v49; // [rsp+44h] [rbp-5Dh] BYREF
  int v50; // [rsp+48h] [rbp-59h] BYREF
  PDEVICE_OBJECT v51; // [rsp+50h] [rbp-51h]
  __int128 v52; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v53[16]; // [rsp+70h] [rbp-31h] BYREF

  v5 = DeviceProperty;
  v51 = DeviceObject;
  v52 = 0LL;
  memset(v53, 0, sizeof(v53));
  v11 = v5 & 0xFFF;
  v50 = 0;
  v49 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 > 0xB )
  {
    v15 = 17;
    if ( v11 <= 0x11 )
    {
      if ( v11 == 17 )
      {
        v14 = 4;
        goto LABEL_11;
      }
      v27 = v11 - 12;
      if ( !v27 )
      {
        DeviceRegProp = PnpBusTypeGuidGet(*((_WORD *)DeviceNode + 232), &v52);
        if ( DeviceRegProp < 0 )
          return DeviceRegProp;
        *ResultLength = 16;
        if ( BufferLength >= 0x10 )
        {
          *(_OWORD *)PropertyBuffer = v52;
          return DeviceRegProp;
        }
        return -1073741789;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v30 = *((_DWORD *)DeviceNode + 114);
LABEL_43:
        *(_DWORD *)PropertyBuffer = v30;
        return 0;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        if ( *((int *)DeviceNode + 115) < 0 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v30 = *((_DWORD *)DeviceNode + 115);
        goto LABEL_43;
      }
      v37 = v29 - 1;
      if ( !v37 )
      {
        v15 = 23;
        goto LABEL_31;
      }
      if ( v37 != 1 )
        return -1073741584;
      if ( (int)PpIrpQueryCapabilities(DeviceObject, v53) < 0 )
        return -1073741772;
      v38 = v53[2];
      if ( v53[2] == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      *(_DWORD *)PropertyBuffer = v38;
      return 0;
    }
    v25 = v11 - 18;
    if ( !v25 )
    {
      if ( DeviceNode == IopRootDeviceNode )
      {
        v41 = 0;
        DeviceRegProp = 0;
      }
      else
      {
        if ( !*((_QWORD *)DeviceNode + 6) )
          return -1073741808;
        while ( 1 )
        {
          v48 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0,
                            11,
                            (__int64)&v49,
                            (__int64)&v50,
                            (__int64)&v48,
                            0);
          if ( DeviceRegProp < 0 || v49 != 4 || v48 != 4 )
            break;
          if ( (v50 & 0x20) != 0 )
          {
            v41 = 1;
          }
          else if ( (v50 & 0x40) != 0 )
          {
            v41 = 2;
          }
          else
          {
            v41 = (v50 & 0x400) != 0 ? 3 : 0;
          }
          DeviceNode = (PVOID)*((_QWORD *)DeviceNode + 2);
          if ( v41 || DeviceNode == IopRootDeviceNode )
            goto LABEL_81;
        }
        v41 = 2;
LABEL_81:
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp == -1073741275 )
            return -1073741772;
          v17 = DeviceRegProp == -1073741810;
          goto LABEL_13;
        }
      }
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        *(_DWORD *)PropertyBuffer = v41;
        return DeviceRegProp;
      }
      return -1073741789;
    }
    v26 = v25 - 1;
    if ( !v26 )
    {
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      PpHotSwapGetDevnodeRemovalPolicy((__int64)DeviceNode, 1, (unsigned int *)PropertyBuffer);
      return 0;
    }
    v31 = v26 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_31;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      if ( !*((_QWORD *)DeviceNode + 52) || (v33 = *((_QWORD *)DeviceNode + 53)) == 0 )
      {
        *ResultLength = 0;
        DeviceRegProp = 0;
        goto LABEL_54;
      }
      v34 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
      v35 = PnpDetermineResourceListSize(v33);
      v36 = v35;
      *ResultLength = v35 + v34;
      if ( v35 + (unsigned int)v34 > BufferLength )
        goto LABEL_53;
      memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v34);
      memmove((char *)PropertyBuffer + v34, *((const void **)DeviceNode + 53), v36);
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v46 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v46 )
      {
        v47 = *v46;
        *ResultLength = *v46;
        if ( v47 > BufferLength )
        {
LABEL_53:
          DeviceRegProp = -1073741789;
LABEL_54:
          KeReleaseGuardedMutex(&PiResourceListLock);
          return DeviceRegProp;
        }
        memmove(PropertyBuffer, v46, *v46);
      }
      else
      {
        *ResultLength = 0;
      }
    }
    DeviceRegProp = 0;
    goto LABEL_54;
  }
  if ( v11 != 11 )
  {
    if ( v11 > 5 )
    {
      v23 = v11 - 6;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v39 = v24 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              if ( v40 != 1 )
                return -1073741584;
              v15 = 14;
            }
            else
            {
              v15 = 13;
            }
          }
          else
          {
            v15 = 12;
          }
        }
        else
        {
          v15 = 10;
        }
      }
      else
      {
        v15 = 9;
      }
    }
    else
    {
      if ( v11 != 5 )
      {
        if ( v11 )
        {
          v13 = v11 - 1;
          if ( !v13 )
          {
            v14 = 7;
            v15 = 2;
            goto LABEL_11;
          }
          v42 = v13 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( !v43 )
            {
              *ResultLength = BufferLength;
              return PiGetDeviceRegistryProperty(
                       (_DWORD)DeviceObject,
                       0,
                       v9,
                       v10,
                       (__int64)PropertyBuffer,
                       (__int64)ResultLength);
            }
            if ( v43 == 1 )
            {
              v44 = *((_QWORD *)DeviceNode + 69);
              if ( v44 )
              {
                v45 = PnpDetermineResourceListSize(v44);
                *ResultLength = v45;
                if ( v45 <= BufferLength )
                {
                  memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v45);
                  return 0;
                }
                return -1073741789;
              }
              return 0;
            }
            return -1073741584;
          }
          v14 = 7;
          v15 = 3;
        }
        else
        {
          v14 = 1;
          v15 = 1;
        }
LABEL_11:
        if ( *((_QWORD *)DeviceNode + 6) )
        {
          *ResultLength = BufferLength;
          DeviceRegProp = PiGetDeviceRegProperty(*((_QWORD *)DeviceNode + 6), 0, v14, v15, PropertyBuffer, ResultLength);
          v17 = DeviceRegProp == -1073741275;
LABEL_13:
          if ( !v17 )
            return DeviceRegProp;
          return -1073741772;
        }
        return -1073741808;
      }
      v15 = 8;
    }
LABEL_31:
    v14 = 1;
    goto LABEL_11;
  }
  v48 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((_DWORD)v51, (_DWORD)PoolWithTag, v48, (_DWORD)ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else
  {
    v21 = *(unsigned __int16 *)v20;
    if ( (_WORD)v21 )
    {
      v22 = v21 + 2;
      *ResultLength = v22;
      if ( v22 > BufferLength )
      {
        DeviceRegProp = -1073741789;
      }
      else
      {
        memmove(PropertyBuffer, v20[1], *(unsigned __int16 *)v20);
        *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v20) = 0;
      }
    }
    else
    {
      *ResultLength = 0;
    }
  }
  ExFreePoolWithTag(v20, 0);
  return DeviceRegProp;
}
