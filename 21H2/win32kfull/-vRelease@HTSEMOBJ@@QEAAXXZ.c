/*
 * XREFs of ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C0092EC8
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0091710 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02BFE18 (--1HTSEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall HTSEMOBJ::vRelease(HTSEMOBJ *this)
{
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
    GreReleaseSemaphoreInternal(ghsemHT);
  }
}
