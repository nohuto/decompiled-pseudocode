/*
 * XREFs of ObpGetSilosRootDirectory @ 0x1409809DC
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     RtlLengthSid @ 0x140347A80 (RtlLengthSid.c)
 *     ZwCreateDirectoryObject @ 0x1403FAF00 (ZwCreateDirectoryObject.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D92C0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406D9330 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ObpGetSilosRootDirectory(PHANDLE DirectoryHandle)
{
  NTSTATUS result; // eax
  ULONG v3; // ebx
  ULONG v4; // ebx
  ACL *PoolWithTag; // rax
  ACL *v6; // rdi
  int Acl; // ebx
  _OWORD SecurityDescriptor[2]; // [rsp+38h] [rbp-9h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+1Fh] BYREF

  v9 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v3 = RtlLengthSid(SeWorldSid);
    v4 = RtlLengthSid(SeLocalSystemSid) + 32 + v3;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x6C636144u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v4, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v6, 2u, 0, 131075, (unsigned __int8 *)SeWorldSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v6, 2u, 0, 983055, (unsigned __int8 *)SeLocalSystemSid, 0);
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
