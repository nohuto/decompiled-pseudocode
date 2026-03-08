/*
 * XREFs of CmpDiskFullWarningWorker @ 0x140A0EE60
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDiskFullWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741697, 0, 0, 0LL, 1, &v2);
}
