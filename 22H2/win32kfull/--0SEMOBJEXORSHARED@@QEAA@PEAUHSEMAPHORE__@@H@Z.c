/*
 * XREFs of ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C007AC44
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00190C0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     GreDwmGetSurfaceData @ 0x1C007AA30 (GreDwmGetSurfaceData.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0267774 (GreDwmGetRedirectionStyle.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027DAB0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreSetLWContentOwner @ 0x1C02D5534 (GreSetLWContentOwner.c)
 * Callees:
 *     <none>
 */

SEMOBJEXORSHARED *__fastcall SEMOBJEXORSHARED::SEMOBJEXORSHARED(SEMOBJEXORSHARED *this, HSEMAPHORE a2, int a3)
{
  *(_QWORD *)this = a2;
  if ( a3 == 1 )
  {
    GreAcquireSemaphoreSharedInternal(a2);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  }
  else
  {
    GreAcquireSemaphore(a2);
  }
  return this;
}
