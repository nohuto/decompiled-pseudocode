/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C0073088
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0072A60 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0073BB0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxRedrawHungWindow @ 0x1C02412D4 (xxxRedrawHungWindow.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C00730A0 (PhysicalToLogicalInPlaceRgnWorker.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, __int64 a2)
{
  return PhysicalToLogicalInPlaceRgnWorker(a1, a2, 0LL);
}
