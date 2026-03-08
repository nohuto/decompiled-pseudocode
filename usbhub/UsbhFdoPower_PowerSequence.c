/*
 * XREFs of UsbhFdoPower_PowerSequence @ 0x1C003C1C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoPower_PowerSequence(__int64 a1, IRP *a2)
{
  PDEVICE_OBJECT *v3; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx

  v3 = (PDEVICE_OBJECT *)FdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return PoCallDriver(v3[151], a2);
}
