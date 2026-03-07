void __fastcall VIDMM_PROCESS::AddCommitment(
        DXGPROCESS **this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct _VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 v14; // si
  struct VIDMM_SEGMENT *v15; // rbp
  __int64 *v16; // r14
  struct VIDMM_PROCESS_BUDGET_STATE *v17; // rbp
  __int64 **v18; // rdx
  __int64 *v19; // r12
  struct VIDMM_SEGMENT **v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int PriorityClass; // eax
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v25; // r10

  v9 = a3;
  v10 = *((_QWORD *)a6 + 2);
  if ( g_IsInternalReleaseOrDbg )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v21[3] = this;
    v21[4] = v9;
    v21[5] = a4;
    v21[6] = a5;
    v21[7] = v10;
  }
  v11 = 8 * v9;
  v12 = *((_QWORD *)this[2] + v9);
  if ( v12 )
    v13 = *(_QWORD *)(v12 + 16) + 184LL * *((unsigned int *)a4 + 5);
  else
    v13 = 0LL;
  *(_QWORD *)(v13 + 16) += v10;
  ++*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_6;
  ++*(_DWORD *)(v13 + 8);
  v12 = v13 + 40;
  v18 = *(__int64 ***)(v13 + 48);
  v19 = (__int64 *)((char *)a2 + 16);
  if ( *v18 != (__int64 *)(v13 + 40) )
    goto LABEL_20;
  *v19 = v12;
  v19[1] = (__int64)v18;
  *v18 = v19;
  *(_QWORD *)(v13 + 48) = v19;
  if ( *(_DWORD *)(v13 + 8) == 1 )
    v14 = 1;
  else
LABEL_6:
    v14 = 0;
  v15 = (struct VIDMM_SEGMENT *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v22[3] = v15;
    v22[4] = a4;
    v22[5] = v14;
    v22[6] = v10;
  }
  if ( v14 )
  {
    v20 = (struct VIDMM_SEGMENT **)*((_QWORD *)a4 + 18);
    if ( *v20 == (struct VIDMM_SEGMENT *)((char *)a4 + 136) )
    {
      *(_QWORD *)v15 = (char *)a4 + 136;
      *((_QWORD *)v15 + 1) = v20;
      *v20 = v15;
      *((_QWORD *)a4 + 18) = v15;
      goto LABEL_10;
    }
LABEL_20:
    __fastfail(3u);
  }
LABEL_10:
  v16 = *(__int64 **)((char *)this[2] + v11);
  v17 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v16[6] + 296LL * (*((_DWORD *)a6 + 17) & 0x3F));
  _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + *((int *)a4 + 119) + 25, v10);
  if ( (byte_1C00769C1 & 0x10) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v16[5], &EventVidMmProcessCommitmentChange, *v16);
  if ( (*((_DWORD *)a4 + 20) & 0x1001) != 0 && (*((_DWORD *)a6 + 17) & 0x400) == 0 )
  {
    PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a6 + 100));
    *((_QWORD *)v17 + PriorityClass + 32) += v10;
    if ( (byte_1C00769C1 & 0x10) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(v16[5], &EventVidMmProcessDemotedCommitmentChange, *v16);
    if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v17) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(this[4]);
      VIDMM_GLOBAL::AddToPromotionCandidateList(v25, *((_DWORD *)a6 + 17) & 0x3F, v17, IsHighPriorityProcess);
    }
  }
}
