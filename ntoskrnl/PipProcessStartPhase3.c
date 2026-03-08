/*
 * XREFs of PipProcessStartPhase3 @ 0x14068203C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PpvUtilTestStartedPdoStack @ 0x140201FB8 (PpvUtilTestStartedPdoStack.c)
 *     PnpSetDeviceInstanceStartedEvent @ 0x140201FD8 (PnpSetDeviceInstanceStartedEvent.c)
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405620F8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpGenerateDeviceIdsHash @ 0x140680864 (PnpGenerateDeviceIdsHash.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140681C08 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PiCreateDriverSwDevices @ 0x140681C40 (PiCreateDriverSwDevices.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406824BC (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1406825AC (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessQueryDeviceState @ 0x140683054 (PiProcessQueryDeviceState.c)
 *     PiUpdateDevicePanel @ 0x140683D74 (PiUpdateDevicePanel.c)
 *     PnpCheckDeviceIdsChanged @ 0x140684A9C (PnpCheckDeviceIdsChanged.c)
 *     _CmSetDeviceRegProp @ 0x140684F2C (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140685094 (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpQueryID @ 0x1406882B4 (PnpQueryID.c)
 *     PnpSetPlugPlayEvent @ 0x140688820 (PnpSetPlugPlayEvent.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiAuditDeviceStart @ 0x14096CE1C (PiAuditDeviceStart.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessStartPhase3(__int64 a1, int a2, __int64 a3)
{
  const wchar_t **v3; // rsi
  int v4; // r14d
  int DeviceState; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rcx
  PVOID v15; // r14
  PVOID v16; // rbx
  struct _KTHREAD *v17; // rax
  char v18; // r15
  const wchar_t *v19; // rdx
  int v20; // eax
  PVOID v21; // rbx
  PVOID v22; // r14
  int v23; // r13d
  int v24; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rcx
  int v27; // [rsp+50h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  int v29; // [rsp+60h] [rbp-19h] BYREF
  int v30; // [rsp+64h] [rbp-15h] BYREF
  int v31; // [rsp+68h] [rbp-11h] BYREF
  int v32; // [rsp+6Ch] [rbp-Dh] BYREF
  PVOID v33; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+78h] [rbp-1h] BYREF
  PVOID v35; // [rsp+80h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp+Fh] BYREF
  char v38; // [rsp+F0h] [rbp+77h] BYREF
  char v39; // [rsp+F8h] [rbp+7Fh]

  v3 = (const wchar_t **)(a1 + 48);
  v4 = a2;
  Handle = 0LL;
  v35 = 0LL;
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Start, a3, 3, *v3);
  DeviceState = PiPnpRtlBeginOperation(&v35);
  if ( DeviceState >= 0 )
  {
    v9 = *(void **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x20) != 0
      || (v33 = 0LL,
          v29 = 0,
          P = 0LL,
          v32 = 0,
          DestinationString = 0LL,
          (int)PnpDeviceObjectToDeviceInstance(v9, &Handle, 131097LL, v8) < 0) )
    {
LABEL_5:
      if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 9 )
      {
        DeviceState = -1073741823;
      }
      else
      {
        if ( v4 )
          PipSetDevNodeFlags(a1, 8LL);
        PnpQueryAndSaveDeviceNodeCapabilities(a1);
        DeviceState = PiProcessQueryDeviceState(v9);
        PiUpdateDevicePanel(a1, 0LL);
        PnpSetPlugPlayEvent(&GUID_DEVICE_ARRIVAL, *(_QWORD *)(a1 + 32));
        PnpSetDeviceInstanceStartedEvent(a1);
        if ( DeviceState >= 0 )
        {
          PpvUtilTestStartedPdoStack();
          PipSetDevNodeState(a1, 778);
          PnpStartedDeviceNodeDependencyCheck(a1);
          PiCreateDriverSwDevices(a1, v10, v11, v12);
          if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL, 0LL) )
            PiAuditDeviceStart(a1 + 40);
          DeviceState = 0;
        }
      }
      goto LABEL_12;
    }
    PnpQueryID(a1, 1LL, &P, &v32);
    PnpQueryID(a1, 2LL, &v33, &v29);
    v15 = v33;
    v16 = P;
    PnpGenerateDeviceIdsHash((__int64)P, (__int64)v33, (_DWORD *)(a1 + 684));
    if ( !v16 && !v15 )
    {
LABEL_38:
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        (unsigned int)*v3,
        1,
        0LL,
        (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
        7,
        (__int64)&PnpCurrentHardwareConfigurationIndex,
        4,
        0);
      RtlInitUnicodeString(&DestinationString, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      RtlGUIDFromString(&DestinationString, (GUID *)(a1 + 664));
      PipSetDevNodeFlags(a1, 32LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      PiDcUpdateDeviceContainerMembership(*v3, Handle, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      PiUpdateDevicePanel(a1, Handle);
      ZwClose(Handle);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v26, *v3, 1LL);
      PnpSetPlugPlayEvent(&GUID_DEVICE_ENUMERATED, *(_QWORD *)(a1 + 32));
      v4 = a2;
      goto LABEL_5;
    }
    v27 = 0;
    v30 = 0;
    v17 = KeGetCurrentThread();
    v18 = 0;
    v38 = 0;
    v39 = 0;
    --v17->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v19 = *v3;
    v31 = 4;
    if ( (int)CmGetDeviceRegProp(
                PiPnpRtlCtx,
                (_DWORD)v19,
                (_DWORD)Handle,
                11,
                (__int64)&v30,
                (__int64)&v27,
                (__int64)&v31,
                0) >= 0
      && v30 == 4
      && v31 == 4 )
    {
      v20 = v27;
      if ( (v27 & 0x20) == 0 || (v27 & 1) != 0 )
        goto LABEL_23;
    }
    else
    {
      v20 = 0;
      v27 = 0;
    }
    v18 = 1;
LABEL_23:
    v21 = v33;
    v22 = P;
    v23 = v32;
    if ( (v20 & 0x400) == 0 )
    {
      v24 = 0;
      if ( !P || (v24 = PnpCheckDeviceIdsChanged(a1, (_DWORD)Handle, (_DWORD)P, v32, 1, (__int64)&v38), v20 = v27, !v38) )
      {
        if ( v21 )
        {
          v24 = PnpCheckDeviceIdsChanged(a1, (_DWORD)Handle, (_DWORD)v21, v29, 0, (__int64)&v38);
          v20 = v27;
        }
      }
      if ( v24 >= 0 && v38 )
      {
        v39 = 1;
        v27 = v20 | 0x400;
        v18 = 1;
      }
    }
    if ( v22 )
    {
      CmSetDeviceRegProp(PiPnpRtlCtx, (unsigned int)*v3, (_DWORD)Handle, 2, 7, (__int64)v22, v23, 0);
      ExFreePoolWithTag(v22, 0);
    }
    if ( v21 )
    {
      CmSetDeviceRegProp(PiPnpRtlCtx, (unsigned int)*v3, (_DWORD)Handle, 3, 7, (__int64)v21, v29, 0);
      ExFreePoolWithTag(v21, 0);
    }
    if ( v39 )
      CmSetDeviceRegProp(PiPnpRtlCtx, (unsigned int)*v3, (_DWORD)Handle, 11, 4, (__int64)&v27, 4, 0);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v18 && PiDevCfgMode )
      PiDevCfgProcessDevice(a1, Handle, 0LL);
    goto LABEL_38;
  }
LABEL_12:
  v13 = v35;
  if ( v35 )
    PiPnpRtlEndOperation(v35);
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)v13,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceStart_Stop,
      v7,
      3,
      *v3);
  return (unsigned int)DeviceState;
}
