/*
 * XREFs of ?bInitPrivatePFT@@YAHXZ @ 0x1C0272AA0
 * Callers:
 *     GreAddFontResourceWInternal @ 0x1C010E924 (GreAddFontResourceWInternal.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C0115FE4 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     GreAddFontMemResourceEx @ 0x1C028A458 (GreAddFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0x1C012E25C (--0FHMEMOBJ@@QEAA@PEAPEAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 *     ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C012E318 (-pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 bInitPrivatePFT(void)
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v0 = 0;
  if ( gpPFTPrivate )
    v0 = 1;
  else
    gpPFTPrivate = (struct PFT **const)pAllocateAndInitializePFT(20);
  SEMOBJ::vUnlock((SEMOBJ *)&v2);
  return v0;
}
