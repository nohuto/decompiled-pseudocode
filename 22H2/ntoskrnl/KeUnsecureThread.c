/*
 * XREFs of KeUnsecureThread @ 0x14056F39C
 * Callers:
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 * Callees:
 *     VslTerminateSecureThread @ 0x14094331C (VslTerminateSecureThread.c)
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
