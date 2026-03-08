/*
 * XREFs of RtlCheckRegistryKey @ 0x1407964F0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1402FD500 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x1405E8A10 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A06A08 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
