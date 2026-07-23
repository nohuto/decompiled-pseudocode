/*
 * XREFs of SepInitializationPhase1 @ 0x14079D578
 * Callers:
 *     SeInitServerSilo @ 0x14091C234 (SeInitServerSilo.c)
 *     SeInitSystem @ 0x140A488EC (SeInitSystem.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     SddlBaseInitialize @ 0x1403B4740 (SddlBaseInitialize.c)
 *     SepInitProcessAuditSd @ 0x1403B47B8 (SepInitProcessAuditSd.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403FAE80 (ZwCreateEvent.c)
 *     ZwCreateDirectoryObject @ 0x1403FBA60 (ZwCreateDirectoryObject.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     SepInitializeCodeIntegrity @ 0x14079DDAC (SepInitializeCodeIntegrity.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140A48A00 (SepInitializeSingletonAttributesStructures.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140A48E64 (SepInitializeAuthorizationCallbacks.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A494C0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A4974C (SeMakeAnonymousLogonToken.c)
 */

char __fastcall SepInitializationPhase1(__int64 a1, __int64 a2)
{
  bool IsCurrentThreadInServerSilo; // di
  ACL *PoolWithTag; // rax
  ACL *v4; // rbx
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  HANDLE EventHandle; // [rsp+50h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+98h] [rbp+27h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  IsCurrentThreadInServerSilo = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !IsCurrentThreadInServerSilo )
  {
    ObInsertObject(
      (PVOID)(KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] & 0xFFFFFFFFFFFFFFF0uLL),
      0LL,
      0,
      0,
      0LL,
      0LL);
    SeAnonymousLogonToken = SeMakeAnonymousLogonToken();
    SeAnonymousLogonTokenNoEveryone = (PVOID)SeMakeAnonymousLogonTokenNoEveryone();
  }
  RtlInitAnsiString(&DestinationString, "\\Security");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x20206553u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  RtlCreateAcl(PoolWithTag, 0x100u, 2u);
  RtlAddAccessAllowedAce(v4, 2u, 0xF000Fu, SeLocalSystemSid);
  RtlAddAccessAllowedAce(v4, 2u, 0x20003u, SeAliasAdminsSid);
  RtlAddAccessAllowedAce(v4, 2u, 2u, SeWorldSid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.Length = 48;
  ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
  RtlFreeAnsiString(&UnicodeString);
  ExFreePoolWithTag(v4, 0);
  RtlInitAnsiString(&DestinationString, "LSA_AUTHENTICATION_INITIALIZED");
  RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.RootDirectory = DirectoryHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &UnicodeString;
  ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultSd;
  ObjectAttributes.Attributes = 80;
  ZwCreateEvent(&EventHandle, 0x40000000u, &ObjectAttributes, NotificationEvent, 0);
  RtlFreeAnsiString(&UnicodeString);
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
