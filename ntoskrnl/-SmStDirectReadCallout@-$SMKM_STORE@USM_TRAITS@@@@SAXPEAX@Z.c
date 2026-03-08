/*
 * XREFs of ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405BE580
 * Callers:
 *     <none>
 * Callees:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402E6D80 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?SmStDirectReadComplete@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@J@Z @ 0x1405BE5E0 (-SmStDirectReadComplete@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRA.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1405BE638 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 */

void __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout(_QWORD *a1)
{
  unsigned int Issue; // edi

  *((_DWORD *)a1 + 6) = 0;
  Issue = SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(*a1, a1[1], a1[2]);
  ST_STORE<SM_TRAITS>::StReleaseReadContext((union _SLIST_HEADER *)*a1, a1[2]);
  if ( Issue != -1073741550 )
  {
    SMKM_STORE<SM_TRAITS>::SmStDirectReadComplete(*a1, a1[1], Issue);
    *((_DWORD *)a1 + 6) = 1;
  }
}
