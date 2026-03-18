/*
 * XREFs of RtlCheckRegistryKey @ 0x1406DEF70
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140255FD0 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x14061ACF0 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A0980C (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
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
