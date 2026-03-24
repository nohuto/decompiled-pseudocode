/*
 * XREFs of RtlCheckRegistryKey @ 0x14069EFA0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140326640 (RtlCheckPortableOperatingSystem.c)
 *     WheapCommitPolicy @ 0x14095DDA0 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
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
