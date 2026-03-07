__int64 __fastcall VfThunkApplyDriverAddedThunks(__int64 a1)
{
  __int64 v2; // rbp
  unsigned int v3; // r12d
  void *Pool2; // rdi
  __int64 result; // rax
  int v6; // edx
  _QWORD *v7; // rsi
  unsigned int v8; // r14d
  __int64 *AllSpecialTables; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 DriverImportEntry; // rdx
  int v14; // r11d
  __int64 v15; // rcx
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = 0;
  v2 = 0LL;
  v3 = 0;
  Pool2 = (void *)ExAllocatePool2(64LL, 24LL * (unsigned int)VfNumberOfClassDriverThunks, 0x6D4D7644u);
  if ( !Pool2 )
    return 3221225495LL;
  memset(Pool2, 0, 24LL * (unsigned int)VfNumberOfClassDriverThunks);
  LOBYTE(v6) = 1;
  result = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v6, 12, (int)&v17);
  v7 = (_QWORD *)result;
  if ( result )
  {
    v8 = v17 >> 3;
    AllSpecialTables = (__int64 *)ViThunkFindAllSpecialTables(result, v17 >> 3);
    if ( !v8 )
      goto LABEL_15;
    while ( 1 )
    {
      if ( AllSpecialTables )
      {
        v10 = *AllSpecialTables;
        LODWORD(v11) = 0;
        if ( *AllSpecialTables )
          break;
      }
LABEL_10:
      DriverImportEntry = ViThunkFindDriverImportEntry(&ViVerifierDriverAddedThunkListHead, *v7);
      if ( DriverImportEntry )
        goto LABEL_11;
LABEL_12:
      ++v7;
      if ( v14 + 1 >= v8 )
      {
        if ( (_DWORD)v2 )
          v3 = MmApplyVerifierToRunningImage(a1, Pool2, (unsigned int)v2);
LABEL_15:
        if ( AllSpecialTables )
          ExFreePoolWithTag(AllSpecialTables, 0);
        ExFreePoolWithTag(Pool2, 0);
        return v3;
      }
    }
    v12 = *v7;
    while ( 1 )
    {
      DriverImportEntry = ViThunkFindDriverImportEntry(v10 + 24, v12);
      if ( DriverImportEntry )
        break;
      v11 = (unsigned int)(v11 + 1);
      v10 = AllSpecialTables[v11];
      if ( !v10 )
        goto LABEL_10;
    }
LABEL_11:
    v15 = 3 * v2;
    v2 = (unsigned int)(v2 + 1);
    *((_DWORD *)Pool2 + 2 * v15) = v14;
    *((_QWORD *)Pool2 + v15 + 1) = DriverImportEntry;
    goto LABEL_12;
  }
  return result;
}
