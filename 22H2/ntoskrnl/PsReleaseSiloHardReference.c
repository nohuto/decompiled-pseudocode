/*
 * XREFs of PsReleaseSiloHardReference @ 0x140200960
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1402524EC (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x140310D38 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020098C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
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
