/*
 * XREFs of ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00EC44C
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C009DFB0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationClosed(VIDMM_DEVICE *this, struct VIDMM_ALLOC *a2)
{
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, (struct _KTHREAD **)(v3 + 360), 0);
    DXGPUSHLOCK::AcquireExclusive(v8);
    v4 = (_QWORD *)((char *)a2 + 112);
    v9 = 2;
    v5 = *((_QWORD *)a2 + 14);
    if ( *(struct VIDMM_ALLOC **)(v5 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 112)
      || (v6 = (_QWORD *)*((_QWORD *)a2 + 15), (_QWORD *)*v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_QWORD *)a2 + 15) = 0LL;
    *v4 = 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
  }
}
