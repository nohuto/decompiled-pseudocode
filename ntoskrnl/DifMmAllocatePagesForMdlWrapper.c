PMDL __fastcall DifMmAllocatePagesForMdlWrapper(
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        PHYSICAL_ADDRESS SkipBytes,
        SIZE_T TotalBytes)
{
  __int64 *APIThunkContextById; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r15
  int v14; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // r14
  PMDL result; // rax
  __int64 *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int128 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+78h] [rbp+28h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(329);
  v13 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v10 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
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
  *(PHYSICAL_ADDRESS *)&v21 = LowAddress;
  *((PHYSICAL_ADDRESS *)&v20 + 1) = HighAddress;
  *(PHYSICAL_ADDRESS *)&v20 = SkipBytes;
  *((_QWORD *)&v19 + 1) = TotalBytes;
  for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v19);
  }
LABEL_17:
  result = MmAllocatePagesForMdl(LowAddress, HighAddress, SkipBytes, TotalBytes);
  *((_QWORD *)&v21 + 1) = result;
  if ( v13 )
  {
    v18 = (__int64 *)v13[6];
    if ( v18 != v13 + 6 )
    {
      do
      {
        if ( v18 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v18 - 1))(&v19);
        v18 = (__int64 *)*v18;
      }
      while ( v18 != v13 + 6 );
      return (PMDL)*((_QWORD *)&v21 + 1);
    }
  }
  return result;
}
