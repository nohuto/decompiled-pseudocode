/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x1405A4ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
