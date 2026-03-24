/*
 * XREFs of ViIoCallbackSnapState @ 0x1409C9B84
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409C56C0 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x1409C9A8C (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 */

_DWORD *ViIoCallbackSnapState()
{
  _DWORD *result; // rax
  unsigned __int8 CurrentIrql; // cl

  result = ExAllocateFromNPagedLookasideList(&ViIoCallbackStateLookaside);
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_BYTE *)result = CurrentIrql;
    result[1] = KeGetCurrentThread()->WaitBlock[3].SpareLong;
  }
  return result;
}
