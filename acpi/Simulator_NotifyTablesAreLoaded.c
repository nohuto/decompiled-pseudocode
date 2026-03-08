/*
 * XREFs of Simulator_NotifyTablesAreLoaded @ 0x1C00AB360
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00A94A0 (ACPIInitializeDDBs.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0048EC4 (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x1C0049970 (Simulator_TestNotify.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 */

__int64 Simulator_NotifyTablesAreLoaded()
{
  __int64 v0; // rbx
  void *v1; // rax
  __int64 v2; // rax
  __int64 v3; // rbx
  void *v4; // rax
  __int64 v5; // rcx
  _DWORD *inited; // rax
  void *v7; // rbx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject(gpheapGlobal, "MSLT", 0LL, 0LL, &v9, 0) )
  {
    v0 = v9;
    if ( v9 )
    {
      *(_WORD *)(v9 + 66) = 8;
      *(_DWORD *)(v0 + 88) = 222;
      v1 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xDEu);
      *(_QWORD *)(v0 + 96) = v1;
      if ( v1 )
      {
        memset(v1, 0, *(unsigned int *)(v0 + 88));
        *(_BYTE *)(*(_QWORD *)(v0 + 96) + 193LL) |= 1u;
        v2 = *(_QWORD *)(v0 + 96);
        *(_DWORD *)(v2 + 194) = 220158884;
        *(_DWORD *)(v2 + 198) = 1414351187;
        *(_DWORD *)(v2 + 202) = 1397558528;
        *(_DWORD *)(v2 + 206) = 1744852038;
        *(_DWORD *)(v2 + 210) = 218127373;
        *(_WORD *)(v2 + 214) = 2560;
        *(_BYTE *)(v2 + 216) = 0;
      }
    }
  }
  v9 = 0LL;
  if ( !(unsigned int)CreateNameSpaceObject(gpheapGlobal, "MSUT", 0LL, 0LL, &v9, 0) )
  {
    v3 = v9;
    if ( v9 )
    {
      *(_WORD *)(v9 + 66) = 8;
      *(_DWORD *)(v3 + 88) = 202;
      v4 = (void *)HeapAlloc(gpheapGlobal, 1381258056, 0xCAu);
      *(_QWORD *)(v3 + 96) = v4;
      if ( v4 )
      {
        memset(v4, 0, *(unsigned int *)(v3 + 88));
        *(_BYTE *)(*(_QWORD *)(v3 + 96) + 193LL) |= 1u;
        v5 = *(_QWORD *)(v3 + 96);
        *(_WORD *)(v5 + 194) = 10843;
        *(_BYTE *)(v5 + 196) = 104;
      }
    }
  }
  inited = Simulator_AllocAndInitTestData();
  v7 = inited;
  if ( !inited )
    return 3221225626LL;
  *inited = 1;
  inited[1] = 5;
  inited[2] = 1;
  *((_QWORD *)inited + 2) = gpnsNameSpaceRoot;
  Simulator_TestNotify(inited);
  ExFreePoolWithTag(v7, 0);
  return 0LL;
}
