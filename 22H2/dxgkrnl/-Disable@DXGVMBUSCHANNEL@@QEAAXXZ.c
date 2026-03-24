/*
 * XREFs of ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B32F8
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C02B30E8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B58E8 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z @ 0x1C02B5904 (-Enable@DXGVMBUSCHANNEL@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGVMBUSCHANNEL::Disable(DXGVMBUSCHANNEL *this)
{
  __int64 v2; // rdx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v3, (DXGVMBUSCHANNEL *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v3);
  if ( *((_QWORD *)this + 2) && *((_BYTE *)this + 24) )
  {
    *((_WORD *)this + 12) = 0;
    *((_BYTE *)this + 26) = 0;
    ((void (*)(void))qword_1C00B4328)();
  }
  if ( v3[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v3, v2);
}
