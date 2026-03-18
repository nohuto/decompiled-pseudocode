/*
 * XREFs of PsReleaseSiloHardReference @ 0x140353F50
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402BB7E0 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x140353F10 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140767E50 (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x140353F7C (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
