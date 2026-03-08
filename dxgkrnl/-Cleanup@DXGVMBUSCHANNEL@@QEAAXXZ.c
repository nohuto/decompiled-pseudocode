/*
 * XREFs of ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035C6F0
 * Callers:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035CF08 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C0361064 (--1DXGVMBUSCHANNEL@@UEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Disable@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C035D03C (-Disable@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C037BAA4 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::Cleanup(DXGVMBUSCHANNEL *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGVMBUSCHANNEL::Disable(this);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v2, (DXGVMBUSCHANNEL *)((char *)this + 120), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v2);
  if ( *((_QWORD *)this + 2) )
  {
    ((void (*)(void))qword_1C013CE18)();
    VmBusInterfaceDereference();
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v2[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v2);
}
