/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x1C00177A8
 * Callers:
 *     UsbhDisableDeviceForWake @ 0x1C0018160 (UsbhDisableDeviceForWake.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0033830 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C0033F78 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C003447C (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhSetupDevice @ 0x1C0039FD8 (UsbhSetupDevice.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003F070 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x1C00551FC (UsbhEnableDeviceForWake.c)
 *     UsbhGetBosDescriptor @ 0x1C00552A8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0055478 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C0055554 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbhGetStringFromDevice @ 0x1C00555D8 (UsbhGetStringFromDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0015C80 (UsbhRefPdoDeviceHandle.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0015EB4 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0016670 (UsbhDerefPdoDeviceHandle.c)
 *     memset @ 0x1C001E180 (memset.c)
 */

__int64 UsbhSyncSendCommandToDevice(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v8; // rdi
  __int64 v9; // rsi
  _DWORD *v10; // r15
  unsigned int Status; // ebx
  int *PoolWithTag; // rax
  struct _DEVICE_OBJECT *v13; // rbx
  PIRP v14; // rdx
  int v15; // eax
  bool v16; // zf
  NTSTATUS v17; // eax
  __int64 v18; // r10
  __int64 v19; // r9
  int v20; // r10d
  _DWORD *v22; // [rsp+50h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-40h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  int *v28; // [rsp+E0h] [rbp+38h]
  va_list va1; // [rsp+E8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v26 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, int *);
  LODWORD(v26) = 0;
  memset(&Event, 0, sizeof(Event));
  v8 = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  v10 = FdoExt(a1);
  v22 = PdoExt(a2);
  Status = UsbhFdoCheckUpstreamConnectionState(a1, (unsigned int *)va);
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_20;
  if ( !a5 )
  {
    Status = -1073741811;
    goto LABEL_20;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x88uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_23:
    v20 = -1073737728;
    Status = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x88uLL);
  v9 = UsbhRefPdoDeviceHandle(a1, a2, (__int64)v8, 0x444E5373u);
  if ( !v9 || (v13 = (struct _DEVICE_OBJECT *)*((_QWORD *)v10 + 152)) == 0LL )
  {
    Status = -1073741810;
LABEL_20:
    v20 = -1073713152;
    goto LABEL_12;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(0x220003u, v13, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v14 )
    goto LABEL_23;
  *((_QWORD *)v8 + 1) = *((_QWORD *)v22 + 145);
  v8[8] = 10;
  v15 = v8[8];
  *v8 = 3276936;
  v16 = *a3 >= 0;
  v8[14] = 2000;
  if ( !v16 )
    v15 = 11;
  *((_QWORD *)v8 + 6) = 0LL;
  v8[8] = v15;
  v8[9] = (unsigned __int16)*a5;
  *((_QWORD *)v8 + 5) = a4;
  *((_QWORD *)v8 + 16) = *(_QWORD *)a3;
  v14->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v8;
  v17 = IofCallDriver(v13, v14);
  Status = v17;
  if ( v17 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = v17;
  }
  v18 = v8[1];
  v19 = *((unsigned __int16 *)v8 + 18);
  *a5 = v19;
  Log(a1, 256, 1396925558, v19, v18);
LABEL_12:
  if ( v28 )
    *v28 = v20;
  if ( v9 )
    UsbhDerefPdoDeviceHandle(a1, v9, (__int64)v8, 0x444E5373u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return Status;
}
