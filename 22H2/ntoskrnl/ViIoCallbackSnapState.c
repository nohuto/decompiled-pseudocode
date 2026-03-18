/*
 * XREFs of ViIoCallbackSnapState @ 0x140ACC3D4
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140AC2B60 (IovpLocalCompletionRoutine.c)
 *     VfFastIoSnapState @ 0x140ACC2DC (VfFastIoSnapState.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402B6B00 (ExAllocateFromNPagedLookasideList.c)
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
