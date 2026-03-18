/*
 * XREFs of ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C03462A4
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03451FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0345B20 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z @ 0x1C00169D0 (-FlipManagerDwmReleaseFlipManagerObject@@YAXPEAUFlipManagerObject@@@Z.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006D690 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetVailObject(DXGVIRTUALMACHINE *this, struct DXGVAILOBJECT *a2)
{
  struct FlipManagerObject *v4; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (struct FlipManagerObject *)*((_QWORD *)this + 41);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      FlipManagerDwmReleaseFlipManagerObject(v4);
      *((_QWORD *)this + 41) = 0LL;
    }
    if ( a2 )
    {
      DxgkCompositionObject::AddRef(a2);
      *((_QWORD *)this + 41) = a2;
    }
  }
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
}
