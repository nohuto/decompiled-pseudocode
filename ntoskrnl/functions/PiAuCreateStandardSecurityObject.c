__int64 __fastcall PiAuCreateStandardSecurityObject(PSID *a1)
{
  ACL *v2; // rdi
  void *v3; // r14
  unsigned int v4; // r13d
  PSID *v5; // r12
  unsigned int *v6; // r15
  int Acl; // ebx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // r13
  __int64 v12; // r8
  ULONG v13; // ebx
  PVOID *v14; // rdx
  __int64 v15; // rax
  ACL *Pool2; // rax
  unsigned int v17; // r15d
  PSID *v18; // r12
  ULONG v19; // eax
  void *v20; // rax
  PVOID *v21; // rsi
  ULONG BufferLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-A0h]
  PVOID v26[22]; // [rsp+78h] [rbp-90h] BYREF

  LOWORD(BufferLength[1]) = 1280;
  BufferLength[0] = 0;
  v25 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  memset(v26, 0, sizeof(v26));
  v4 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v5 = v26;
  v6 = (unsigned int *)PiAuSwDeviceCreateSidSubAuthorities;
  do
  {
    Acl = PiAuAllocateAndInitializeSid(&v26[v4], (struct _SID_IDENTIFIER_AUTHORITY *)BufferLength, *v6);
    if ( Acl < 0 )
      goto LABEL_42;
    v8 = *(_QWORD *)SecurityDescriptor;
    v9 = 0LL;
    if ( *v6 )
    {
      v10 = *v5;
      do
      {
        v10[v9 + 2] = *((_DWORD *)PiAuSwDeviceCreateSidSubAuthorities + v8 + v9 + 1);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *v6 );
    }
    if ( !RtlValidSid(*v5) )
    {
      Acl = -1073741595;
LABEL_42:
      v11 = 22LL;
      goto LABEL_30;
    }
    ++v4;
    v6 += 7;
    *(_QWORD *)SecurityDescriptor = v8 + 7;
    ++v5;
  }
  while ( v4 < 0x16 );
  v11 = 22LL;
  v12 = 22LL;
  v13 = 4
      * (*((unsigned __int8 *)*a1 + 1)
       + *((unsigned __int8 *)a1[5] + 1)
       + *((unsigned __int8 *)a1[4] + 1)
       + *((unsigned __int8 *)a1[3] + 1)
       + *((unsigned __int8 *)a1[2] + 1)
       + *((unsigned __int8 *)a1[6] + 1))
      + 104;
  v14 = v26;
  do
  {
    v15 = (__int64)*v14++;
    v13 += 4 * *(unsigned __int8 *)(v15 + 1) + 16;
    --v12;
  }
  while ( v12 );
  Pool2 = (ACL *)ExAllocatePool2(256LL, v13, 0x20207050u);
  v2 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v13, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x201E7u, a1[2]);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessDeniedAceEx((__int64)v2, 2u, 0, 983551, (unsigned __int8 *)a1[3]);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0xF01FFu, *a1);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x20125u, a1[4]);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[5]);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[6]);
                if ( Acl >= 0 )
                {
                  v17 = 0;
                  v18 = v26;
                  while ( 1 )
                  {
                    Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x80u, *v18);
                    if ( Acl < 0 )
                      break;
                    ++v17;
                    ++v18;
                    if ( v17 >= 0x16 )
                    {
                      Acl = RtlCreateSecurityDescriptor(&SecurityDescriptor[8], 1u);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(&SecurityDescriptor[8], 1u, v2, 0);
                        if ( Acl >= 0 )
                        {
                          Acl = RtlSetOwnerSecurityDescriptor(&SecurityDescriptor[8], *a1, 0);
                          if ( Acl >= 0 )
                          {
                            Acl = RtlSetGroupSecurityDescriptor(&SecurityDescriptor[8], *a1, 0);
                            if ( Acl >= 0 )
                            {
                              if ( RtlValidSecurityDescriptor(&SecurityDescriptor[8])
                                && (v19 = RtlLengthSecurityDescriptor(&SecurityDescriptor[8]),
                                    BufferLength[0] = v19,
                                    v19 >= 0x28) )
                              {
                                v20 = (void *)ExAllocatePool2(256LL, v19, 0x20207050u);
                                v3 = v20;
                                if ( !v20 )
                                  goto LABEL_39;
                                Acl = RtlAbsoluteToSelfRelativeSD(&SecurityDescriptor[8], v20, BufferLength);
                                if ( Acl >= 0 )
                                {
                                  PiAuSecurityObject = v3;
                                  v3 = 0LL;
                                }
                              }
                              else
                              {
                                Acl = -1073741595;
                              }
                            }
                          }
                        }
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
LABEL_39:
    Acl = -1073741670;
  }
LABEL_30:
  v21 = v26;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag(*v21, 0);
    ++v21;
    --v11;
  }
  while ( v11 );
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)Acl;
}
