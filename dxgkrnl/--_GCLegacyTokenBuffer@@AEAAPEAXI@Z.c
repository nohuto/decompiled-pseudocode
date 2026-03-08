/*
 * XREFs of ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0017554
 * Callers:
 *     ?Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z @ 0x1C0012450 (-Retire@CCompositionFrame@@UEAAXAEBUDXGI_FRAME_STATISTICS@@0@Z.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00174D8 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0017BA8 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0018C10 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

CLegacyTokenBuffer *__fastcall CLegacyTokenBuffer::`scalar deleting destructor'(CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer::Reset(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
