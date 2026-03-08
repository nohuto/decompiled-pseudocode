/*
 * XREFs of ViFaultsIsTagTarget @ 0x140AD3B9C
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140AD2EC8 (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x140462BFE (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x140AD3B50 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int IsTagPresentInList; // ecx

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(v2);
    if ( IsTagPresentInList )
      ++dword_140D707B8;
    else
      ++dword_140D707B4;
  }
  return IsTagPresentInList;
}
