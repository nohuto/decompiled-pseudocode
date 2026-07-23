/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x140252630
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x140629EF8 (PiDmEnumObjectsWithCallback.c)
 * Callees:
 *     RealSuccessor @ 0x140252750 (RealSuccessor.c)
 *     FindNodeOrParent_0 @ 0x140252E6C (FindNodeOrParent_0.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
  ULONG v8; // ebp
  PVOID *v9; // rsi
  char *v12; // rbx
  PULONG v13; // r14
  __int64 (__fastcall *v14)(PRTL_AVL_TABLE, char *, PVOID); // r15
  unsigned int v15; // eax
  char *v16; // rcx
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // r9
  int NodeOrParent_0; // eax

  v7 = Table->NumberGenericTableElements == 0;
  v8 = NextFlag;
  v9 = RestartKey;
  v12 = (char *)*RestartKey;
  RestartKey = (PVOID *)*RestartKey;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v13 = DeleteCount;
  v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, char *, PVOID))HalSystemVectorDispatchEntry;
  v15 = Table->DeleteCount;
  v16 = v12;
  if ( MatchFunction )
    v14 = (__int64 (__fastcall *)(PRTL_AVL_TABLE, char *, PVOID))MatchFunction;
  if ( *DeleteCount != v15 )
  {
    v12 = 0LL;
    RestartKey = 0LL;
    v16 = 0LL;
  }
  if ( v16 )
    goto LABEL_7;
  NodeOrParent_0 = FindNodeOrParent_0(Table, Buffer, &RestartKey);
  if ( NodeOrParent_0 == 1 )
  {
    v12 = (char *)RestartKey;
    goto LABEL_7;
  }
  v8 = 0;
  if ( NodeOrParent_0 == 3 )
  {
    v12 = (char *)RealSuccessor(RestartKey, MatchFunction, MatchData, *(_QWORD *)&NextFlag);
LABEL_7:
    if ( v8 )
      v12 = (char *)RealSuccessor(v12, MatchFunction, MatchData, *(_QWORD *)&NextFlag);
    goto LABEL_9;
  }
  v12 = (char *)RestartKey;
LABEL_9:
  if ( v12 )
  {
    while ( 1 )
    {
      v18 = v14(Table, v12 + 32, MatchData);
      if ( v18 != -1073741198 )
        break;
      v12 = (char *)RealSuccessor(v12, v17, v19, v20);
      if ( !v12 )
        return 0LL;
    }
    *v9 = v12;
    *v13 = Table->DeleteCount;
    if ( !v18 )
      return v12 + 32;
  }
  return 0LL;
}
