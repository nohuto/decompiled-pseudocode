/*
 * XREFs of ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@PEAVDXGPUSHLOCKBASE@@@Z @ 0x1C00F15F4
 * Callers:
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00B31D0 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z @ 0x1C002C7DC (-CompleteAsynchronousUnpin@DXGDEVICE@@QEAAXIPEAVDXGALLOCATION@@@Z.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002D75C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C00B2444 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 */

void __fastcall VidMmCompleteAsyncUnpin(struct _KTHREAD **a1, struct VIDMM_ALLOC **a2, struct DXGPUSHLOCKBASE *a3)
{
  _QWORD *v3; // rdi
  char v7; // si
  char v8; // cl
  bool v9; // bl
  __int64 v10; // rcx
  __int64 v11; // rbx
  DXGDEVICE *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a2;
  v7 = 0;
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK(
    (DXGPROCESSVIDMMLOCK *)&v16,
    *(struct _KTHREAD ***)(*(_QWORD *)(*((_QWORD *)*a2 + 2) + 8LL) + 40LL));
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, a1 + 5584, 0);
  DXGPUSHLOCK::AcquireExclusive(v14);
  v8 = *((_BYTE *)v3 + 25);
  v15 = 2;
  *((_BYTE *)v3 + 25) = v8 & 0xFD;
  if ( (v8 & 1) != 0 && (v8 & 4) == 0 )
  {
    v9 = VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)v3, 1LL, 1);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    if ( v9 )
      VIDMM_GLOBAL::UnpinOneAllocation((VIDMM_GLOBAL *)a1, (__int64)v3, 2LL, 0);
    v7 = 1;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  if ( v16 )
  {
    v10 = v16 + 184;
    *(_QWORD *)(v16 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( a3 )
  {
    ExReleasePushLockExclusiveEx(a3, 0LL);
    KeLeaveCriticalRegion();
  }
  v11 = v3[2];
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v3 + 29);
  *a2 = 0LL;
  if ( v7 )
    DXGDEVICE::CompleteAsynchronousUnpin(
      v12,
      (*(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) >> 6) & 0xF,
      (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v11);
}
