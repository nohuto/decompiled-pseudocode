/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1402456F0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1406CE130 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1402457FC (RealSuccessor.c)
 *     FindNodeOrParent_0 @ 0x1402F6D40 (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  PVOID *v7; // r14
  void *v8; // rdi
  PVOID *v12; // rbx
  PULONG v13; // r15
  PRTL_AVL_MATCH_FUNCTION v14; // r12
  PVOID *v15; // rcx
  int v16; // eax
  int NodeOrParent_0; // eax

  v7 = RestartKey;
  v8 = 0LL;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( !Table->NumberGenericTableElements )
  {
    *v7 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (PRTL_AVL_MATCH_FUNCTION)PdcCreateWatchdogAroundClientCall;
  if ( MatchFunction )
    v14 = MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
    {
LABEL_6:
      if ( !NextFlag )
        goto LABEL_9;
      v15 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent_0 = FindNodeOrParent_0(Table, Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v12 = RestartKey;
    goto LABEL_6;
  }
  if ( NodeOrParent_0 == 3 )
  {
    v15 = RestartKey;
LABEL_8:
    v12 = (PVOID *)RealSuccessor(v15);
    goto LABEL_9;
  }
  v12 = RestartKey;
LABEL_9:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v16 = ((__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))v14)(Table, v12 + 4, MatchData);
    if ( v16 != -1073741198 )
      break;
    v12 = (PVOID *)RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v7 = v12;
  if ( !v16 )
    v8 = v12 + 4;
  *v13 = Table->DeleteCount;
  return v8;
}
