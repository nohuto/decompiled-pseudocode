/*
 * XREFs of ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035D03C
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035C6F0 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035D0A4 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C035D0C0 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::Disable(DXGVMBUSCHANNEL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( *((_QWORD *)this + 2) && *((_BYTE *)this + 24) )
  {
    *((_WORD *)this + 12) = 0;
    *((_BYTE *)this + 26) = 0;
    ((void (*)(void))qword_1C013CE38)();
  }
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
