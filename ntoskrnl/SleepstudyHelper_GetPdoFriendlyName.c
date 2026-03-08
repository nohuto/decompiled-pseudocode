/*
 * XREFs of SleepstudyHelper_GetPdoFriendlyName @ 0x140842BD0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140842DE4 (SshpGenerateDeviceFriendlyName.c)
 */

__int64 __fastcall SleepstudyHelper_GetPdoFriendlyName(struct _DEVICE_OBJECT *a1, UNICODE_STRING *a2)
{
  NTSTATUS DeviceFriendlyName; // ebx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  SourceString = 0LL;
  if ( a1 && a2 )
  {
    DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a1);
    if ( DeviceFriendlyName >= 0 )
      DeviceFriendlyName = RtlUnicodeStringCopy(a2, &SourceString);
  }
  else
  {
    DeviceFriendlyName = -1073741811;
  }
  if ( SourceString.Buffer )
    CmpFreeTransientPoolWithTag(SourceString.Buffer, 0x6C687373u);
  return (unsigned int)DeviceFriendlyName;
}
