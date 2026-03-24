/*
 * XREFs of SleepstudyHelperSetBlockerFriendlyName @ 0x140325850
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x140325750 (SleepstudyHelperCreateBlockerFromGuid.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140206C90 (RtlUnicodeStringCopy.c)
 *     SSHSupportAllocatePaged @ 0x14069D95C (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerFriendlyName(UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  SIZE_T Length; // rcx
  NTSTATUS v5; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( a1 && a2 && (Length = a2->Length, (_WORD)Length) )
  {
    DestinationString.Buffer = (wchar_t *)SSHSupportAllocatePaged(Length, *(_DWORD *)(*(_QWORD *)&a1->Length + 24LL));
    if ( !DestinationString.Buffer )
      return (unsigned int)-1073741670;
    DestinationString.MaximumLength = a2->Length;
    DestinationString.Length = 0;
    v5 = RtlUnicodeStringCopy(&DestinationString, a2);
    if ( v5 >= 0 )
    {
      Buffer = a1[3].Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, *(_DWORD *)(*(_QWORD *)&a1->Length + 24LL));
      v5 = 0;
      a1[3] = DestinationString;
      DestinationString = 0LL;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, *(_DWORD *)(*(_QWORD *)&a1->Length + 24LL));
  return (unsigned int)v5;
}
