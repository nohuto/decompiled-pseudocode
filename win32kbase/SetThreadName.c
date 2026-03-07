int __fastcall SetThreadName(HANDLE ThreadHandle, const WCHAR *a2)
{
  int result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return ZwSetInformationThread(ThreadHandle, ThreadDescriptorTableEntry|0x20, &DestinationString, 0x10u);
  return result;
}
