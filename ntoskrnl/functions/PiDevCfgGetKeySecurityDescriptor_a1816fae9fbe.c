__int64 __fastcall PiDevCfgGetKeySecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  char v2; // r13
  ACL *v4; // r15
  void *v5; // rsi
  NTSTATUS v6; // eax
  int GroupSecurityDescriptor; // ebx
  ULONG v9; // ebx
  _BYTE *Pool2; // rdi
  ULONG v11; // r14d
  NTSTATUS v12; // eax
  PACL v13; // r14
  ULONG v14; // r12d
  ULONG v15; // ebx
  ACL *v16; // rax
  ULONG v17; // eax
  void *v18; // rax
  BOOLEAN DaclPresent; // [rsp+30h] [rbp-79h] BYREF
  BOOLEAN GroupDefaulted[3]; // [rsp+31h] [rbp-78h] BYREF
  ULONG LengthNeeded; // [rsp+34h] [rbp-75h] BYREF
  PSID Group; // [rsp+38h] [rbp-71h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-69h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-61h] BYREF
  PVOID AceList; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-51h]
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v28; // [rsp+80h] [rbp-29h]
  _BYTE SecurityDescriptor[56]; // [rsp+88h] [rbp-21h] BYREF

  v2 = 0;
  v26 = a2;
  *a2 = 0LL;
  LengthNeeded = 0;
  v28 = 0LL;
  Group = 0LL;
  DaclPresent = 0;
  Dacl = 0LL;
  Ace = 0LL;
  AceList = 0LL;
  v4 = 0LL;
  memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
  v5 = 0LL;
  v6 = ZwQuerySecurityObject(Handle, 2u, SecurityDescriptor, 0x34u, &LengthNeeded);
  GroupSecurityDescriptor = v6;
  if ( v6 == -1073741789 )
    return (unsigned int)-1073741720;
  if ( v6 >= 0 )
  {
    GroupSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, GroupDefaulted);
    if ( GroupSecurityDescriptor >= 0 )
    {
      if ( !Group )
        return (unsigned int)-1073741722;
      if ( !RtlEqualSid(Group, PiDevCfgNullSid) )
        return (unsigned int)-1073741720;
      v9 = 240;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 240LL, 1667526736LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v11 = 240;
      while ( 1 )
      {
        v12 = ZwQuerySecurityObject(Handle, 4u, Pool2, v9, &LengthNeeded);
        GroupSecurityDescriptor = v12;
        if ( v12 != -1073741789 )
          break;
        if ( LengthNeeded <= v11 )
          goto LABEL_40;
        v9 = LengthNeeded;
        v11 = LengthNeeded;
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v11, 1667526736LL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
      }
      if ( v12 < 0 )
        goto LABEL_43;
      GroupSecurityDescriptor = RtlGetDaclSecurityDescriptor(Pool2, &DaclPresent, &Dacl, GroupDefaulted);
      if ( GroupSecurityDescriptor < 0 )
        goto LABEL_43;
      if ( DaclPresent && (v13 = Dacl) != 0LL )
      {
        v14 = 0;
        if ( Dacl->AceCount )
        {
          do
          {
            GroupSecurityDescriptor = RtlGetAce(v13, v14, &Ace);
            if ( GroupSecurityDescriptor < 0 )
              goto LABEL_43;
            if ( !*(_BYTE *)Ace
              && (*((_DWORD *)Ace + 1) & 0xF003F) == 0xF003F
              && RtlEqualSid((char *)Ace + 8, SeLocalSystemSid) )
            {
              v2 = 1;
              break;
            }
          }
          while ( ++v14 < v13->AceCount );
        }
        if ( v2 )
        {
          *v26 = Pool2;
          return (unsigned int)GroupSecurityDescriptor;
        }
        v15 = RtlLengthSid(SeLocalSystemSid) + v13->AclSize + 8;
        v16 = (ACL *)ExAllocatePool2(256LL, v15, 1667526736LL);
        v4 = v16;
        if ( !v16 )
          goto LABEL_39;
        GroupSecurityDescriptor = RtlCreateAcl(v16, v15, 2u);
        if ( GroupSecurityDescriptor >= 0 )
        {
          GroupSecurityDescriptor = RtlGetAce(v13, 0, &AceList);
          if ( GroupSecurityDescriptor >= 0 )
          {
            GroupSecurityDescriptor = RtlAddAce(v4, 2u, 0, AceList, v13->AclSize - 8);
            if ( GroupSecurityDescriptor >= 0 )
            {
              GroupSecurityDescriptor = RtlpAddKnownAce(
                                          (__int64)v4,
                                          2u,
                                          2,
                                          983103,
                                          (unsigned __int8 *)SeLocalSystemSid,
                                          0);
              if ( GroupSecurityDescriptor >= 0 )
              {
                GroupSecurityDescriptor = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
                if ( GroupSecurityDescriptor >= 0 )
                {
                  GroupSecurityDescriptor = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v4, 0);
                  if ( GroupSecurityDescriptor >= 0 )
                  {
                    if ( RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
                    {
                      v17 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
                      LODWORD(Group) = v17;
                      if ( v17 >= 0x28 )
                      {
                        v18 = (void *)ExAllocatePool2(256LL, v17, 1667526736LL);
                        v5 = v18;
                        if ( v18 )
                        {
                          GroupSecurityDescriptor = RtlAbsoluteToSelfRelativeSD(
                                                      AbsoluteSecurityDescriptor,
                                                      v18,
                                                      (PULONG)&Group);
                          if ( GroupSecurityDescriptor >= 0 )
                          {
                            *v26 = v5;
                            v5 = 0LL;
                          }
                          goto LABEL_43;
                        }
LABEL_39:
                        GroupSecurityDescriptor = -1073741670;
                        goto LABEL_43;
                      }
                    }
LABEL_40:
                    GroupSecurityDescriptor = -1073741595;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        GroupSecurityDescriptor = -1073741275;
      }
LABEL_43:
      if ( Pool2 != SecurityDescriptor )
        ExFreePoolWithTag(Pool2, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  return (unsigned int)GroupSecurityDescriptor;
}
