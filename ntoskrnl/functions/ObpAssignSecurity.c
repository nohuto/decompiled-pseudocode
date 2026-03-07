__int64 __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, void *a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v9; // r12d
  __int64 v10; // rdx
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // [rsp+40h] [rbp-30h]
  PVOID P; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+60h] [rbp-10h] BYREF
  int v20; // [rsp+A0h] [rbp+30h] BYREF

  v18 = 0LL;
  v20 = 0;
  SecurityDescriptor[0] = 0LL;
  v9 = a2;
  P = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  LODWORD(v18) = 8;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, v10, a2, &v20, &v18);
  if ( (int)result >= 0 )
  {
    v13 = a5 | v20;
    if ( !a6
      || (result = SeAssignSecurityEx2(
                     0,
                     *(_QWORD *)(a1 + 64),
                     (int)&P,
                     0LL,
                     a4 == ObpDirectoryObjectType,
                     0,
                     0LL,
                     a1 + 32,
                     (__int64)&a4->TypeInfo.GenericMapping),
          (int)result >= 0) )
    {
      LODWORD(v14) = (_DWORD)P;
      if ( !P )
        v14 = *(_QWORD *)(a1 + 64);
      v15 = SeAssignSecurityEx2(
              v9,
              v14,
              (int)SecurityDescriptor,
              0LL,
              a4 == ObpDirectoryObjectType,
              v13,
              &v18,
              a1 + 32,
              (__int64)&a4->TypeInfo.GenericMapping);
      if ( v15 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      else
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
        v15 = a4->TypeInfo.SecurityProcedure(
                a3,
                AssignSecurityDescriptor,
                0LL,
                SecurityDescriptor[0],
                0LL,
                0LL,
                PagedPool,
                &a4->TypeInfo.GenericMapping,
                v16);
        if ( v15 < 0 )
          SeDeassignSecurity(SecurityDescriptor);
      }
      return (unsigned int)v15;
    }
  }
  return result;
}
