/*
 * XREFs of PspLockProcessSharedUnsafe @ 0x14058181C
 * Callers:
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSharedUnsafe(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
