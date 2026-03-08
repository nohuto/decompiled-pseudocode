/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0093CC0
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0093BA0 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x1C002F9F8 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00B4A34 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // si
  _QWORD *v15; // rbp
  __int64 *v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 PriorityClass; // r8

  v9 = a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v22[3] = this;
    v22[4] = v9;
    v22[5] = a4;
    v22[6] = a5;
    v22[7] = v10;
  }
  v11 = 8 * v9;
  v12 = *(_QWORD **)(8 * v9 + *((_QWORD *)this + 2));
  if ( v12 )
    v13 = v12[2] + 184LL * *((unsigned int *)a4 + 5);
  else
    v13 = 0LL;
  *(_QWORD *)(v13 + 16) -= v10;
  --*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_6;
  --*(_DWORD *)(v13 + 8);
  v12 = (_QWORD *)((char *)a2 + 16);
  v18 = *((_QWORD *)a2 + 2);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(v18 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16) )
    goto LABEL_22;
  v19 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( (_QWORD *)*v19 != v12 )
    goto LABEL_22;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *v12 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  if ( *(_DWORD *)(v13 + 8) )
LABEL_6:
    v14 = 0;
  else
    v14 = 1;
  v15 = (_QWORD *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v23[3] = v15;
    v23[4] = a4;
    v23[5] = v14;
    v23[6] = v10;
  }
  if ( v14 )
  {
    v20 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) == v15 )
    {
      v21 = (_QWORD *)v15[1];
      if ( (_QWORD *)*v21 == v15 )
      {
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *v15 = 0LL;
        v15[1] = 0LL;
        goto LABEL_10;
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_10:
  v16 = *(__int64 **)(v11 + *((_QWORD *)this + 2));
  v17 = v16[6] + 296LL * (*((_DWORD *)a6 + 17) & 0x3F);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 8LL * *((int *)a4 + 119) + 200), -v10);
  if ( (byte_1C00769C1 & 0x10) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v16[5], &EventVidMmProcessCommitmentChange, *v16);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 17) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 100));
    *(_QWORD *)(v17 + 8 * PriorityClass + 256) -= v10;
    if ( (byte_1C00769C1 & 0x10) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 34) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        PriorityClass);
  }
}
