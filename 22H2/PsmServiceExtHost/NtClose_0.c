/*
 * XREFs of NtClose_0 @ 0x180044EFC
 * Callers:
 *     RtlpDiskSpeedInitialize @ 0x1800429D0 (RtlpDiskSpeedInitialize.c)
 *     RtlpTestHookInitialize @ 0x180043390 (RtlpTestHookInitialize.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086E88 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x1800870B8 (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtClose_0(HANDLE Handle)
{
  return NtClose(Handle);
}
