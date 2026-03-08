/*
 * XREFs of IoGetDeviceProperty @ 0x1406C5B00
 * Callers:
 *     PoStoreRequester @ 0x1402BCF14 (PoStoreRequester.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140510488 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PiRebalanceOptOut @ 0x140562990 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x14057E910 (KseDsCallbackHookAddDevice.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     IoGetDmaAdapter @ 0x140821B20 (IoGetDmaAdapter.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140842DE4 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140842FDC (SshpGenerateDeviceVerboseDescription.c)
 *     PopGenerateDeviceFriendlyName @ 0x140847DF4 (PopGenerateDeviceFriendlyName.c)
 *     ArbQueryConflict @ 0x1409333C0 (ArbQueryConflict.c)
 *     ArbShareDriverExclusive @ 0x14093394C (ArbShareDriverExclusive.c)
 *     IopIsPciRootBus @ 0x140956F30 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140980294 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x140984AA0 (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x140989088 (PopDiagQueryDevicePropertyString.c)
 *     IoWMISuggestInstanceName @ 0x1409DC410 (IoWMISuggestInstanceName.c)
 *     VfIsPCIBus @ 0x140AC3E74 (VfIsPCIBus.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PpvUtilFailDriver @ 0x140562764 (PpvUtilFailDriver.c)
 *     PpIrpQueryCapabilities @ 0x140682520 (PpIrpQueryCapabilities.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406C3DF4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PiGetDeviceRegProperty @ 0x1406C6230 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpDetermineResourceListSize @ 0x1406F69E8 (PnpDetermineResourceListSize.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     PnpBusTypeGuidGet @ 0x14079AB44 (PnpBusTypeGuidGet.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  unsigned __int16 *DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProperty; // ebx
  bool v17; // zf
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  __int64 Pool2; // rax
  const void **v25; // rdi
  int NameStringMode; // eax
  int v27; // eax
  ULONG v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  __int64 v33; // rbx
  size_t v34; // rdi
  unsigned int v35; // eax
  size_t v36; // r15
  unsigned int v37; // ebx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  ULONG v44; // eax
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  ULONG *v47; // rdx
  ULONG v48; // eax
  ULONG v49; // [rsp+40h] [rbp-61h] BYREF
  int v50; // [rsp+44h] [rbp-5Dh] BYREF
  int v51; // [rsp+48h] [rbp-59h] BYREF
  PDEVICE_OBJECT v52; // [rsp+50h] [rbp-51h]
  __int128 v53; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v54[16]; // [rsp+70h] [rbp-31h] BYREF

  v5 = DeviceProperty;
  v52 = DeviceObject;
  v53 = 0LL;
  memset(v54, 0, sizeof(v54));
  v11 = v5 & 0xFFF;
  v51 = 0;
  v50 = 0;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 <= 0xB )
  {
    if ( v11 != 11 )
    {
      if ( v11 > 5 )
      {
        v29 = v11 - 6;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v45 = v30 - 1;
            if ( v45 )
            {
              v46 = v45 - 1;
              if ( v46 )
              {
                if ( v46 != 1 )
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
            v41 = v13 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( !v42 )
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
              if ( v42 == 1 )
              {
                v43 = *((_QWORD *)DeviceNode + 69);
                if ( v43 )
                {
                  v44 = PnpDetermineResourceListSize(v43);
                  *ResultLength = v44;
                  if ( v44 > BufferLength )
                    return -1073741789;
                  memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v44);
                  return 0;
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
            DeviceRegProperty = PiGetDeviceRegProperty(
                                  *((_QWORD *)DeviceNode + 6),
                                  0,
                                  v14,
                                  v15,
                                  PropertyBuffer,
                                  (__int64)ResultLength);
            v17 = DeviceRegProperty == -1073741275;
            goto LABEL_13;
          }
          return -1073741808;
        }
        v15 = 8;
      }
LABEL_38:
      v14 = 1;
      goto LABEL_11;
    }
    v49 = BufferLength + 16;
    Pool2 = ExAllocatePool2(256LL, BufferLength + 16, 1869181008LL);
    v25 = (const void **)Pool2;
    if ( !Pool2 )
      return -1073741670;
    NameStringMode = ObQueryNameStringMode((_DWORD)v52, Pool2, v49, (_DWORD)ResultLength, 0);
    DeviceRegProperty = NameStringMode;
    if ( NameStringMode == -1073741820 )
    {
      DeviceRegProperty = -1073741789;
    }
    else if ( NameStringMode >= 0 )
    {
      v27 = *(unsigned __int16 *)v25;
      if ( (_WORD)v27 )
      {
        v28 = v27 + 2;
        *ResultLength = v28;
        if ( v28 > BufferLength )
        {
          DeviceRegProperty = -1073741789;
        }
        else
        {
          memmove(PropertyBuffer, v25[1], *(unsigned __int16 *)v25);
          *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v25) = 0;
        }
      }
      else
      {
        *ResultLength = 0;
      }
      goto LABEL_34;
    }
    *ResultLength -= 16;
LABEL_34:
    ExFreePoolWithTag(v25, 0);
    return DeviceRegProperty;
  }
  v15 = 17;
  if ( v11 <= 0x11 )
  {
    if ( v11 == 17 )
    {
      v14 = 4;
      goto LABEL_11;
    }
    v19 = v11 - 12;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v37 = v21 - 1;
          if ( !v37 )
          {
            v15 = 23;
            goto LABEL_38;
          }
          if ( v37 != 1 )
            return -1073741584;
          if ( (int)PpIrpQueryCapabilities((int)DeviceObject, v54) < 0 )
            return -1073741772;
          v39 = v54[2];
          if ( v54[2] == -1 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength >= 4 )
          {
            *(_DWORD *)PropertyBuffer = v39;
            return 0;
          }
        }
        else
        {
          if ( *((int *)DeviceNode + 115) < 0 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength >= 4 )
          {
            v38 = *((_DWORD *)DeviceNode + 115);
LABEL_58:
            *(_DWORD *)PropertyBuffer = v38;
            return 0;
          }
        }
      }
      else
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength >= 4 )
        {
          v38 = *((_DWORD *)DeviceNode + 114);
          goto LABEL_58;
        }
      }
    }
    else
    {
      DeviceRegProperty = PnpBusTypeGuidGet(DeviceNode[232], &v53);
      if ( DeviceRegProperty < 0 )
        return DeviceRegProperty;
      *ResultLength = 16;
      if ( BufferLength >= 0x10 )
      {
        *(_OWORD *)PropertyBuffer = v53;
        return DeviceRegProperty;
      }
    }
    return -1073741789;
  }
  v22 = v11 - 18;
  if ( v22 )
  {
    v23 = v22 - 1;
    if ( !v23 )
    {
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        PpHotSwapGetDevnodeRemovalPolicy((__int64)DeviceNode, 1, (unsigned int *)PropertyBuffer);
        return 0;
      }
      return -1073741789;
    }
    v31 = v23 - 1;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_38;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      if ( !*((_QWORD *)DeviceNode + 52) || (v33 = *((_QWORD *)DeviceNode + 53)) == 0 )
      {
        *ResultLength = 0;
        DeviceRegProperty = 0;
        goto LABEL_48;
      }
      v34 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
      v35 = PnpDetermineResourceListSize(v33);
      v36 = v35;
      *ResultLength = v35 + v34;
      if ( v35 + (unsigned int)v34 > BufferLength )
        goto LABEL_47;
      memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v34);
      memmove((char *)PropertyBuffer + v34, *((const void **)DeviceNode + 53), v36);
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v47 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v47 )
      {
        v48 = *v47;
        *ResultLength = *v47;
        if ( v48 > BufferLength )
        {
LABEL_47:
          DeviceRegProperty = -1073741789;
LABEL_48:
          ExReleaseFastMutex(&PiResourceListLock);
          return DeviceRegProperty;
        }
        memmove(PropertyBuffer, v47, *v47);
      }
      else
      {
        *ResultLength = 0;
      }
    }
    DeviceRegProperty = 0;
    goto LABEL_48;
  }
  if ( DeviceNode == IopRootDeviceNode )
  {
    v40 = 0;
    DeviceRegProperty = 0;
LABEL_77:
    *ResultLength = 4;
    if ( BufferLength >= 4 )
    {
      *(_DWORD *)PropertyBuffer = v40;
      return DeviceRegProperty;
    }
    return -1073741789;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    return -1073741808;
  while ( 1 )
  {
    v49 = 4;
    DeviceRegProperty = CmGetDeviceRegProp(
                          PiPnpRtlCtx,
                          *((_QWORD *)DeviceNode + 6),
                          0,
                          11,
                          (__int64)&v50,
                          (__int64)&v51,
                          (__int64)&v49,
                          0);
    if ( DeviceRegProperty < 0 || v50 != 4 || v49 != 4 )
      break;
    if ( (v51 & 0x20) != 0 )
    {
      v40 = 1;
    }
    else if ( (v51 & 0x40) != 0 )
    {
      v40 = 2;
    }
    else
    {
      v40 = (v51 & 0x400) != 0 ? 3 : 0;
    }
    DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
    if ( v40 || DeviceNode == IopRootDeviceNode )
      goto LABEL_77;
  }
  v40 = 2;
  if ( DeviceRegProperty >= 0 )
    goto LABEL_77;
  if ( DeviceRegProperty == -1073741275 )
    return -1073741772;
  v17 = DeviceRegProperty == -1073741810;
LABEL_13:
  if ( v17 )
    return -1073741772;
  return DeviceRegProperty;
}
