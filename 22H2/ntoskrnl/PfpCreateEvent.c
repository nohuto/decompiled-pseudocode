/*
 * XREFs of PfpCreateEvent @ 0x1407C0610
 * Callers:
 *     PfTStart @ 0x1407C0200 (PfTStart.c)
 *     PfpScenCtxStart @ 0x1407C0590 (PfpScenCtxStart.c)
 *     PfpParametersInitialize @ 0x140A6A864 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A6AA00 (PfSnInitializePrefetcher.c)
 * Callees:
 *     RtlLengthSid @ 0x140347A80 (RtlLengthSid.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403FA320 (ZwCreateEvent.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpCreateEvent(UNICODE_STRING *a1, EVENT_TYPE a2, PVOID *a3)
{
  int Acl; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ACL *PoolWithTag; // rax
  ACL *v10; // rdi
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+58h] [rbp-1h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE EventHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v14 = 0LL;
  EventHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v7 = RtlLengthSid(SeAliasAdminsSid);
    v8 = RtlLengthSid(SeLocalSystemSid) + 32 + v7;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x6C636144u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v8, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v10, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 656;
              ObjectAttributes.ObjectName = a1;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, a2, 0);
              if ( Acl >= 0 )
              {
                Object = 0LL;
                Acl = ObReferenceObjectByHandle(
                        EventHandle,
                        0x1F0003u,
                        (POBJECT_TYPE)ExEventObjectType,
                        0,
                        &Object,
                        0LL);
                *a3 = Object;
                if ( Acl >= 0 )
                  Acl = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      Acl = -1073741670;
    }
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  return (unsigned int)Acl;
}
