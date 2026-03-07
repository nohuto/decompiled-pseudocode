PMDL __fastcall DifMmAllocatePagesForMdlExWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  unsigned __int128 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *APIThunkContextById; // r15
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  PMDL result; // rax
  __int64 *v18; // rbx
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  unsigned __int128 v21; // [rsp+50h] [rbp-20h]
  PMDL v22; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]

  v22 = 0LL;
  v19 = 0LL;
  v8 = __PAIR128__(LowAddress.QuadPart, HighAddress.QuadPart);
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(330);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v19 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v14 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v10, v9, v11, v12);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v19 = 0LL;
LABEL_10:
  *((_QWORD *)&v19 + 1) = __PAIR64__(CacheType, Flags);
  v21 = v8;
  *((PHYSICAL_ADDRESS *)&v20 + 1) = SkipBytes;
  *(_QWORD *)&v20 = TotalBytes;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_17:
  result = MmAllocatePagesForMdlEx(
             *(PHYSICAL_ADDRESS *)((char *)&v8 + 8),
             *(PHYSICAL_ADDRESS *)&v8,
             SkipBytes,
             TotalBytes,
             CacheType,
             Flags);
  v22 = result;
  if ( APIThunkContextById )
  {
    v18 = (__int64 *)APIThunkContextById[6];
    if ( v18 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v18 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v18 - 1))(&v19);
        v18 = (__int64 *)*v18;
      }
      while ( v18 != APIThunkContextById + 6 );
      return v22;
    }
  }
  return result;
}
