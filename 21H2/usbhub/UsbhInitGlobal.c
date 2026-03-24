/*
 * XREFs of UsbhInitGlobal @ 0x1C0044378
 * Callers:
 *     DriverEntry @ 0x1C00422D8 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C001E180 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&HubG, 0, 0x1B8uLL);
  KeInitializeSpinLock(&HubG);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent(&Event, SynchronizationEvent, 1u);
  KeInitializeEvent(&stru_1C006C610, SynchronizationEvent, 0);
  dword_1C006C508 = 2017613128;
  dword_1C006C578 = 1734964085;
  dword_1C006C548 = 1734964085;
  dword_1C006C538 = 1734964085;
  dword_1C006C528 = 1734964085;
  dword_1C006C554 = 1734964085;
  dword_1C006C560 = 1734964085;
  dword_1C006C56C = 1734964085;
  dword_1C006C580 = 1734964085;
  qword_1C006C5C0 = (__int64)&qword_1C006C5B8;
  qword_1C006C5B8 = (__int64)&qword_1C006C5B8;
  qword_1C006C4A8 = (__int64)&qword_1C006C4A0;
  qword_1C006C4A0 = (__int64)&qword_1C006C4A0;
  qword_1C006C608 = (__int64)&qword_1C006C600;
  qword_1C006C600 = (__int64)&qword_1C006C600;
  result = 2LL;
  dword_1C006C4BC = 2;
  dword_1C006C4E8 = 2;
  qword_1C006C518 = (__int64)&HubG;
  dword_1C006C50C = 3;
  qword_1C006C510 = 0LL;
  dword_1C006C4B0 = 500;
  dword_1C006C4B4 = 8;
  qword_1C006C4C8 = 32LL;
  dword_1C006C4D0 = 1;
  dword_1C006C4D8 = 0;
  qword_1C006C4DC = 10LL;
  dword_1C006C4F4 = 300;
  dword_1C006C5C8 = 3;
  dword_1C006C4E4 = 2000;
  dword_1C006C5D8 = 1;
  dword_1C006C630 = 25;
  return result;
}
