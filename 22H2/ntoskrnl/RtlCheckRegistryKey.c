/*
 * XREFs of RtlCheckRegistryKey @ 0x1407E5930
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140368A40 (RtlCheckPortableOperatingSystem.c)
 *     DifRtlCheckRegistryKeyWrapper @ 0x1405EAEC0 (DifRtlCheckRegistryKeyWrapper.c)
 *     WheapCommitPolicy @ 0x140A096F8 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
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
