/*
 * XREFs of KeUnsecureThread @ 0x14056CD2C
 * Callers:
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x1409402FC (VslTerminateSecureThread.c)
 */

__int64 __fastcall KeUnsecureThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 SecureThreadCookie; // rcx

  CurrentThread = KeGetCurrentThread();
  SecureThreadCookie = CurrentThread->SecureThreadCookie;
  CurrentThread->SecureThreadCookie = 0;
  return VslTerminateSecureThread(SecureThreadCookie, a1);
}
