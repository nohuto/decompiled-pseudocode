/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00B2BC4
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0067150 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00010B8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AD428 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00AF564 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
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
  __int64 v12; // rax
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  char v17; // bl
  bool v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // [rsp+20h] [rbp-58h]
  _BYTE v25[8]; // [rsp+28h] [rbp-50h] BYREF
  DXGPUSHLOCK *v26; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+38h] [rbp-40h]
  struct _VIDMM_GLOBAL_ALLOC *v28; // [rsp+80h] [rbp+8h]
  _QWORD *v29; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v12 = WdLogNewEntry5_WdEvent(this, a2);
  v24 = v6 & 1;
  *(_QWORD *)(v12 + 24) = v24;
  WdLogEvent5_WdEvent(v12);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1C00504C0 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, this + 5130, 0);
  DXGPUSHLOCK::AcquireShared(v26);
  v13 = this[3];
  v27 = 1;
  v14 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)v13 + 58));
  if ( v14 && *(_QWORD *)(v14 + 520) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4996));
    v15 = (_QWORD *)(v14 + 424);
    v16 = (_QWORD *)*((_QWORD *)a3 + 3);
    v29 = v15;
    if ( v16 != v15 )
    {
      v17 = (v6 & 2) != 0;
      do
      {
        v28 = (struct _VIDMM_GLOBAL_ALLOC *)(v16 - 51);
        *((_QWORD *)a3 + 3) = *v16;
        v18 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct _VIDMM_GLOBAL_ALLOC *)(v16 - 51),
               v17) )
        {
          this[5588] = (struct _KTHREAD *)(v16 - 51);
          v19 = *v16;
          if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v20 = (_QWORD *)v16[1], (_QWORD *)*v20 != v16) )
            __fastfail(3u);
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *v16 = 0LL;
          this[4997] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4996, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, (DXGFASTMUTEX **)v28) )
          {
            v11 += *((_QWORD *)v28 + 1);
            v18 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4996));
          this[5588] = 0LL;
          if ( v18 )
            break;
        }
        v16 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v16 != v29 );
    }
    this[4997] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4996, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v22, v21);
    v23[3] = a5;
    v23[5] = v24;
    v23[4] = v11;
    WdLogEvent5_WdEvent(v23);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
}
