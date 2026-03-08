/*
 * XREFs of ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C02D533C
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 *     ?pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z @ 0x1C02D7070 (-pConvertDfbSurfaceToDibNKAPC@@YAXPEAX00@Z.c)
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
