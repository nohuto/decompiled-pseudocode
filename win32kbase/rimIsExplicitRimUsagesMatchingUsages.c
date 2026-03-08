/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x1C00350D4
 * Callers:
 *     rimFindReferencedRimObj @ 0x1C0004BC0 (rimFindReferencedRimObj.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C0034FF8 (rimCheckForExplicitRimConflictInProcess.c)
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 *     RIMIDEIsCompatibleDevice @ 0x1C01C4D48 (RIMIDEIsCompatibleDevice.c)
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
