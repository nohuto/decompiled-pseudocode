__int64 __fastcall ObpAllocateAndQuerySecurityDescriptorInfo(__int64 a1, ULONG a2, void *a3, _QWORD *a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64, ULONG *, __int64, ULONG *, PSECURITY_DESCRIPTOR, _DWORD, __int64, int); // rax
  int v11; // esi
  void *Pool2; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-20h]
  __int64 (__fastcall *v18)(__int64, __int64, ULONG *, __int64, ULONG *, PSECURITY_DESCRIPTOR, _DWORD, __int64, int); // [rsp+50h] [rbp-10h]
  ULONG Length; // [rsp+A0h] [rbp+40h] BYREF
  ULONG SecurityInformation; // [rsp+A8h] [rbp+48h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+B0h] [rbp+50h] BYREF

  ObjectsSecurityDescriptor = a3;
  SecurityInformation = a2;
  Length = 0;
  v6 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( a3 )
  {
    SeQuerySecurityDescriptorInfo(&SecurityInformation, 0LL, &Length, &ObjectsSecurityDescriptor);
    Pool2 = (void *)ExAllocatePool2(256LL, Length, 1901290063LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      v14 = SeQuerySecurityDescriptorInfo(&SecurityInformation, Pool2, &Length, &ObjectsSecurityDescriptor);
LABEL_11:
      v11 = v14;
      goto LABEL_4;
    }
    return 3221225626LL;
  }
  Length = ObpDefaultSecurityDescriptorLength;
  v7 = ExAllocatePool2(256LL, (unsigned int)ObpDefaultSecurityDescriptorLength, 1901290063LL);
  v8 = (void *)v7;
  if ( !v7 )
    return 3221225626LL;
  v9 = v7;
  v16 = *(_DWORD *)(v6 + 100);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, ULONG *, __int64, ULONG *, PSECURITY_DESCRIPTOR, _DWORD, __int64, int))(v6 + 152);
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(a1 - 8);
  v18 = v10;
  v11 = v10(a1, 1LL, &SecurityInformation, v9, &Length, (PSECURITY_DESCRIPTOR)(a1 - 8), v16, v6 + 76, 0);
  if ( v11 == -1073741789 )
  {
    ExFreePoolWithTag(v8, 0x7153624Fu);
    v15 = ExAllocatePool2(256LL, Length, 1901290063LL);
    v8 = (void *)v15;
    if ( v15 )
    {
      LOBYTE(v17) = 0;
      v14 = v18(
              a1,
              1LL,
              &SecurityInformation,
              v15,
              &Length,
              ObjectsSecurityDescriptor,
              *(_DWORD *)(v6 + 100),
              v6 + 76,
              v17);
      goto LABEL_11;
    }
    return 3221225626LL;
  }
LABEL_4:
  if ( v11 < 0 )
    ExFreePoolWithTag(v8, 0x7153624Fu);
  else
    *a4 = v8;
  return (unsigned int)v11;
}
