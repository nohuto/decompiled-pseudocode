void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        struct VIDMM_SEGMENT_GROUP_STATE *a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // rax
  struct VIDMM_PROCESS_BUDGET_STATE *v10; // rdi
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  char IsHighPriorityProcess; // al

  v6 = *(int *)a3;
  v8 = a5;
  v10 = (struct VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 296LL * *(unsigned int *)a2);
  v11 = *((_QWORD *)v10 + v6 + 5);
  if ( v11 && a5 >= v11 )
    v8 = *((_QWORD *)v10 + v6 + 5);
  v12 = *((_QWORD *)a3 + 4);
  v13 = *((_QWORD *)v10 + v6 + 3);
  if ( v8 < v12 )
    v12 = v8;
  *((_QWORD *)v10 + v6 + 3) = v12;
  if ( (byte_1C00769C1 & 0x10) != 0 )
    McTemplateK0xxpqhuuuuu_EtwWriteTransfer(*((_QWORD *)a4 + 5), v13, (__int64)a3);
  *((_DWORD *)a4 + 101) = *((_DWORD *)a4 + 100);
  *((_DWORD *)a4 + 99) = *((_DWORD *)a4 + 98);
  if ( !(_DWORD)v6 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v10) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(this, *(_DWORD *)a2, v10, IsHighPriorityProcess);
  }
}
