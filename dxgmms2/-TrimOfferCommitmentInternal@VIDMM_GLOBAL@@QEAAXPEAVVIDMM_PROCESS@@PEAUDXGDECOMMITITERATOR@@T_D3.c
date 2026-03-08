/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00E8170
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E14D0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00E4444 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r15
  unsigned __int64 v11; // r12
  struct _KTHREAD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  char v16; // bl
  bool v17; // bp
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]
  _BYTE v21[8]; // [rsp+28h] [rbp-50h] BYREF
  DXGPUSHLOCK *v22; // [rsp+30h] [rbp-48h]
  int v23; // [rsp+38h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC *v24; // [rsp+80h] [rbp+8h]
  _QWORD *v25; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v20 = *(_BYTE *)&a4.0 & 1;
  WdLogSingleEntry1(4LL, v20);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C0076570 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, this + 5134, 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v12 = this[3];
  v23 = 1;
  v13 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v12 + 60));
  if ( v13 && *(_QWORD *)(v13 + 520) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
    v14 = (_QWORD *)(v13 + 424);
    v15 = (_QWORD *)*((_QWORD *)a3 + 3);
    v25 = v14;
    if ( v15 != v14 )
    {
      v16 = (v6 & 2) != 0;
      do
      {
        v24 = (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 55);
        *((_QWORD *)a3 + 3) = *v15;
        v17 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v15 - 55),
               v16) )
        {
          this[5593] = (struct _KTHREAD *)(v15 - 55);
          v18 = *v15;
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v19 = (_QWORD *)v15[1], (_QWORD *)*v19 != v15) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v15 = 0LL;
          this[4998] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4997, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, v24) )
          {
            v11 += *((_QWORD *)v24 + 1);
            v17 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4997));
          this[5593] = 0LL;
          if ( v17 )
            break;
        }
        v15 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v15 != v25 );
    }
    this[4998] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4997, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    WdLogSingleEntry3(4LL, a5, v11, v20);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
}
