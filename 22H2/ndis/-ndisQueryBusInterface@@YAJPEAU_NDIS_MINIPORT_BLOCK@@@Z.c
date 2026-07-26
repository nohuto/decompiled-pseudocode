/*
 * XREFs of ?ndisQueryBusInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A278
 * Callers:
 *     ?ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C01047E8 (-ndisInitializeConfiguration@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisQueryBusInterface(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *NextDeviceObject; // r14
  PIRP Irp; // rax
  _IRP *v4; // rsi
  __int64 v5; // rdi
  int v6; // r15d
  _QWORD v8[6]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+68h] [rbp-A0h]
  _QWORD v10[10]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v11[9]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v12[8]; // [rsp+118h] [rbp+10h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      a1,
      v8[0]);
  NextDeviceObject = a1->NextDeviceObject;
  Irp = IoAllocateIrp(NextDeviceObject->StackSize + 1, 0);
  v4 = Irp;
  if ( Irp )
  {
    v5 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = NextDeviceObject;
    Irp->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_BUS_INTERFACE_STANDARD;
    *(_QWORD *)(v5 + 24) = v12;
    *(_DWORD *)(v5 + 16) = 65600;
    v6 = IoSynchronousCallDriver(NextDeviceObject, Irp);
    if ( v6 >= 0 )
    {
      v6 = 0;
      a1->SetBusData = (unsigned int (__fastcall *)(void *, unsigned int, void *, unsigned int, unsigned int))v12[6];
      a1->GetBusData = (unsigned int (__fastcall *)(void *, unsigned int, void *, unsigned int, unsigned int))v12[7];
      a1->BusDataContext = (void *)v12[1];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_MSIX_TABLE_CONFIG_INTERFACE;
    *(_QWORD *)(v5 + 24) = v11;
    *(_DWORD *)(v5 + 16) = 65608;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) < 0 )
    {
      a1->MSIXConfigContext = 0LL;
      a1->SetMSIXTableEntry = 0LL;
      a1->MaskMSIXTableEntry = 0LL;
      a1->UnmaskMSIXTableEntry = 0LL;
    }
    else
    {
      a1->MSIXConfigContext = (void *)v11[1];
      a1->SetMSIXTableEntry = (int (__fastcall *)(void *, unsigned int, unsigned int))v11[4];
      a1->MaskMSIXTableEntry = (int (__fastcall *)(void *, unsigned int))v11[5];
      a1->UnmaskMSIXTableEntry = (int (__fastcall *)(void *, unsigned int))v11[6];
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_PCI_VIRTUALIZATION_INTERFACE;
    *(_QWORD *)(v5 + 24) = v10;
    *(_DWORD *)(v5 + 16) = 65616;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) >= 0 )
    {
      a1->VirtInterfaceContext = (void *)v10[1];
      a1->SetVirtualFunctionData = (unsigned int (__fastcall *)(void *, unsigned __int16, void *, unsigned int, unsigned int))v10[4];
      a1->GetVirtualFunctionData = (unsigned int (__fastcall *)(void *, unsigned __int16, void *, unsigned int, unsigned int))v10[5];
      a1->EnableVirtualization = (int (__fastcall *)(void *, unsigned __int16, unsigned __int8, unsigned __int8, unsigned __int8))v10[8];
      a1->GetVirtualDeviceLocation = (int (__fastcall *)(void *, unsigned __int16, unsigned __int16 *, unsigned __int8 *, unsigned __int8 *))v10[6];
      a1->GetVirtualFunctionProbedBars = (int (__fastcall *)(void *, unsigned int *))v10[9];
    }
    else
    {
      a1->VirtInterfaceContext = 0LL;
      a1->SetVirtualFunctionData = 0LL;
      a1->GetVirtualFunctionData = 0LL;
      a1->EnableVirtualization = 0LL;
      a1->GetVirtualDeviceLocation = 0LL;
      a1->GetVirtualFunctionProbedBars = 0LL;
    }
    IoReuseIrp(v4, -1073741637);
    *(_WORD *)v5 = 2075;
    *(_QWORD *)(v5 + 40) = NextDeviceObject;
    v4->IoStatus.Status = -1073741637;
    *(_QWORD *)(v5 + 8) = &GUID_VPCI_INTERFACE_STANDARD;
    *(_QWORD *)(v5 + 24) = v8;
    *(_DWORD *)(v5 + 16) = 65592;
    if ( (int)IoSynchronousCallDriver(NextDeviceObject, v4) >= 0 )
    {
      a1->VpciInterfaceContext = (void *)v8[1];
      *(_OWORD *)&a1->VpciInterfaceDereference = *(_OWORD *)&v8[3];
      a1->ReadVfConfigBlock = (int (__fastcall *)(void *, unsigned int, void *, unsigned int))v8[5];
      a1->VfSerialNumber = v9;
    }
    else
    {
      a1->VpciInterfaceContext = 0LL;
      a1->VpciInterfaceDereference = 0LL;
      a1->WriteVfConfigBlock = 0LL;
      a1->ReadVfConfigBlock = 0LL;
      a1->VfSerialNumber = 0;
    }
    IoFreeIrp(v4);
  }
  else
  {
    v6 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_eeb71838b50e3a51e19c5b48ce25db7d_Traceguids,
      a1);
  return (unsigned int)v6;
}
