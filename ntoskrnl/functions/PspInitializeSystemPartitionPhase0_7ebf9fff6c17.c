__int64 PspInitializeSystemPartitionPhase0()
{
  int Acl; // ebx
  ULONG v1; // ebx
  ACL *Pool2; // rax
  ACL *v3; // rdi
  _QWORD v5[2]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  int v8[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+70h] [rbp+27h]
  _QWORD *v10; // [rsp+78h] [rbp+2Fh]
  int v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+84h] [rbp+3Bh]
  _OWORD *v13; // [rsp+88h] [rbp+3Fh]
  __int64 v14; // [rsp+90h] [rbp+47h]

  v5[0] = 4194366LL;
  v12 = 0;
  v8[1] = 0;
  v7 = 0LL;
  v5[1] = L"\\KernelObjects\\MemoryPartition0";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v1 = 4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 28;
    Pool2 = (ACL *)ExAllocatePool2(256LL, v1, 0x6C636144u);
    v3 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v1, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0003u, SeAliasAdminsSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            v9 = 0LL;
            v14 = 0LL;
            v10 = v5;
            v13 = SecurityDescriptor;
            v8[0] = 48;
            v11 = 512;
            Acl = PsCreatePartition(0LL, 0LL, 2031619, (int)v8, 0, 1);
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
