/*
 * XREFs of UsbhSyncSendCommandToDevice @ 0x1C0002110
 * Callers:
 *     UsbhDisableDeviceForWake @ 0x1C0001BF8 (UsbhDisableDeviceForWake.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0032530 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C0032C38 (UsbhGetMsOsFeatureDescriptor.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C0033118 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C003DE80 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhEnableDeviceForWake @ 0x1C0053B9C (UsbhEnableDeviceForWake.c)
 *     UsbhGetBosDescriptor @ 0x1C0053C48 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0053DEC (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C0053EC8 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbhGetStringFromDevice @ 0x1C0053F4C (UsbhGetStringFromDevice.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0002F00 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0003470 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C00036C0 (UsbhRefPdoDeviceHandle.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 */

__int64 UsbhSyncSendCommandToDevice(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, _WORD *a5, ...)
{
  int *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned int Status; // ebx
  __int64 Pool2; // rax
  int v13; // r10d
  struct _DEVICE_OBJECT *v14; // rbx
  PIRP v15; // rdx
  int v16; // eax
  bool v17; // zf
  NTSTATUS v18; // eax
  __int64 v19; // r10
  int v20; // r9d
  __int64 v22; // [rsp+50h] [rbp-58h]
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
  Status = UsbhFdoCheckUpstreamConnectionState(a1, (__int64 *)va);
  if ( (Status & 0xC0000000) == 0xC0000000 )
    goto LABEL_16;
  if ( !a5 )
  {
    Status = -1073741811;
LABEL_16:
    v13 = -1073713152;
    goto LABEL_17;
  }
  Pool2 = ExAllocatePool2(64LL, 136LL, 1112885333LL);
  v8 = (int *)Pool2;
  if ( !Pool2 )
    goto LABEL_5;
  v9 = UsbhRefPdoDeviceHandle(a1, a2, Pool2, 1145983859LL);
  if ( !v9 || (v14 = *(struct _DEVICE_OBJECT **)(v10 + 1216)) == 0LL )
  {
    Status = -1073741810;
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v15 = IoBuildDeviceIoControlRequest(0x220003u, v14, 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v15 )
  {
LABEL_5:
    Status = -1073741670;
    v13 = -1073737728;
    goto LABEL_17;
  }
  *((_QWORD *)v8 + 1) = *(_QWORD *)(v22 + 1160);
  v8[8] = 10;
  v16 = v8[8];
  *v8 = 3276936;
  v17 = *a3 >= 0;
  v8[14] = 2000;
  if ( !v17 )
    v16 = 11;
  *((_QWORD *)v8 + 6) = 0LL;
  v8[8] = v16;
  v8[9] = (unsigned __int16)*a5;
  *((_QWORD *)v8 + 5) = a4;
  *((_QWORD *)v8 + 16) = *(_QWORD *)a3;
  v15->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v8;
  v18 = IofCallDriver(v14, v15);
  Status = v18;
  if ( v18 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = v18;
  }
  v19 = v8[1];
  v20 = *((unsigned __int16 *)v8 + 18);
  *a5 = v20;
  Log(a1, 256, 1396925558, v20, v19);
LABEL_17:
  if ( v28 )
    *v28 = v13;
  if ( v9 )
    UsbhDerefPdoDeviceHandle(a1, v9, v8, 1145983859LL);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return Status;
}
