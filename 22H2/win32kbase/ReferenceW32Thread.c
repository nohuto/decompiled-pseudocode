/*
 * XREFs of ReferenceW32Thread @ 0x1C008BB40
 * Callers:
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceW32Thread(__int64 a1)
{
  ObfReferenceObject(*(PVOID *)a1);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
}
