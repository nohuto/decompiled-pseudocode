/*
 * XREFs of ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C0341864
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C03407BC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C03410E0 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0016980 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006CA60 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

void __fastcall DXGVIRTUALMACHINE::SetVailObject(DXGVIRTUALMACHINE *this, struct DXGVAILOBJECT *a2)
{
  DxgkCompositionObject *v4; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v4 = (DxgkCompositionObject *)*((_QWORD *)this + 41);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DxgkCompositionObject::Release(v4);
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
