/*
 * XREFs of PsReleaseSiloHardReference @ 0x140294300
 * Callers:
 *     IopCloseFileObjectExtension @ 0x140293FAC (IopCloseFileObjectExtension.c)
 *     IopDeleteFileObjectExtension @ 0x140298CFC (IopDeleteFileObjectExtension.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14029432C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
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
