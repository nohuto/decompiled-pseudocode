/*
 * XREFs of CcMmLogLostDelayedWriteError @ 0x140535454
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 *     MiLdwPopupWorker @ 0x140A2CB60 (MiLdwPopupWorker.c)
 * Callees:
 *     IoQueryFileDosDeviceName @ 0x14071FFB0 (IoQueryFileDosDeviceName.c)
 *     FsRtlLogCcFlushError @ 0x14093A170 (FsRtlLogCcFlushError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

bool __fastcall CcMmLogLostDelayedWriteError(struct _FILE_OBJECT *a1, NTSTATUS a2)
{
  ULONG Flags; // edi
  NTSTATUS FileDosDeviceName; // eax
  UNICODE_STRING *p_FileName; // rcx
  PVPB Vpb; // rax
  struct _DEVICE_OBJECT *DeviceObject; // rdx
  NTSTATUS v9; // ebx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  Flags = 1;
  FileDosDeviceName = IoQueryFileDosDeviceName(a1, (POBJECT_NAME_INFORMATION *)&P);
  p_FileName = (UNICODE_STRING *)P;
  if ( FileDosDeviceName )
    p_FileName = &a1->FileName;
  if ( p_FileName->Length && p_FileName->MaximumLength && p_FileName->Buffer )
    Flags = 0;
  Vpb = a1->Vpb;
  if ( Vpb )
    DeviceObject = Vpb->DeviceObject;
  else
    DeviceObject = a1->DeviceObject;
  v9 = FsRtlLogCcFlushError(p_FileName, DeviceObject, a1->SectionObjectPointer, a2, Flags);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v9 == 0;
}
