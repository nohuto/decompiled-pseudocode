/*
 * XREFs of ObpGetSilosRootDirectory @ 0x140A71340
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     ZwCreateDirectoryObject @ 0x140413850 (ZwCreateDirectoryObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ObpGetSilosRootDirectory(PHANDLE DirectoryHandle)
{
  NTSTATUS result; // eax
  ULONG v3; // ebx
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  int Acl; // ebx
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, 44);
  v9 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v3 = RtlLengthSid(SeWorldSid);
    v4 = RtlLengthSid(SeLocalSystemSid) + 32 + v3;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v4, 1818452292LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v4, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((__int64)v6, 2u, 0, 131075, (unsigned __int8 *)SeWorldSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((__int64)v6, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
            if ( Acl >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = (PUNICODE_STRING)&ObpSilosDirectoryName;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
              ObjectAttributes.Attributes = 208;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              Acl = ZwCreateDirectoryObject(DirectoryHandle, 0xF000Fu, &ObjectAttributes);
              if ( Acl == 0x40000000 )
                Acl = 0;
            }
          }
        }
      }
      ExFreePoolWithTag(v6, 0x6C636144u);
      return Acl;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
