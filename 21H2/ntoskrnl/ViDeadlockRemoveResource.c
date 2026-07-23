/*
 * XREFs of ViDeadlockRemoveResource @ 0x1409E0A4C
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405A2458 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x1409DF838 (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1409E0314 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x1409C7384 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E0818 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x1409E0914 (ViDeadlockRemoveNode.c)
 */

__int64 __fastcall ViDeadlockRemoveResource(int *a1, int a2, int **a3)
{
  __int64 *v6; // rax
  int *v7; // rsi
  int *v8; // rbx
  _QWORD *v9; // r9
  __int64 v10; // rdx
  int **v11; // rcx
  unsigned __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // rcx

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((int *)ViDeadlockGlobals + 8282) > 1024 )
    a2 = 1;
  if ( !a2 )
  {
    v6 = (__int64 *)*((_QWORD *)a1 + 2);
    if ( v6 )
    {
      ViDeadlockPreprocessOptions(
        byte_140C12F4C,
        "Deleted lock 0x%p is still owned by the thread 0x%p.",
        4107LL,
        *((_QWORD *)a1 + 1),
        *v6,
        (__int64)a1);
      VfReportIssueWithOptions(
        0xC4u,
        0x100BuLL,
        *((_QWORD *)a1 + 1),
        **((_QWORD **)a1 + 2),
        (ULONG_PTR)a1,
        byte_140C12F4C);
    }
  }
  v7 = (int *)*((_QWORD *)a1 + 3);
  while ( v7 != a1 + 6 )
  {
    v8 = v7 - 10;
    v7 = *(int **)v7;
    ViDeadlockRemoveNode(v8, a2);
    *(_QWORD *)v8 = *a3;
    *a3 = v8;
  }
  v9 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v10 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v10 + 8) != a1 + 10 || (v11 = (int **)*((_QWORD *)a1 + 6), *v11 != a1 + 10) )
    __fastfail(3u);
  *v11 = (int *)v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = *((_QWORD *)a1 + 1) >> 12;
  result = 1023 * (v12 / 0x3FF);
  v12 %= 0x3FFuLL;
  v14 = 2 * (v12 + 2);
  if ( *(_QWORD *)(16 * v12 + v9[2]) != 16 * v12 + v9[2] )
    return VfUtilAddressRangeRemove(&v9[v14], *((_QWORD *)a1 + 1), (unsigned int)ViDeadlockResourceTypeSizeInfo[*a1]);
  v9[v14] = 0LL;
  v9[v14 + 1] = 0LL;
  return result;
}
