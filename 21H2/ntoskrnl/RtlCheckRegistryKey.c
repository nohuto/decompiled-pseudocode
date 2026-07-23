/*
 * XREFs of RtlCheckRegistryKey @ 0x14061AFF0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14024B740 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x14095DF30 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlCheckRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 0LL, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(Handle);
    return 0;
  }
  return result;
}
