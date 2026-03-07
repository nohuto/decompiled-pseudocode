__int64 __fastcall UsbhFdoSystemControl(PDEVICE_OBJECT DeviceObject, IRP *Tag)
{
  char *DeviceExtension; // rbp
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // esi
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  void *v11; // r9
  __int64 v12; // rdx
  _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+70h] [rbp+18h] BYREF

  IrpDisposition = IrpProcessed;
  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v5 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v5 = 1229805382;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = Tag;
  }
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Tag, File, 1u, 0x20u);
  v7 = v6;
  if ( (v6 & 0xC0000000) == 0xC0000000 )
  {
    Tag->IoStatus.Status = v6;
    Log((__int64)DeviceObject, 16, 561474921, v6, (__int64)Tag);
LABEL_8:
    IofCompleteRequest(Tag, 0);
    return v7;
  }
  v9 = WmiSystemControl((PWMILIB_CONTEXT)(DeviceExtension + 2872), DeviceObject, Tag, &IrpDisposition);
  v10 = IrpDisposition;
  v7 = v9;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v11 = DeviceObject->DeviceExtension;
    if ( v11 )
    {
      v12 = *((_QWORD *)v11 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
      *(_DWORD *)v12 = 1768781638;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = v9;
    }
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), Tag, 0x20u);
  if ( IrpDisposition )
  {
    if ( IrpDisposition != IrpNotCompleted )
      return (unsigned int)UsbhFdoChainIrp(DeviceObject, Tag);
    goto LABEL_8;
  }
  return v7;
}
