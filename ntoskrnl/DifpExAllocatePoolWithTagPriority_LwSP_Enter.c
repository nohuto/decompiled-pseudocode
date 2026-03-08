/*
 * XREFs of DifpExAllocatePoolWithTagPriority_LwSP_Enter @ 0x140AE4B40
 * Callers:
 *     <none>
 * Callees:
 *     DifpLwSPProcessPrePoolAlloc @ 0x140AE4BEC (DifpLwSPProcessPrePoolAlloc.c)
 */

__int64 __fastcall DifpExAllocatePoolWithTagPriority_LwSP_Enter(__int64 a1)
{
  return DifpLwSPProcessPrePoolAlloc(*(unsigned int *)(a1 + 36), *(_QWORD *)(a1 + 40));
}
