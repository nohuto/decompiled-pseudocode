/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C003284C
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00328E0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0033750 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0032864 (PhysicalToLogicalInPlaceRgnWorker.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, __int64 a2)
{
  return PhysicalToLogicalInPlaceRgnWorker(a1, a2, 0LL);
}
