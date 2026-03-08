/*
 * XREFs of ViDeadlockRemoveResource @ 0x140AD6A68
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405CF408 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x140AD53DC (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x140AD5E40 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD6830 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x140AD6934 (ViDeadlockRemoveNode.c)
 */

unsigned __int64 __fastcall ViDeadlockRemoveResource(int *a1, int a2, int **a3)
{
  int v6; // ebp
  __int64 *v7; // rax
  int *v8; // rsi
  int *v9; // rbx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  int **v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    v6 = 1;
  }
  else
  {
    v6 = a2;
    if ( !a2 )
    {
      v7 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( v7 )
      {
        ViDeadlockPreprocessOptions(
          byte_140C0DD58,
          "Deleted lock 0x%p is still owned by the thread 0x%p.",
          4107LL,
          *((_QWORD *)a1 + 1),
          *v7,
          (__int64)a1);
        VfReportIssueWithOptions(
          0xC4u,
          0x100BuLL,
          *((_QWORD *)a1 + 1),
          **((_QWORD **)a1 + 2),
          (ULONG_PTR)a1,
          byte_140C0DD58);
        v6 = a2;
      }
    }
  }
  v8 = (int *)*((_QWORD *)a1 + 3);
  while ( v8 != a1 + 6 )
  {
    v9 = v8 - 10;
    v8 = *(int **)v8;
    ViDeadlockRemoveNode(v9, v6);
    *(_QWORD *)v9 = *a3;
    *a3 = v9;
  }
  v10 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v11 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v11 + 8) != a1 + 10 || (v12 = (int **)*((_QWORD *)a1 + 6), *v12 != a1 + 10) )
    __fastfail(3u);
  *v12 = (int *)v11;
  *(_QWORD *)(v11 + 8) = v12;
  v13 = *((_QWORD *)a1 + 1);
  result = 1023 * ((v13 >> 12) / 0x3FF);
  if ( *(_QWORD *)(16 * ((v13 >> 12) % 0x3FF) + v10[2]) == 16 * ((v13 >> 12) % 0x3FF) + v10[2] )
  {
    v10[2 * ((v13 >> 12) % 0x3FF) + 4] = 0LL;
    v10[2 * ((v13 >> 12) % 0x3FF) + 5] = 0LL;
  }
  else
  {
    v15 = (unsigned int)ViDeadlockResourceTypeSizeInfo[*a1];
    v16 = v10[2 * ((v13 >> 12) % 0x3FF) + 4];
    if ( v13 == v16 )
      v10[2 * ((v13 >> 12) % 0x3FF) + 4] = v15 + v16;
    v17 = v10[2 * ((v13 >> 12) % 0x3FF) + 5];
    result = v13 + v15;
    if ( v13 + v15 == v17 )
      v10[2 * ((v13 >> 12) % 0x3FF) + 5] = v17 - v15;
  }
  return result;
}
