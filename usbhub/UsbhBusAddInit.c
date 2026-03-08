/*
 * XREFs of UsbhBusAddInit @ 0x1C0036810
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

void __fastcall UsbhBusAddInit(__int64 a1)
{
  _DWORD *v1; // rbx

  v1 = FdoExt(a1);
  v1[610] = 1;
  KeInitializeSemaphore((PRKSEMAPHORE)(v1 + 612), 1, 1);
  *((_QWORD *)v1 + 602) = v1 + 1202;
  *((_QWORD *)v1 + 601) = v1 + 1202;
  *((_QWORD *)v1 + 604) = v1 + 1206;
  *((_QWORD *)v1 + 603) = v1 + 1206;
  *((_QWORD *)v1 + 606) = v1 + 1210;
  *((_QWORD *)v1 + 605) = v1 + 1210;
  *((_QWORD *)v1 + 349) = v1 + 696;
  *((_QWORD *)v1 + 348) = v1 + 696;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 350);
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 465);
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 618);
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 646);
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 383);
  KeInitializeSemaphore((PRKSEMAPHORE)v1 + 160, 1, 1);
  v1[640] &= ~0x200u;
  KeInitializeEvent((PRKEVENT)(v1 + 650), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)v1 + 112, NotificationEvent, 1u);
}
