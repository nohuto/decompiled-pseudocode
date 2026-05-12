/*
 * XREFs of StorIsEventQueueEmpty @ 0x1C004C390
 * Callers:
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004A1DC (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C004ABD4 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

char __fastcall StorIsEventQueueEmpty(__int64 a1)
{
  unsigned int v1; // r8d
  int v2; // edx
  char result; // al
  _QWORD *i; // rcx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = 0;
  result = 1;
  if ( v1 )
  {
    for ( i = (_QWORD *)(a1 + 64); (_QWORD *)*i == i; i += 8 )
    {
      if ( ++v2 >= v1 )
        return result;
    }
    return 0;
  }
  return result;
}
