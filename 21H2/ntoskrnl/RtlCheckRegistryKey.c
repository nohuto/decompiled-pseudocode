/*
 * XREFs of RtlCheckRegistryKey @ 0x1406BBF70
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1402CD240 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x14095DD50 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
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
