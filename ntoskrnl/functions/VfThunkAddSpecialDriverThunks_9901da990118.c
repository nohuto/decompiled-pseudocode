__int64 __fastcall VfThunkAddSpecialDriverThunks(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  _QWORD *ThunkTable; // rbx
  _QWORD *NextSpecialTable; // rdx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a2);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  if ( (*(_DWORD *)(a4 + 104) & 0x2000000) != 0 )
    ViThunkRecoverPristines(ThunkTable);
  NextSpecialTable = (_QWORD *)ViThunkFindNextSpecialTable(&v15, 1LL);
  if ( !NextSpecialTable )
  {
    Pool2 = ExAllocatePool2(256LL, 0x28uLL, 0x74566D4Du);
    NextSpecialTable = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
      return 3221225626LL;
    }
    *(_QWORD *)(Pool2 + 16) = a1;
    v10 = (_QWORD *)(Pool2 + 24);
    v10[1] = v10;
    *v10 = v10;
    v11 = ViVerifierDriverAddedSpecialThunkListHead;
    if ( *((PVOID **)ViVerifierDriverAddedSpecialThunkListHead + 1) != &ViVerifierDriverAddedSpecialThunkListHead )
LABEL_11:
      __fastfail(3u);
    ++ViVerifierSpecialThunkTables;
    *NextSpecialTable = ViVerifierDriverAddedSpecialThunkListHead;
    NextSpecialTable[1] = &ViVerifierDriverAddedSpecialThunkListHead;
    v11[1] = NextSpecialTable;
    ViVerifierDriverAddedSpecialThunkListHead = NextSpecialTable;
  }
  VfThunksExtended = 1;
  _InterlockedOr(v14, 0);
  v12 = (_QWORD *)NextSpecialTable[4];
  v13 = NextSpecialTable + 3;
  ++ViActiveVerifierThunks;
  if ( (_QWORD *)*v12 != v13 )
    goto LABEL_11;
  *ThunkTable = v13;
  ThunkTable[1] = v12;
  *v12 = ThunkTable;
  v13[1] = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
