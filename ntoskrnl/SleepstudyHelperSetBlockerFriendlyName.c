/*
 * XREFs of SleepstudyHelperSetBlockerFriendlyName @ 0x1402B37A0
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1402B36C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     SSHSupportAllocatePaged @ 0x140732420 (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SleepstudyHelperSetBlockerFriendlyName(UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  __int64 Length; // rcx
  NTSTATUS v5; // ebx
  wchar_t *Buffer; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( a1 && a2 && (Length = a2->Length, (_WORD)Length) )
  {
    DestinationString.Buffer = (wchar_t *)SSHSupportAllocatePaged(
                                            Length,
                                            *(unsigned int *)(*(_QWORD *)&a1->Length + 24LL));
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
