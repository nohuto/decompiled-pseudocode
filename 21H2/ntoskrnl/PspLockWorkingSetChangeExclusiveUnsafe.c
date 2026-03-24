/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x140581924
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C13270, 0LL);
}
