/*
 * XREFs of IoDeleteDriver @ 0x1409443B0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x140791C40 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140854C60 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
