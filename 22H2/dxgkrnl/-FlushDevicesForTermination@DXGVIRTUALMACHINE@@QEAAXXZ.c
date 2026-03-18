/*
 * XREFs of ?FlushDevicesForTermination@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0344A18
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8AD0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ @ 0x1C0344910 (-FlushDevicesForTermination@DXGPROCESSVM@@QEAAXXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::FlushDevicesForTermination(DXGVIRTUALMACHINE *this)
{
  volatile signed __int32 *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *i; // rbx

  v1 = (volatile signed __int32 *)((char *)this + 128);
  v2 = (_QWORD **)((char *)this + 24);
  DXGPUSHLOCK::AcquireShared((DXGVIRTUALMACHINE *)((char *)this + 128));
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
    DXGPROCESSVM::FlushDevicesForTermination((DXGPROCESSVM *)(i - 78));
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
