/*
 * XREFs of PnpGetRelatedTargetDevice @ 0x1403224B8
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140687F00 (IoRegisterPlugPlayNotification.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14077F604 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     IoGetRelatedTargetDevice @ 0x140794AAC (IoGetRelatedTargetDevice.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 *     PnpSendIrp @ 0x1403225B8 (PnpSendIrp.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRelatedTargetDevice(PFILE_OBJECT FileObject, _QWORD *a2)
{
  KIRQL v4; // bl
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  int v6; // r8d
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD v11[9]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  P = 0LL;
  *a2 = 0LL;
  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( !RelatedDeviceObject )
    return 3221225486LL;
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 1819;
  LODWORD(v11[1]) = 4;
  v11[5] = RelatedDeviceObject;
  v11[6] = FileObject;
  result = PnpSendIrp((_DWORD)RelatedDeviceObject, (unsigned int)v11, v6, 0, (__int64)&P);
  v8 = result;
  if ( (int)result < 0 )
    return result;
  if ( !P )
    return 3221225486LL;
  v9 = *(_DWORD *)P == 1 ? *((_QWORD *)P + 1) : 0LL;
  ExFreePoolWithTag(P, 0);
  if ( !v9 )
    return 3221225486LL;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
  if ( !v10 )
    return 3221225486LL;
  *a2 = v10;
  return v8;
}
