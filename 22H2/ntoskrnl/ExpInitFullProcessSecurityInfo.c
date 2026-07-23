/*
 * XREFs of ExpInitFullProcessSecurityInfo @ 0x1407D2520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F9D00 (ZwQueryValueKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 */

_BOOL8 __fastcall ExpInitFullProcessSecurityInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS v4; // ebx
  ULONG ResultLength; // [rsp+38h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  size_t KeyValueInformation[12]; // [rsp+78h] [rbp-19h] BYREF

  memset(KeyValueInformation, 0, 0x54uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"tv";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    v4 = ZwQueryValueKey(
           KeyHandle,
           &stru_140C04780,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x54u,
           &ResultLength);
    if ( v4 >= 0 )
    {
      if ( LODWORD(KeyValueInformation[1]) > 0x44 )
      {
        v4 = -1073741789;
      }
      else
      {
        memmove(&ExpFullProcessInformationSid, (char *)&KeyValueInformation[1] + 4, LODWORD(KeyValueInformation[1]));
        *a3 = &ExpFullProcessInformationSid;
      }
    }
    ZwClose(KeyHandle);
  }
  return v4 >= 0;
}
