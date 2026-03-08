/*
 * XREFs of SepInitializationPhase1 @ 0x140810320
 * Callers:
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140B48368 (SeInitSystem.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     SddlBaseInitialize @ 0x140384A24 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x140384A3C (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x140413850 (ZwCreateDirectoryObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     SepInitializeCodeIntegrity @ 0x1408105C8 (SepInitializeCodeIntegrity.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140B426C0 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B48710 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B489A0 (SeMakeAnonymousLogonToken.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140B49204 (SepInitializeSingletonAttributesStructures.c)
 */

char __fastcall SepInitializationPhase1(__int64 a1, __int64 a2)
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *Pool2; // rax
  ACL *v4; // rbx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+98h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+A8h] [rbp+27h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObjectEx(
      (char *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = (PVOID)SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = (PVOID)SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  Pool2 = (ACL *)ExAllocatePool2(64LL, 256LL, 538994003LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 0;
  RtlCreateAcl(Pool2, 0x100u, 2u);
  RtlpAddKnownAce((__int64)v4, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
  RtlpAddKnownAce((__int64)v4, 2u, 0, 131075, (unsigned __int8 *)SeAliasAdminsSid, 0);
  RtlpAddKnownAce((__int64)v4, 2u, 0, 2, (unsigned __int8 *)SeWorldSid, 0);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeUnicodeString(&UnicodeString);
  ExFreePoolWithTag(v4, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeUnicodeString(&UnicodeString);
  ZwClose(DirectoryHandle);
  ZwClose(EventHandle);
  if ( !IsCurrentThreadInServerSilo )
  {
    SepInitProcessAuditSd();
    SepInitializeCodeIntegrity();
    SepInitializeAuthorizationCallbacks();
    if ( (int)SepInitializeSingletonAttributesStructures() < 0 )
      return 0;
  }
  SddlBaseInitialize();
  return 1;
}
