/*
 * XREFs of PspInitializeSystemPartitionPhase0 @ 0x140A6DD90
 * Callers:
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140660500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140660570 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140676BE0 (RtlAddAccessAllowedAce.c)
 *     PspAllocatePartition @ 0x1407CC2B4 (PspAllocatePartition.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 PspInitializeSystemPartitionPhase0()
{
  int Acl; // ebx
  ULONG v1; // ebx
  ACL *PoolWithTag; // rax
  ACL *v3; // rdi
  _QWORD v5[2]; // [rsp+40h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v7; // [rsp+70h] [rbp+17h]
  _DWORD v8[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+80h] [rbp+27h]
  _QWORD *v10; // [rsp+88h] [rbp+2Fh]
  int v11; // [rsp+90h] [rbp+37h]
  int v12; // [rsp+94h] [rbp+3Bh]
  _OWORD *v13; // [rsp+98h] [rbp+3Fh]
  __int64 v14; // [rsp+A0h] [rbp+47h]

  v8[1] = 0;
  v12 = 0;
  v7 = 0LL;
  v5[0] = 4194366LL;
  v5[1] = L"\\KernelObjects\\MemoryPartition0";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v1 = 4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 28;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v1, 0x6C636144u);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v1, 2u);
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
            v8[0] = 48;
            v13 = SecurityDescriptor;
            v11 = 512;
            Acl = PspAllocatePartition((__int64)v8, 0x1F0003u, 0, 0LL, 1, &PspSystemPartition, 0LL);
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
