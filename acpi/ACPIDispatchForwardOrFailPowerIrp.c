/*
 * XREFs of ACPIDispatchForwardOrFailPowerIrp @ 0x1C0002A4C
 * Callers:
 *     ACPIWakeWaitIrp @ 0x1C00460A0 (ACPIWakeWaitIrp.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall ACPIDispatchForwardOrFailPowerIrp(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v5; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( (*(_BYTE *)(DeviceExtension + 8) & 0x20) != 0 || !*(_QWORD *)(DeviceExtension + 776) )
  {
    v5 = -1073741822;
    a2->IoStatus.Status = -1073741822;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return (unsigned int)PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  }
  return v5;
}
