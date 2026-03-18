/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x1C007FE10
 * Callers:
 *     rimFindReferencedRimObj @ 0x1C0006280 (rimFindReferencedRimObj.c)
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C007FD34 (rimCheckForExplicitRimConflictInProcess.c)
 *     RIMIDECreateHIDDesc @ 0x1C019399C (RIMIDECreateHIDDesc.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C0197018 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsExplicitRimUsagesMatchingUsages(__int64 a1, __int16 a2, __int16 a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rax
  __int64 v5; // r9

  v3 = *(_DWORD *)(a1 + 88);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  v5 = *(_QWORD *)(a1 + 96);
  while ( *(_WORD *)(v5 + 4 * v4) != a3 || *(_WORD *)(v5 + 4 * v4 + 2) != a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  return 1LL;
}
