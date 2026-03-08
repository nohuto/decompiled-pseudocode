/*
 * XREFs of ACPIBusIrpStartDevice @ 0x1C00814F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIModuleFilterStartResources @ 0x1C0017AD8 (ACPIModuleFilterStartResources.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C002E2DC (ACPIQueryGedDeviceInterface.c)
 *     AcpiArblibCommitResources @ 0x1C007CE1C (AcpiArblibCommitResources.c)
 *     PcisuppAcquirePciInterfaces @ 0x1C0099894 (PcisuppAcquirePciInterfaces.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C00A0770 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0984 (ArbAddMmConfigRangeAsBootReserved.c)
 */

int __fastcall ACPIBusIrpStartDevice(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v2; // r14
  __int64 StartContext; // rbx
  __int64 v6; // rcx
  int result; // eax
  int v8; // eax
  int v9; // edx
  PVOID v10; // rax
  __int64 *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *ThreadHandle; // [rsp+B8h] [rbp+48h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  memset(&ObjectAttributes, 0, 44);
  ThreadHandle = 0LL;
  StartContext = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  v6 = *(unsigned int *)(StartContext + 8);
  if ( (v6 & 0x2000000) != 0 )
  {
    result = PcisuppAcquirePciInterfaces(DeviceObject);
    if ( result < 0 )
      return result;
    if ( !*(_QWORD *)(StartContext + 296) )
    {
      KeInitializeEvent((PRKEVENT)(StartContext + 248), SynchronizationEvent, 0);
      KeInitializeEvent((PRKEVENT)(StartContext + 272), SynchronizationEvent, 0);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 (PKSTART_ROUTINE)PciRootBusBiosMethodDispatcherOnResume,
                 (PVOID)StartContext);
      if ( result < 0 )
        return result;
      Object = 0LL;
      ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      *(_QWORD *)(StartContext + 296) = Object;
      ZwClose(ThreadHandle);
    }
  }
  if ( _bittest64((const signed __int64 *)(StartContext + 1008), 0x26u) )
  {
    v8 = ACPIQueryGedDeviceInterface((_QWORD *)StartContext);
    if ( v8 < 0 )
    {
      v6 = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          8,
          60,
          (__int64)&WPP_efe410a963c03a77fa130710cec25e42_Traceguids,
          v8);
      }
    }
  }
  if ( _bittest64((const signed __int64 *)(StartContext + 8), 0x25u) && *(_BYTE *)(StartContext + 184) )
  {
    ACPIModuleFilterStartResources(v6, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    v10 = *(PVOID *)(v2 + 8);
    v11 = (__int64 *)(StartContext + 192);
    Object = v10;
    v12 = 0;
    while ( 1 )
    {
      v13 = *v11;
      result = AcpiArblibCommitResources(*v11, (__int64)v10);
      if ( result < 0 )
        break;
      if ( *(_DWORD *)(v13 + 168) == 3 )
      {
        result = ArbAddInaccessibleAllocationRange(v13 + 136, *(_QWORD *)(v13 + 176));
        if ( result < 0 )
          break;
        result = ArbAddMmConfigRangeAsBootReserved(v13 + 136, *(_QWORD *)(v13 + 176));
        if ( result < 0 )
          break;
      }
      v14 = *v11;
      ++v12;
      ++v11;
      *(_BYTE *)(v14 + 130) = 1;
      if ( v12 >= 3 )
        goto LABEL_19;
      v10 = Object;
    }
  }
  else
  {
LABEL_19:
    result = ACPIInitStartDevice(
               (ULONG_PTR)DeviceObject,
               v2,
               (void (__fastcall *)(__int64, __int64, __int64))ACPIBusIrpStartDeviceCompletion,
               a2,
               a2);
    if ( result >= 0 )
      return 259;
  }
  return result;
}
