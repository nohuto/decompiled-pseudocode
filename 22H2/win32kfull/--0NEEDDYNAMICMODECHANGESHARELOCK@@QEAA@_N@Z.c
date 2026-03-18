/*
 * XREFs of ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@_N@Z @ 0x1C0087BD0
 * Callers:
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z @ 0x1C0086C68 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0086DD4 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0087828 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 * Callees:
 *     <none>
 */

NEEDDYNAMICMODECHANGESHARELOCK *__fastcall NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        char a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx

  *(_BYTE *)this = a2;
  if ( a2 )
  {
    v3 = Gre::Base::Globals(this);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v3 + 10));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v3 + 10));
  }
  return this;
}
