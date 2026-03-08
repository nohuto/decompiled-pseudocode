/*
 * XREFs of RtlCreateRegistryKey @ 0x140860170
 * Callers:
 *     DifRtlCreateRegistryKeyWrapper @ 0x1405E8B30 (DifRtlCreateRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A06A08 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
