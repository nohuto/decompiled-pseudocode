/*
 * XREFs of DifMmMapIoSpaceWrapper @ 0x1405E50F0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpace @ 0x14029AAB0 (MmMapIoSpace.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

PVOID __fastcall DifMmMapIoSpaceWrapper(
        PHYSICAL_ADDRESS PhysicalAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  __int64 *APIThunkContextById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rsi
  int v12; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  PVOID result; // rax
  __int64 *v16; // rbx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  PVOID v19; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+68h] [rbp+18h]

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(343);
  v11 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v8 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v17 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v12 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v17 = 0LL;
LABEL_10:
  *((PHYSICAL_ADDRESS *)&v18 + 1) = PhysicalAddress;
  *(_QWORD *)&v18 = NumberOfBytes;
  DWORD2(v17) = CacheType;
  for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v17);
  }
LABEL_17:
  result = MmMapIoSpace(PhysicalAddress, NumberOfBytes, CacheType);
  v19 = result;
  if ( v11 )
  {
    v16 = (__int64 *)v11[6];
    if ( v16 != v11 + 6 )
    {
      do
      {
        if ( v16 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v16 - 1))(&v17);
        v16 = (__int64 *)*v16;
      }
      while ( v16 != v11 + 6 );
      return v19;
    }
  }
  return result;
}
