NTSTATUS __fastcall IoCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return IofCallDriver(a1, a2);
}
