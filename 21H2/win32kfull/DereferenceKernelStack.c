/*
 * XREFs of DereferenceKernelStack @ 0x1C0116FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceKernelStack(PVOID Object)
{
  PsDereferenceKernelStack();
  return ObfDereferenceObject(Object);
}
