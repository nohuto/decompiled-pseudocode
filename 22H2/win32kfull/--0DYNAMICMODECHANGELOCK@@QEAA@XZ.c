/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D3640
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D53A0 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGELOCK *__fastcall DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx

  v2 = Gre::Base::Globals(this);
  GreAcquireSemaphore(*((_QWORD *)v2 + 10));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v2 + 10), 1LL);
  return this;
}
