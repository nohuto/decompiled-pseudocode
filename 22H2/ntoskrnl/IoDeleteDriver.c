/*
 * XREFs of IoDeleteDriver @ 0x1409473D0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140B42004 (IopInitializePlugPlayServices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObMakeTemporaryObject @ 0x1407E1210 (ObMakeTemporaryObject.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140858898 (EtwTiLogDriverObjectUnLoad.c)
 */

LONG_PTR __fastcall IoDeleteDriver(unsigned __int16 *Object)
{
  EtwTiLogDriverObjectUnLoad(Object + 28);
  ObMakeTemporaryObject(Object);
  return ObfDereferenceObject(Object);
}
