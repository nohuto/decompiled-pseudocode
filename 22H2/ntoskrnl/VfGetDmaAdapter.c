/*
 * XREFs of VfGetDmaAdapter @ 0x1409CBE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IoGetDevicePropertyData @ 0x1406B2E60 (IoGetDevicePropertyData.c)
 *     IoGetDmaAdapter @ 0x1407643C0 (IoGetDmaAdapter.c)
 *     VF_ASSERT_IRQL @ 0x1409CA0FC (VF_ASSERT_IRQL.c)
 *     VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x1409CA424 (VF_FIND_INACTIVE_ADAPTER_AND_REMOVE.c)
 *     VfIsPCIBus @ 0x1409CC7F8 (VfIsPCIBus.c)
 *     ViHookDmaAdapter @ 0x1409CEE9C (ViHookDmaAdapter.c)
 *     ViReleaseDmaAdapter @ 0x1409CF530 (ViReleaseDmaAdapter.c)
 */

struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  _LIST_ENTRY *v6; // rax
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  ULONG Type; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-24h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int Data; // [rsp+88h] [rbp+20h] BYREF

  Data = 0;
  RequiredSize[0] = 0;
  Type = 0;
  if ( !ViVerifyDma || ViDMADisabledNoRebootNeeded == 1 || (unsigned int)VfIsPCIBus() )
    return IoGetDmaAdapter(PhysicalDeviceObject, DeviceDescription, NumberOfMapRegisters);
  if ( (MmVerifierData & 0x20000) == 0 )
    VF_ASSERT_IRQL(0);
  if ( PhysicalDeviceObject )
  {
    while ( 1 )
    {
      v6 = VF_FIND_INACTIVE_ADAPTER_AND_REMOVE((struct _LIST_ENTRY *)PhysicalDeviceObject);
      if ( !v6 )
        break;
      ViReleaseDmaAdapter((__int64)v6);
    }
  }
  if ( *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v7 = ((__int64 (__fastcall *)(struct _KTHREAD *))off_140C00910)(KeGetCurrentThread());
  if ( v7 < 0 && v7 != -1073741275 )
    return 0LL;
  v8 = (_QWORD *)((__int64 (__fastcall *)(PDEVICE_OBJECT, struct _DEVICE_DESCRIPTION *, PULONG))pXdvIoGetDmaAdapter)(
                   PhysicalDeviceObject,
                   DeviceDescription,
                   NumberOfMapRegisters);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = ViHookDmaAdapter(v8);
  v11 = v10;
  if ( !v10 )
  {
    (*(void (__fastcall **)(_QWORD *))(v9[1] + 8LL))(v9);
    return 0LL;
  }
  *(_QWORD *)(v10 + 24) = PhysicalDeviceObject;
  *(_QWORD *)(v10 + 40) = retaddr;
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v11 + 35) = 1;
  }
  return (struct _DMA_ADAPTER *)v9;
}
