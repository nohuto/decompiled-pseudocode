/*
 * XREFs of ?ndisCompletionRoutine@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C003A0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCompletionRoutine(struct _DEVICE_OBJECT *a1, struct _IRP *a2, struct _KEVENT *a3)
{
  a3[1].Header.LockNV = a2->IoStatus.Status;
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
