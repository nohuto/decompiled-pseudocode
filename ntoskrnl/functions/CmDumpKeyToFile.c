__int64 __fastcall CmDumpKeyToFile(__int64 a1, __int64 a2, void *a3, __int64 a4)
{
  char v5; // r14
  __int64 v6; // rsi
  char v7; // r12
  __int64 v9; // rbx
  char v10; // r15
  int IsKeyBodyEligibleForDump; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29[2]; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+80h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+20h] BYREF

  v31 = 0;
  v5 = 0;
  v30 = 0;
  v6 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v7 = a2;
  CmpLockRegistry(a1, a2, a3, a4);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 1;
  CmpLockKcbShared(v9);
  IsKeyBodyEligibleForDump = CmpIsKeyBodyEligibleForDump(a1, v9);
  if ( IsKeyBodyEligibleForDump >= 0 )
  {
    if ( *(_WORD *)(v9 + 66) )
    {
      CmpUnlockKcb(v9);
      CmpUnlockRegistry(v13, v12, v14, v15);
      LOBYTE(v16) = v7;
      return (unsigned int)CmSaveKey(a1, a3, 5LL, v16);
    }
    HvLockHiveFlusherExclusive(*(_QWORD *)(v9 + 32));
    v5 = 1;
    CmLockHiveSecurityShared(*(_QWORD *)(v9 + 32));
    IsKeyBodyEligibleForDump = CmpDoAccessCheckOnSubtree(*(_QWORD *)(v9 + 32), 3);
    CmUnlockHiveSecurity(*(_QWORD *)(v9 + 32));
    if ( IsKeyBodyEligibleForDump >= 0 )
    {
      v17 = HvAllocateOffsetArraysForHiveSnapshot(*(_QWORD *)(v9 + 32), &v30, v29, &v31);
      v6 = *(_QWORD *)v29;
      IsKeyBodyEligibleForDump = v17;
      if ( v17 >= 0 )
      {
        IsKeyBodyEligibleForDump = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v9 + 32), v18, *(_QWORD *)v29);
        if ( IsKeyBodyEligibleForDump >= 0 )
        {
          HvUnlockHiveFlusherExclusive(*(_QWORD *)(v9 + 32));
          v5 = 0;
          CmpUnlockKcb(v9);
          CmpUnlockRegistry(v20, v19, v21, v22);
          v10 = 0;
          IsKeyBodyEligibleForDump = CmpWriteOffsetArrayToFile(v23, v30, v6, v31, a3);
          if ( IsKeyBodyEligibleForDump >= 0 )
            IsKeyBodyEligibleForDump = 0;
        }
      }
    }
  }
  if ( v6 )
    CmpFreeOffsetArray((unsigned int)v30, v6);
  if ( v5 )
    HvUnlockHiveFlusherExclusive(*(_QWORD *)(v9 + 32));
  if ( v10 )
  {
    CmpUnlockKcb(v9);
    CmpUnlockRegistry(v25, v24, v26, v27);
  }
  return (unsigned int)IsKeyBodyEligibleForDump;
}
