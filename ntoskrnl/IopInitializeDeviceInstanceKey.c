/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x14081CE14
 * Callers:
 *     IopGetRootDevices @ 0x14081CBA8 (IopGetRootDevices.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     PpDevNodeInsertIntoTree @ 0x1402FB13C (PpDevNodeInsertIntoTree.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     IoDeleteDevice @ 0x140368010 (IoDeleteDevice.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PpDeviceRegistration @ 0x140680F5C (PpDeviceRegistration.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406824BC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14068539C (PnpClearDeviceTemporaryProperties.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406F67F8 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14078AC6C (PpDevCfgProcessDeviceOperations.c)
 *     PipAllocateDeviceNode @ 0x14078BC8C (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140792BF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407FCC30 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x14081D14C (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpAllocateDeviceInstancePath @ 0x14081D188 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x14081D1C8 (IopCreateRootEnumeratedDeviceObject.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, PCUNICODE_STRING SourceString, __int64 a3)
{
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdx
  __int64 result; // rax
  int DeviceInstancePath; // r14d
  struct _DEVICE_OBJECT *v13; // r15
  _QWORD *v14; // rcx
  char *v15; // rdi
  int DeviceRegProp; // eax
  __int16 v17; // ax
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r12
  PVOID v21; // r12
  int v22; // edi
  unsigned int v23; // edi
  void *Pool2; // rax
  void *v25; // r14
  __int64 FailedInstallProblemStatus; // r8
  __int64 v27; // rdx
  int v28; // eax
  PVOID v29; // r12
  int v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v34; // [rsp+58h] [rbp-8h] BYREF
  int v35; // [rsp+B0h] [rbp+50h] BYREF
  int v36; // [rsp+B8h] [rbp+58h] BYREF

  P = 0LL;
  v36 = 0;
  v31 = 0;
  v34 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v22 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v22 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v23 = 8 * v6 + 1024;
    Pool2 = (void *)ExAllocatePool2(256LL, v23, 1684303952LL);
    v25 = Pool2;
    if ( !Pool2 )
    {
LABEL_66:
      DeviceInstancePath = -1073741670;
      goto LABEL_67;
    }
    memmove(Pool2, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v23 >> 3;
    *(_QWORD *)(a3 + 16) = v25;
  }
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)SourceString, 0x746C6644u);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
    {
      ObfDereferenceObject(v10);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v10;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&Object, 0LL, v8, v9);
  if ( DeviceInstancePath < 0 )
    goto LABEL_67;
  v13 = (struct _DEVICE_OBJECT *)Object;
  v14 = Object;
  *((_DWORD *)Object + 12) |= 0x1000u;
  *(_DWORD *)(v14[39] + 32LL) |= 0x10u;
  if ( (unsigned int)PipAllocateDeviceNode((__int64)v14, (__int64)&v34) == -1073740946 || (v15 = (char *)v34) == 0LL )
  {
    IoDeleteDevice(v13);
    goto LABEL_66;
  }
  DeviceInstancePath = PnpAllocateDeviceInstancePath(v34, (unsigned int)SourceString->Length + 2);
  if ( DeviceInstancePath >= 0 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 40), SourceString);
    PipSetDevNodeFlags((__int64)v15, 17);
    PipSetDevNodeState((__int64)v15, 772);
    PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v15);
    ObfReferenceObject(v13);
    v35 = 0;
    v30 = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      *((_QWORD *)v15 + 6),
                      (__int64)KeyHandle,
                      11,
                      (__int64)&v36,
                      (__int64)&v35,
                      (__int64)&v30,
                      0);
    if ( DeviceRegProp < 0 )
    {
      FailedInstallProblemStatus = 3221226021LL;
      if ( DeviceRegProp != -1073741275 )
        goto LABEL_18;
      v27 = 1LL;
    }
    else
    {
      if ( v36 == 4 && v30 == 4 )
      {
        v17 = v35;
      }
      else
      {
        v17 = 0;
        v35 = 0;
      }
      if ( (v17 & 0x20) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v27 = 18LL;
      }
      else if ( (v17 & 0x2000) != 0 )
      {
        FailedInstallProblemStatus = 0LL;
        v27 = 16LL;
      }
      else
      {
        if ( (v17 & 0x40) == 0 )
        {
LABEL_18:
          if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
          {
            v21 = P;
            if ( *((_DWORD *)P + 1) == 4
              && *((_DWORD *)P + 3) >= 4u
              && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
            {
              PipSetDevNodeFlags((__int64)v15, 256);
            }
            ExFreePoolWithTag(v21, 0);
          }
          PnpQueryAndSaveDeviceNodeCapabilities((__int64)v15);
          if ( (*((_DWORD *)v15 + 140) & 0x4000) != 0
            && ((*((_DWORD *)v15 + 99) & 0x2000) == 0 || *((_DWORD *)v15 + 101) != 1) )
          {
            PipClearDevNodeProblem(v15);
            PipSetDevNodeProblem(v15, 29LL, 0LL);
          }
          v18 = *((_DWORD *)v15 + 99) & 0x6000;
          if ( PnpBootMode )
          {
            *((_DWORD *)v15 + 176) |= 0x1000u;
            v31 = 2;
          }
          PnpClearDeviceTemporaryProperties(*((_QWORD *)v15 + 6));
          if ( (v35 & 1) == 0 && (*((_DWORD *)v15 + 140) & 0x4000) == 0 )
          {
            if ( v18 )
            {
              if ( PiDevCfgMode )
                PiDevCfgProcessDevice(v15, KeyHandle, v31);
            }
            else
            {
              PpDevCfgProcessDeviceOperations((__int64)v15, KeyHandle);
            }
          }
          if ( (*((_DWORD *)v15 + 99) & 0x2000) != 0 && ((v28 = *((_DWORD *)v15 + 101), v28 == 22) || v28 == 29) )
          {
            v20 = (__int64)(v15 + 40);
          }
          else
          {
            v20 = (__int64)(v15 + 40);
            if ( !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, (unsigned __int16 *)v15 + 20, 1) )
            {
              PipClearDevNodeProblem(v15);
              PipSetDevNodeProblem(v15, 22LL, 0LL);
            }
          }
          LOBYTE(v19) = 1;
          PpDeviceRegistration(v20, v19, (__int64)(v15 + 56), 0);
          PnpMapDeviceObjectToDeviceInstance(*((_QWORD *)v15 + 4), v20);
          v34 = 0LL;
          if ( (int)PnpGetDeviceResourcesFromRegistry((__int64)v13, 0, 4, &v34, &v31) >= 0 )
          {
            v29 = v34;
            if ( v34 )
            {
              if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                          4LL,
                          *((_QWORD *)v15 + 4),
                          v34) >= 0 )
                PipSetDevNodeFlags((__int64)v15, 64);
              ExFreePoolWithTag(v29, 0);
            }
          }
          ObfReferenceObject(v13);
          *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v13;
          goto LABEL_6;
        }
        FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(
                                                     *((_QWORD *)v15 + 6),
                                                     (__int64)KeyHandle);
        v27 = 28LL;
      }
    }
    PipSetDevNodeProblem(v15, v27, FailedInstallProblemStatus);
    goto LABEL_18;
  }
  IoDeleteDevice(v13);
LABEL_67:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
