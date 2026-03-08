/*
 * XREFs of SmpPageWrite @ 0x1405C7990
 * Callers:
 *     MiStoreWriteIssue @ 0x14065A714 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14045CBDC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x1405C78E8 (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        _SLIST_ENTRY *a7,
        int a8)
{
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  struct _EX_RUNDOWN_REF *v15; // rax
  unsigned int v17; // [rsp+70h] [rbp+18h]

  v17 = a4;
  v11 = -1;
  if ( (*(_DWORD *)(a3 + 8) & 3) != 0
    || (v12 = SmpKeyedStoreReference((signed __int64 *)(a1 + 2072), a1, *(_QWORD *)a3), v11 = v12, v12 == -1) )
  {
    v13 = v17;
  }
  else
  {
    v13 = v12 & 0x3FF | a4 & 0xFFFFF800;
    v17 = v13;
  }
  if ( (v13 & 0x7FF) == 0x400 )
  {
    if ( *(_DWORD *)(a1 + 2112) == -1 )
    {
      v14 = -1073741285;
      goto LABEL_10;
    }
    v17 = v13 & 0xFFFFF800 | *(_DWORD *)(a1 + 2112) & 0x3FF;
  }
  v14 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(a1, a2, v17, a5, (_SLIST_ENTRY *)(a6 & 0x7FFFFFFFFFFFFFFFLL), a7, a8);
LABEL_10:
  if ( v11 != -1 )
  {
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v11 & 0x3FF);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  return v14;
}
