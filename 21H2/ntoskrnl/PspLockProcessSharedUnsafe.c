/*
 * XREFs of PspLockProcessSharedUnsafe @ 0x140581B8C
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockProcessSharedUnsafe(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
}
