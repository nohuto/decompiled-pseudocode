/*
 * XREFs of VfThunkAddDriverThunks @ 0x140AD7F7C
 * Callers:
 *     MmAddVerifierThunks @ 0x140A2A850 (MmAddVerifierThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x140AC773C (VfDriverLock.c)
 *     ViThunkCreateThunkTable @ 0x140AD8784 (ViThunkCreateThunkTable.c)
 */

__int64 __fastcall VfThunkAddDriverThunks(void *a1)
{
  _QWORD *ThunkTable; // rbx
  _QWORD *v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (VfRuleClasses & 0x800000000LL) != 0 && (VfRuleClasses & 0x400000) != 0 )
    return 3221225659LL;
  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a1);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  VfThunksExtended = 1;
  _InterlockedOr(v4, 0);
  v3 = (_QWORD *)*((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1);
  ++ViActiveVerifierThunks;
  if ( **((__int128 ***)&ViVerifierDriverAddedThunkListHead + 1) != &ViVerifierDriverAddedThunkListHead )
    __fastfail(3u);
  *ThunkTable = &ViVerifierDriverAddedThunkListHead;
  ThunkTable[1] = v3;
  *v3 = ThunkTable;
  *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
