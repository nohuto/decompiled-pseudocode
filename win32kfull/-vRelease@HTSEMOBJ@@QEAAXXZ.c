/*
 * XREFs of ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1C001B2C8
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C001A0C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ??1HTSEMOBJ@@QEAA@XZ @ 0x1C02E0670 (--1HTSEMOBJ@@QEAA@XZ.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
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
