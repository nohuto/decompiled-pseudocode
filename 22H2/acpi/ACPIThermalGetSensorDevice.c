/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C0011B70
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C009A540 (ACPIThermalStartDevice.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C000E778 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099F08 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  struct _DEVICE_OBJECT *v7; // r14
  __int64 v8; // rcx
  IRP *Irp; // r12
  PDEVICE_OBJECT AttachedDeviceReference; // r15
  unsigned __int64 *v11; // rax
  NTSTATUS DeviceProperty; // ebx
  __int64 v14; // rcx
  int v15; // eax
  _OWORD *v16; // r13
  PVOID PoolWithTag; // r13
  NTSTATUS v18; // eax
  KIRQL v19; // r8
  ULONG BufferLength; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  void *FileHandle; // [rsp+80h] [rbp-80h] BYREF
  PVOID v24; // [rsp+88h] [rbp-78h] BYREF
  PVOID Context; // [rsp+90h] [rbp-70h]
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v27; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v30; // [rsp+F0h] [rbp-10h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v32[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v33; // [rsp+130h] [rbp+30h]
  _OWORD v34[3]; // [rsp+138h] [rbp+38h] BYREF

  v4 = a1[25];
  v24 = 0LL;
  P = 0LL;
  FileHandle = 0LL;
  v22 = 0LL;
  BufferLength = 0;
  v6 = 0LL;
  Context = a1;
  v7 = 0LL;
  v8 = a1[90];
  Irp = 0LL;
  DestinationString = 0LL;
  v33 = 0LL;
  AttachedDeviceReference = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v32, 0, sizeof(v32));
  v11 = (unsigned __int64 *)AMLIGetNamedChild(v8, 1314083935LL, a3, a4);
  v27 = v11;
  if ( v11 )
  {
    v15 = AMLIEvalNameSpaceObject(v11, (__int64)v32, 0, 0LL);
    v16 = v32;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 128) & 4) == 0 )
    {
      DeviceProperty = 0;
      *(_QWORD *)(v4 + 208) = *(_QWORD *)(v4 + 192);
      *(_QWORD *)(v4 + 216) = *(_QWORD *)(v4 + 200);
      goto LABEL_4;
    }
    memset(v34, 0, sizeof(v34));
    v14 = a1[90];
    v30 = THRM_EXTENSIONS_DSM_UUID;
    v15 = ACPIAmliEvaluateDsm(v14, (unsigned int)&v30, 0, 2, (__int64)v34, (__int64)&v24);
    v16 = v24;
  }
  DeviceProperty = v15;
  if ( v15 < 0 )
    goto LABEL_17;
  if ( *((_WORD *)v16 + 1) != 2 )
  {
    dword_1C0082908 = 0;
    pszDest = 0;
    DeviceProperty = -1072431095;
    FreeDataBuffs((__int64)v16, 1u);
LABEL_16:
    AttachedDeviceReference = 0LL;
LABEL_17:
    PoolWithTag = P;
    goto LABEL_18;
  }
  v18 = AMLIGetNameSpaceObject(*((_BYTE **)v16 + 4), *((__int64 **)Context + 90), (unsigned __int64 *)&v22, 0);
  dword_1C0082908 = 0;
  pszDest = 0;
  DeviceProperty = v18;
  FreeDataBuffs((__int64)v16, 1u);
  if ( DeviceProperty < 0 )
    goto LABEL_16;
  if ( !v22 )
  {
LABEL_37:
    DeviceProperty = -1073741810;
    goto LABEL_16;
  }
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(*(_QWORD *)v22 + 104LL);
  if ( !v6 || (*(_BYTE *)(v6 + 8) & 4) != 0 )
  {
    v6 = 0LL;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
    goto LABEL_37;
  }
  _InterlockedAdd((volatile signed __int32 *)(v6 + 688), 1u);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 744);
  if ( !v7 )
  {
    DeviceProperty = -1073741810;
    AttachedDeviceReference = 0LL;
    goto LABEL_17;
  }
  ObfReferenceObject(*(PVOID *)(v6 + 744));
  ACPIInternalDecrementIrpReferenceCount(v6);
  v6 = 0LL;
  if ( IoGetDeviceProperty(v7, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) != -1073741789 )
  {
    DeviceProperty = -1073741823;
    goto LABEL_16;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x54706341u);
  if ( PoolWithTag )
  {
    DeviceProperty = IoGetDeviceProperty(
                       v7,
                       DevicePropertyPhysicalDeviceObjectName,
                       BufferLength,
                       PoolWithTag,
                       &BufferLength);
    if ( DeviceProperty >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DeviceProperty = ZwCreateFile(
                         &FileHandle,
                         0x1F01FFu,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         0LL,
                         0,
                         3u,
                         1u,
                         0,
                         0LL,
                         0);
      if ( DeviceProperty < 0 )
      {
        FileHandle = 0LL;
      }
      else
      {
        Object = 0LL;
        DeviceProperty = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( DeviceProperty >= 0 )
        {
          AttachedDeviceReference = IoGetAttachedDeviceReference(v7);
          Irp = IoAllocateIrp(AttachedDeviceReference->StackSize, 0);
          if ( Irp )
          {
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               Object,
                               v7->DriverObject,
                               AcpiThermalDeviceTargetChange,
                               Context,
                               (PVOID *)(v4 + 240));
            if ( DeviceProperty >= 0 )
            {
              *(_QWORD *)(v4 + 208) = Irp;
              Irp = 0LL;
              *(_QWORD *)(v4 + 216) = AttachedDeviceReference;
              AttachedDeviceReference = 0LL;
              DeviceProperty = 0;
            }
          }
          else
          {
            DeviceProperty = -1073741670;
          }
          goto LABEL_18;
        }
      }
    }
  }
  else
  {
    DeviceProperty = -1073741670;
  }
  AttachedDeviceReference = 0LL;
LABEL_18:
  if ( v27 )
    AMLIDereferenceHandleEx((__int64)v27);
  if ( v22 )
    AMLIDereferenceHandleEx(v22);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( v6 )
    ACPIInternalDecrementIrpReferenceCount(v6);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x54706341u);
LABEL_4:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Irp )
    IoFreeIrp(Irp);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x52706341u);
  return (unsigned int)DeviceProperty;
}
