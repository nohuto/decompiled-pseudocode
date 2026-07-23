/*
 * XREFs of RtlCreateRegistryKey @ 0x1407D0E70
 * Callers:
 *     WheapCommitPolicy @ 0x14095DF30 (WheapCommitPolicy.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
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
