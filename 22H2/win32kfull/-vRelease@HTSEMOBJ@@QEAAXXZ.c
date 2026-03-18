/*
 * XREFs of ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C00563B8
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00551B0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02DE8E8 (--1HTSEMOBJ@@QEAA@XZ.c)
 *     EngHTBlt @ 0x1C02DECB0 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall HTSEMOBJ::vRelease(HTSEMOBJ *this)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  if ( *(_DWORD *)this )
  {
    v1 = Gre::Base::Globals(this);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemHT");
    GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 17));
  }
}
