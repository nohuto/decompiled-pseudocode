/*
 * XREFs of PspDetachSession @ 0x140776B14
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 */

LONG_PTR __fastcall PspDetachSession(PVOID Object, $115DCDF994C6370D29323EAB0E0C9502 *a2)
{
  MmDetachSession((__int64)Object, a2);
  return ObfDereferenceObject(Object);
}
