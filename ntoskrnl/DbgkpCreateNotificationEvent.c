/*
 * XREFs of DbgkpCreateNotificationEvent @ 0x140857EAC
 * Callers:
 *     DbgkpInitializePhase1SiloState @ 0x14080FA00 (DbgkpInitializePhase1SiloState.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall DbgkpCreateNotificationEvent(UNICODE_STRING *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ULONG v8; // ebx
  ULONG v9; // edi
  ACL *Pool2; // rax
  ACL *v11; // rbx
  int Acl; // edi
  ACL *v13; // rcx
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  _OWORD Sid[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v20[3]; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&String2.Length = 2621478LL;
  v18 = 0LL;
  EventHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  String2.Buffer = L"lpacInstrumentation";
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlDeriveCapabilitySidsFromName(&String2, v20, Sid);
  if ( result >= 0 )
  {
    result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( result >= 0 )
    {
      v5 = RtlLengthSid(SeWorldSid);
      v6 = RtlLengthSid(SeLocalSystemSid) + v5;
      v7 = RtlLengthSid(SeLocalSid) + v6;
      v8 = RtlLengthSid(SeAllAppPackagesSid) + v7;
      v9 = v8 + RtlLengthSid(Sid) + 68;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 1818452292LL);
      v11 = Pool2;
      if ( !Pool2 )
        return -1073741670;
      Acl = RtlCreateAcl(Pool2, v9, 2u);
      v13 = v11;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v11, 2u, 0, 1179649, (unsigned __int8 *)SeLocalSid, 0);
        v13 = v11;
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v11, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
          v13 = v11;
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((__int64)v11, 2u, 0, 1179649, (unsigned __int8 *)Sid, 0);
            v13 = v11;
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((__int64)v11, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
              v13 = v11;
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((__int64)v11, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v11, 0);
                  if ( Acl >= 0 )
                  {
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 528;
                    ObjectAttributes.ObjectName = a1;
                    ObjectAttributes.SecurityQualityOfService = 0LL;
                    Acl = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
                    ExFreePoolWithTag(v11, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = ObpReferenceObjectByHandleWithTag(
                              (ULONG_PTR)EventHandle,
                              2,
                              (__int64)ExEventObjectType,
                              0,
                              0x6B676244u,
                              a2,
                              0LL,
                              0LL);
                      ZwClose(EventHandle);
                    }
                    return Acl;
                  }
                }
                v13 = v11;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      return Acl;
    }
  }
  return result;
}
