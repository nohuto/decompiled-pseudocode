/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1C01D2910
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00270F0 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(_DWORD *a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int result; // eax
  unsigned int v8; // eax

  v4 = *(_QWORD *)a1 & 0x8000000000000000uLL;
  if ( v4 != (*(_QWORD *)a2 & 0x8000000000000000uLL) )
  {
    if ( v4 )
      return -1;
    return 1;
  }
  v5 = a1[69];
  if ( v5 > a2[69] )
    return 1;
  if ( v5 < a2[69] )
    return -1;
  v6 = a1[7];
  if ( v6 > a2[7] )
    return 1;
  if ( v6 < a2[7] )
    return -1;
  result = memcmp(a1 + 4, a2 + 4, 8uLL);
  if ( !result )
  {
    v8 = a1[6];
    if ( v8 <= a2[6] )
      return -(v8 < a2[6]);
    return 1;
  }
  return result;
}
