/*
 * XREFs of ClipInitHandles @ 0x1403750E0
 * Callers:
 *     ExInitLicenseData @ 0x1408114F8 (ExInitLicenseData.c)
 * Callees:
 *     sub_140812CB4 @ 0x140812CB4 (sub_140812CB4.c)
 */

__int64 ClipInitHandles()
{
  qword_140D534A0 = (__int64)ExUpdateLicenseData;
  qword_140D534A8 = (__int64)ntoskrnl_27;
  qword_140D534B0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D534B8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_140812CB4();
}
