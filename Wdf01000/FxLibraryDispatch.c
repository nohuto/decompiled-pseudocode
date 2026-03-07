__int64 __fastcall FxLibraryDispatch(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  unsigned int v2; // ebx
  unsigned __int8 MajorFunction; // cl

  v2 = -1073741808;
  MajorFunction = Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction )
  {
    if ( MajorFunction == 2 || MajorFunction == 18 )
      v2 = 0;
  }
  else
  {
    v2 = Irp->RequestorMode != 0 ? 0xC0000010 : 0;
  }
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
