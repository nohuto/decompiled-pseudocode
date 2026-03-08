/*
 * XREFs of IoSetHardErrorOrVerifyDevice @ 0x1404571B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject)
{
  PETHREAD Thread; // rax

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
    Thread[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)DeviceObject;
}
