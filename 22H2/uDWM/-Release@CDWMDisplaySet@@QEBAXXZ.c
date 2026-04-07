/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180038B98
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003720C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180037788 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800870B8 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x180038BC0 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this, unsigned int a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      CDWMDisplaySet::`scalar deleting destructor'(this, a2);
  }
}
