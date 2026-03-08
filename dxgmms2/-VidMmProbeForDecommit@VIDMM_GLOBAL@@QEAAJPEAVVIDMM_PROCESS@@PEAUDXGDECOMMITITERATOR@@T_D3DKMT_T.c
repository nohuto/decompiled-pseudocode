/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C00EA434
 * Callers:
 *     ?VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x1C002CCF0 (-VidMmProbeForDecommit@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_T.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00E4444 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  unsigned int v8; // esi
  struct _KTHREAD *v9; // rax
  __int64 v10; // r13
  UINT v11; // ebx
  __int64 v12; // rcx
  __int64 *v14; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-38h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-28h]

  v8 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, this + 5134, 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v9 = this[3];
  v17 = 1;
  v10 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v9 + 60));
  if ( v10 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
    v11 = a4.Value >> 1;
    v12 = *(_QWORD *)(v10 + 424);
    *((_QWORD *)a3 + 3) = v12;
    *(_QWORD *)a3 = *(_QWORD *)(v10 + 520);
    if ( (v11 & 1) != 0 )
    {
LABEL_3:
      v8 = -1071775484;
    }
    else
    {
      while ( v12 != v10 + 424 )
      {
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v12 - 440),
               v11 & 1) )
        {
          goto LABEL_3;
        }
        v14 = (__int64 *)*((_QWORD *)a3 + 3);
        v12 = *v14;
        *((_QWORD *)a3 + 3) = *v14;
      }
    }
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v8;
}
