/*
 * XREFs of SSHSupportAcquirePushLockExclusive @ 0x14085ACDC
 * Callers:
 *     SshpSetCollectionActive @ 0x1403AA858 (SshpSetCollectionActive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall SSHSupportAcquirePushLockExclusive(ULONG_PTR a1)
{
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
