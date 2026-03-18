/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1402DEB90
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140779850 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x1402DEC9C (RealSuccessor.c)
 *     FindNodeOrParent_0 @ 0x1402DF210 (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall RtlEnumerateGenericTableLikeADirectory(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_MATCH_FUNCTION MatchFunction,
        PVOID MatchData,
        ULONG NextFlag,
        PVOID *RestartKey,
        PULONG DeleteCount,
        PVOID Buffer)
{
  bool v7; // zf
  PVOID *v9; // rsi
  PVOID *v12; // rbx
  PULONG v13; // r14
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, PVOID *, PVOID); // r15
  PVOID *v15; // rcx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  int NodeOrParent_0; // eax

  v7 = Table->NumberGenericTableElements == 0;
  v9 = RestartKey;
  v12 = (PVOID *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))HalSystemVectorDispatchEntry;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, PVOID *, PVOID))MatchFunction;
  if ( *DeleteCount == Table->DeleteCount )
  {
    if ( v12 )
      goto LABEL_6;
  }
  else
  {
    RestartKey = 0LL;
  }
  NodeOrParent_0 = FindNodeOrParent_0(Table, Buffer, &RestartKey);
  if ( NodeOrParent_0 != 1 )
  {
    if ( NodeOrParent_0 != 3 )
    {
      v12 = RestartKey;
      goto LABEL_9;
    }
    v15 = RestartKey;
    goto LABEL_8;
  }
  v12 = RestartKey;
LABEL_6:
  if ( NextFlag )
  {
    v15 = v12;
LABEL_8:
    v12 = (PVOID *)RealSuccessor(v15, MatchFunction, MatchData, *(_QWORD *)&NextFlag);
  }
LABEL_9:
  if ( v12 )
  {
    while ( 1 )
    {
      v17 = v14(Table, v12 + 4, MatchData);
      if ( v17 != -1073741198 )
        break;
      v12 = (PVOID *)RealSuccessor(v12, v16, v18, v19);
      if ( !v12 )
        return 0LL;
    }
    *v9 = v12;
    *v13 = Table->DeleteCount;
    if ( !v17 )
      return v12 + 4;
  }
  return 0LL;
}
