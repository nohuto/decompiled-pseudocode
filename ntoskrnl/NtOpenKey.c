/*
 * XREFs of NtOpenKey @ 0x140758B00
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407586E0 (ExpWatchProductTypeWork.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F57C0 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B64AFC (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140B70DDC (IopProtectSystemPartition.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 */

__int64 NtOpenKey()
{
  __int64 v0; // r8
  int v1; // r10d
  HANDLE *v2; // r11
  unsigned int v3; // r8d
  __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)v5 = 0LL;
  CmpInitializeThreadInfo((__int64)v5);
  CmOpenKey(v2, v1, v0, 0, 0LL, KeGetCurrentThread()->PreviousMode);
  CmCleanupThreadInfo(v5);
  return v3;
}
