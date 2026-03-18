/*
 * XREFs of VmpProcessContextCleanup @ 0x1409DA55C
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     VmpProcessContextSetup @ 0x1409DA570 (VmpProcessContextSetup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessContextCleanup(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  if ( result )
    NT_ASSERT("ReadNoFence64(&ProcessContext->PreallocateForRangeCreateCount) == 0");
  return result;
}
