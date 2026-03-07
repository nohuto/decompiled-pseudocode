NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  char *v2; // rbp
  unsigned __int8 *v3; // r12
  int v4; // r13d
  ULONG v5; // r15d
  NTSTATUS result; // eax
  _WORD *v7; // rsi
  NTSTATUS Acl; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  char *v11; // rdi
  char *v12; // rbx
  unsigned int v13; // ecx
  ULONG v14; // ebx
  ACL *Pool2; // rax
  ACL *v16; // rdi
  __int64 v17; // rdx
  ULONG AceListLength; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  int v24; // [rsp+70h] [rbp-38h]

  v23 = 0LL;
  v20 = 0LL;
  LOBYTE(v19) = 0;
  v2 = 0LL;
  v24 = 0;
  HIDWORD(v19) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v22 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = (unsigned __int8 *)Object[138];
  v4 = 8;
  v5 = 2;
  result = ObGetObjectSecurity(Object, &v20, (PBOOLEAN)&v19);
  v7 = v20;
  Acl = result;
  if ( result < 0 )
    goto LABEL_30;
  if ( !v20 )
    return result;
  v9 = *((_WORD *)v20 + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_20;
  if ( v9 >= 0 )
  {
    v11 = (char *)*((_QWORD *)v20 + 3);
  }
  else
  {
    v10 = *((unsigned int *)v20 + 3);
    if ( !(_DWORD)v10 )
      goto LABEL_20;
    v11 = (char *)v20 + v10;
  }
  if ( !v11 )
  {
LABEL_20:
    if ( v3 )
    {
      v14 = v4 + 4 * v3[1] + 16;
      Pool2 = (ACL *)ExAllocatePool2(256LL, v14, 1665230163LL);
      v16 = Pool2;
      if ( Pool2 )
      {
        Acl = RtlCreateAcl(Pool2, v14, v5);
        if ( Acl >= 0 )
        {
          if ( !v2 || (Acl = RtlAddAce(v16, v5, 0, v2, HIDWORD(v23) - 8), Acl >= 0) )
          {
            LOBYTE(AceListLength) = 20;
            Acl = RtlAddProcessTrustLabelAce(v16, 2LL, 0LL, v3, AceListLength, 131102, v19);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                LOBYTE(v17) = 1;
                Acl = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v17, v16, 0LL);
                if ( Acl >= 0 )
                {
                  WORD1(SecurityDescriptor[0]) |= v7[1] & 0x2830;
                  Acl = ObSetSecurityObjectByPointer(Object, 504LL, SecurityDescriptor);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v16, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    else
    {
      Acl = 0;
    }
    goto LABEL_30;
  }
  v2 = v11 + 8;
  v12 = v11 + 8;
  v13 = 0;
  if ( *((_WORD *)v11 + 2) )
  {
    while ( *v12 != 20 )
    {
      ++v13;
      v12 += *((unsigned __int16 *)v12 + 1);
      if ( v13 >= *((unsigned __int16 *)v11 + 2) )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    v12 = 0LL;
  }
  if ( v3 )
  {
    if ( v12 && RtlEqualSid(v12 + 8, v3) )
    {
      *((_DWORD *)v12 + 1) &= 0x2001Eu;
      goto LABEL_35;
    }
  }
  else if ( !v12 )
  {
LABEL_35:
    Acl = 0;
    goto LABEL_30;
  }
  Acl = RtlQueryInformationAcl(v11, &v23, 12LL);
  if ( Acl >= 0 )
  {
    v4 = HIDWORD(v23);
    Acl = RtlQueryInformationAcl(v11, (char *)&v19 + 4, 4LL);
    if ( Acl >= 0 )
    {
      v5 = HIDWORD(v19);
      if ( (unsigned __int8)(*v11 - 2) > 2u )
        goto LABEL_42;
      if ( !*((_WORD *)v11 + 2) )
      {
        Acl = -1073741811;
        goto LABEL_30;
      }
      if ( v2 >= &v11[*((unsigned __int16 *)v11 + 1)] )
      {
LABEL_42:
        Acl = -1073741811;
        goto LABEL_30;
      }
      goto LABEL_20;
    }
  }
LABEL_30:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v19);
  return Acl;
}
