/*
 * XREFs of ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002DE9C
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0094640 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F370 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::FreeCrossAdapterDataDpc(
        VIDMM_GLOBAL *this,
        KSPIN_LOCK *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  struct _VIDMM_GLOBAL_ALLOC **v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a2 + 4, &LockHandle);
  v5 = a2 + 2;
  v6 = (_QWORD *)*v5;
  while ( v6 != v5 )
  {
    v7 = (struct _VIDMM_GLOBAL_ALLOC **)(v6 - 1);
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *v7 == a3 )
    {
      if ( (_QWORD *)v6[1] != v8 || (v9 = (_QWORD *)v8[1], (_QWORD *)*v9 != v8) )
        __fastfail(3u);
      *v9 = v6;
      v6[1] = v9;
      ExFreePoolWithTag(v7, 0);
      break;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
