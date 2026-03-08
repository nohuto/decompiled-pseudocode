/*
 * XREFs of ExpKeyedEventInitialization @ 0x140B6A590
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140B3F0B8 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKeyedEvent @ 0x1404139B0 (ZwCreateKeyedEvent.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406DB5D0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x140740AF0 (RtlAddMandatoryAce.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

int ExpKeyedEventInitialization()
{
  int result; // eax
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rbx
  NTSTATUS Acl; // edi
  ACL *v5; // rcx
  ULONG v6; // esi
  ACL *v7; // rax
  ACL *v8; // rdi
  int KeyedEvent; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+44h] [rbp-BCh]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+5Ch] [rbp-A4h]
  _OWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+68h] [rbp-98h]
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h]
  _DWORD v21[40]; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp+50h] BYREF
  PVOID Object; // [rsp+158h] [rbp+58h] BYREF

  DestinationString = 0LL;
  memset(v21, 0, 0x78uLL);
  v16 = 0;
  Handle = 0LL;
  v12 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"KeyedEvent");
  v21[2] = 0;
  v21[10] = 0;
  v21[11] = 0;
  BYTE2(v21[0]) |= 4u;
  v21[7] = 983043;
  v21[6] = 983043;
  LOWORD(v21[0]) = 120;
  v21[9] = 1;
  v21[3] = 131073;
  v21[4] = 131074;
  v21[5] = 0x20000;
  result = ObCreateObjectType(&DestinationString, (__int64)v21, 0LL, (__int64)&ExpKeyedEventObjectType);
  if ( result < 0 )
    return result;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result < 0 )
    return result;
  v1 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeWorldSid + 1))
     + 68;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
  v3 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Acl = RtlCreateAcl(Pool2, v1, 2u);
  v5 = v3;
  if ( Acl < 0
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0x20003u, SeWorldSid), v5 = v3, Acl < 0)
    || (Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeAliasAdminsSid), v5 = v3, Acl < 0) )
  {
LABEL_20:
    ExFreePoolWithTag(v5, 0);
    return Acl;
  }
  Acl = RtlAddAccessAllowedAce(v3, 2u, 0xF0003u, SeLocalSystemSid);
  if ( Acl < 0 || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0), Acl < 0) )
  {
LABEL_19:
    v5 = v3;
    goto LABEL_20;
  }
  v6 = 4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 28;
  v7 = (ACL *)ExAllocatePool2(256LL, v6, 0x6C636144u);
  v8 = v7;
  if ( !v7 )
  {
    Acl = -1073741670;
    goto LABEL_19;
  }
  KeyedEvent = RtlCreateAcl(v7, v6, 2u);
  if ( KeyedEvent < 0
    || (KeyedEvent = RtlAddMandatoryAce((__int64)v8, 2u, 0, (__int64)SeLowMandatorySid, 17, 1), KeyedEvent < 0)
    || (KeyedEvent = RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)v8, 0), KeyedEvent < 0) )
  {
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\CritSecOutOfMemoryEvent");
    v13 = 0LL;
    v18 = 0LL;
    p_DestinationString = &DestinationString;
    v11 = 48;
    v17 = SecurityDescriptor;
    v15 = 16;
    KeyedEvent = ZwCreateKeyedEvent((__int64)&Handle, 983043LL);
    ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(v8, 0);
    if ( KeyedEvent >= 0 )
    {
      Object = 0LL;
      KeyedEvent = ObReferenceObjectByHandle(Handle, 0xF0003u, ExpKeyedEventObjectType, 0, &Object, 0LL);
      ExpCritSecOutOfMemoryEvent = (__int64)Object;
      ZwClose(Handle);
    }
  }
  return KeyedEvent;
}
