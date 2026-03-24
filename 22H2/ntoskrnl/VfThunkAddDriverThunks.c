/*
 * XREFs of VfThunkAddDriverThunks @ 0x1409D8840
 * Callers:
 *     MmAddVerifierThunks @ 0x1408C6600 (MmAddVerifierThunks.c)
 * Callees:
 *     KeReleaseMutex @ 0x14035F9C0 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409C25C8 (VfDriverLock.c)
 *     ViThunkCreateThunkTable @ 0x1409D8F94 (ViThunkCreateThunkTable.c)
 */

__int64 __fastcall VfThunkAddDriverThunks(void *a1)
{
  _QWORD *ThunkTable; // rbx
  _QWORD *v3; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  ThunkTable = (_QWORD *)ViThunkCreateThunkTable(a1);
  if ( !ThunkTable )
    return 3221225626LL;
  VfDriverLock();
  VfThunksExtended = 1;
  _InterlockedOr(v4, 0);
  v3 = (_QWORD *)qword_140C1D0F8;
  ++ViActiveVerifierThunks;
  if ( *(__int64 **)qword_140C1D0F8 != &ViVerifierDriverAddedThunkListHead )
    __fastfail(3u);
  *ThunkTable = &ViVerifierDriverAddedThunkListHead;
  ThunkTable[1] = v3;
  *v3 = ThunkTable;
  qword_140C1D0F8 = (__int64)ThunkTable;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return 0LL;
}
