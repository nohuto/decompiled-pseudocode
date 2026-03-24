/*
 * XREFs of ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18006C7D0
 * Callers:
 *     ?SyncLockForParallelMode@CRenderTargetManager@@QEAAXXZ @ 0x18006C824 (-SyncLockForParallelMode@CRenderTargetManager@@QEAAXXZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800DB7D4 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800E5634 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x180163804 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x1801638E8 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800DE4C0 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::EndTargetEnumeration(CRenderTargetManager *this)
{
  struct CRenderTarget **v2; // rsi
  struct CRenderTarget **v3; // rbx
  struct CRenderTarget **v4; // rbx

  *((_BYTE *)this + 128) = 0;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  v3 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    do
      CRenderTargetManager::RemoveRenderTarget(this, *v3++);
    while ( v3 != v2 );
    v2 = (struct CRenderTarget **)*((_QWORD *)this + 8);
  }
  v4 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  if ( v4 != v2 )
  {
    do
    {
      if ( *v4 )
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)*v4 + 16LL))(*v4);
      ++v4;
    }
    while ( v4 != v2 );
    v4 = (struct CRenderTarget **)*((_QWORD *)this + 7);
  }
  *((_QWORD *)this + 8) = v4;
}
