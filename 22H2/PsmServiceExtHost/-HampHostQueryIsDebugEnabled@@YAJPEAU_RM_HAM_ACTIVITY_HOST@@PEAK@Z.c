/*
 * XREFs of ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18002A220
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180029FAC (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x18007A3EC (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E954 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18002A294 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A360 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 */

__int64 __fastcall HampHostQueryIsDebugEnabled(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  if ( HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 97) + 88LL)) )
  {
    *a2 = 1;
  }
  else
  {
    v5 = 0;
    result = RmHamHostActOnProcesses(
               (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
               0x400u,
               0,
               HampHostQueryProcessDebuggedCallback,
               &v5);
    if ( (int)result < 0 )
      return result;
    *a2 = v5;
  }
  return 0LL;
}
