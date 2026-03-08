/*
 * XREFs of CmpQuotaWarningWorker @ 0x140A0D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x1409FDD30 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQuotaWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0LL, 1, &v2);
}
