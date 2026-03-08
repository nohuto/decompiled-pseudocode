/*
 * XREFs of ExpWnfRegisterPermanentName @ 0x140799310
 * Callers:
 *     NtCreateWnfStateName @ 0x14071BBD0 (NtCreateWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14071C500 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14071C674 (ExpWnfComposeValueName.c)
 *     RtlLengthSecurityDescriptor @ 0x14071C8F0 (RtlLengthSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfRegisterPermanentName(unsigned __int64 a1, __int64 a2)
{
  NTSTATUS NameStoreRegistryRoot; // ebx
  ULONG v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  ULONG DataSize; // ebp
  char *Pool2; // rax
  char *Data; // rdi
  _OWORD *v11; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v15;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v5 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 16));
    v6 = v5;
    v7 = v5 + 20;
    if ( !*(_QWORD *)(a2 + 8) )
      v7 = v5 + 4;
    DataSize = v7;
    Pool2 = (char *)ExAllocatePool2(256LL, v7, 543583831LL);
    Data = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, *(const void **)(a2 + 16), (unsigned int)v6);
      *(_DWORD *)&Data[v6] = *(_DWORD *)a2;
      v11 = *(_OWORD **)(a2 + 8);
      if ( v11 )
        *(_OWORD *)&Data[v6 + 4] = *v11;
      NameStoreRegistryRoot = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
      ExFreePoolWithTag(Data, 0x20666E57u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStoreRegistryRoot;
}
