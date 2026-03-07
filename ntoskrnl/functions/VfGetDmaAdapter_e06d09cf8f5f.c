struct _DMA_ADAPTER *__fastcall VfGetDmaAdapter(
        PDEVICE_OBJECT PhysicalDeviceObject,
        struct _DEVICE_DESCRIPTION *DeviceDescription,
        PULONG NumberOfMapRegisters)
{
  struct _LIST_ENTRY *v6; // rax
  int v7; // eax
  char v8; // bp
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  ULONG Type; // [rsp+40h] [rbp-28h] BYREF
  ULONG RequiredSize[3]; // [rsp+44h] [rbp-24h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  int Data; // [rsp+88h] [rbp+20h] BYREF

  Data = 0;
  RequiredSize[0] = 0;
  Type = 0;
  if ( !ViVerifyDma || (unsigned int)VfIsPCIBus() )
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
  if ( ViDoubleBufferDma && *NumberOfMapRegisters > 0x20 )
    *NumberOfMapRegisters = 32;
  v7 = ((__int64 (__fastcall *)(struct _KTHREAD *))off_140C01D20)(KeGetCurrentThread());
  if ( v7 < 0 )
  {
    if ( v7 != -1073741275 )
      return 0LL;
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = (_QWORD *)((__int64 (__fastcall *)(PDEVICE_OBJECT, struct _DEVICE_DESCRIPTION *, PULONG))pXdvIoGetDmaAdapter)(
                   PhysicalDeviceObject,
                   DeviceDescription,
                   NumberOfMapRegisters);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v11 = ViHookDmaAdapter(v9, retaddr, v8);
  if ( !v11 )
  {
    (*(void (__fastcall **)(_QWORD *))(v10[1] + 8LL))(v10);
    return 0LL;
  }
  if ( PhysicalDeviceObject
    && IoGetDevicePropertyData(PhysicalDeviceObject, &DEVPKEY_Device_Capabilities, 0, 0, 4u, &Data, RequiredSize, &Type) >= 0
    && (Data & 0x400) != 0 )
  {
    *(_BYTE *)(v11 + 75) = 1;
  }
  return (struct _DMA_ADAPTER *)(v11 + 16);
}
