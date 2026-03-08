/*
 * XREFs of RIMEndAllActiveContacts @ 0x1C01A4BE0
 * Callers:
 *     RIMResetPointerDevices @ 0x1C01A7E40 (RIMResetPointerDevices.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0032C40 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0033950 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 */

void __fastcall RIMEndAllActiveContacts(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+20h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v3, (struct _KTHREAD **)(a1 + 104));
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v2, (struct _KTHREAD **)(a1 + 760));
  rimEndAllActiveContactsWorker((struct RawInputManagerObject *)a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v2);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v3);
}
