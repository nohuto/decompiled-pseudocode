/*
 * XREFs of ClipInitHandles @ 0x140389270
 * Callers:
 *     ExInitLicenseData @ 0x140819CE8 (ExInitLicenseData.c)
 * Callees:
 *     sub_14081B380 @ 0x14081B380 (sub_14081B380.c)
 */

__int64 ClipInitHandles()
{
  qword_140D534A0 = (__int64)ExUpdateLicenseData;
  qword_140D534A8 = (__int64)ntoskrnl_27;
  qword_140D534B0 = (__int64)ExUpdateOsPfnInRegistry;
  qword_140D534B8 = (__int64)SeExports;
  ClipSpInitialize(0LL, &g_kernelCallbacks);
  return sub_14081B380();
}
