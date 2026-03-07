PVOID __fastcall DifMmAllocateContiguousMemorySpecifyCacheWrapper(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r15
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  PVOID result; // rax
  __int64 *v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+40h] [rbp-30h]
  __int128 v22; // [rsp+50h] [rbp-20h]
  PVOID v23; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(325);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v11 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v15 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v15 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v20 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v15 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v12, v13);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v20 = 0LL;
LABEL_10:
  DWORD2(v20) = CacheType;
  *((_QWORD *)&v22 + 1) = NumberOfBytes;
  *(PHYSICAL_ADDRESS *)&v22 = LowestAcceptableAddress;
  *((PHYSICAL_ADDRESS *)&v21 + 1) = HighestAcceptableAddress;
  *(PHYSICAL_ADDRESS *)&v21 = BoundaryAddressMultiple;
  for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_17:
  result = MmAllocateContiguousMemorySpecifyCacheNode(
             NumberOfBytes,
             LowestAcceptableAddress,
             HighestAcceptableAddress,
             BoundaryAddressMultiple,
             CacheType,
             0x80000000);
  v23 = result;
  if ( v14 )
  {
    v19 = (__int64 *)v14[6];
    if ( v19 != v14 + 6 )
    {
      do
      {
        if ( v19 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v19 - 1))(&v20);
        v19 = (__int64 *)*v19;
      }
      while ( v19 != v14 + 6 );
      return v23;
    }
  }
  return result;
}
