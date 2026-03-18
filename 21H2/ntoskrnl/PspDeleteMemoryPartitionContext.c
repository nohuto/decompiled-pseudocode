/*
 * XREFs of PspDeleteMemoryPartitionContext @ 0x14066EFCC
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteMemoryPartitionContext(void *a1)
{
  LONG_PTR result; // rax

  if ( a1 )
    return ObfDereferenceObjectWithTag(a1, 0x624A7350u);
  return result;
}
