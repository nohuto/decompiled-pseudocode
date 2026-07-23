/*
 * XREFs of SmpPageWrite @ 0x140288D9C
 * Callers:
 *     MiStoreWriteIssue @ 0x140288CD0 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmpKeyedStoreReference @ 0x1402874C0 (SmpKeyedStoreReference.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 */

__int64 __fastcall SmpPageWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // ebx
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // [rsp+68h] [rbp+10h]

  v7 = a3;
  v16 = a3;
  v10 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v11 = SmpKeyedStoreReference((volatile signed __int64 *)qword_140D24188, (__int64)&SmGlobals),
        v10 = v11,
        v11 == -1) )
  {
    v12 = v16;
  }
  else
  {
    v12 = v11 & 0x3FF | v7 & 0xFFFFF800;
    LODWORD(v16) = v12;
  }
  if ( (v12 & 0x7FF) != 0x400 )
    goto LABEL_7;
  if ( dword_140D241B0 != -1 )
  {
    LODWORD(v16) = dword_140D241B0 & 0x3FF | v12 & 0xFFFFF800;
LABEL_7:
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(&SmGlobals, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
    goto LABEL_8;
  }
  v13 = -1073741285;
LABEL_8:
  if ( v10 != -1 )
  {
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(&SmGlobals, v10 & 0x3FF, a3, a4);
    ExReleaseRundownProtection(v15 + 1);
  }
  return v13;
}
