/*
 * XREFs of NtosSecureKernelImportBugcheck @ 0x140582C10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __noreturn NtosSecureKernelImportBugcheck()
{
  KeBugCheckEx(0x123u, 0LL, 0LL, 0LL, 0LL);
}
