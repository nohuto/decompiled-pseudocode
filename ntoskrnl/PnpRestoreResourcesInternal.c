/*
 * XREFs of PnpRestoreResourcesInternal @ 0x14096A7C4
 * Callers:
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpDetermineResourceListSize @ 0x1406F69E8 (PnpDetermineResourceListSize.c)
 *     PnpFindBestConfiguration @ 0x140803704 (PnpFindBestConfiguration.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140803B38 (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140803C30 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpCmResourcesToIoResources @ 0x140804A84 (PnpCmResourcesToIoResources.c)
 *     IopResourceRequirementsListToReqList @ 0x140805448 (IopResourceRequirementsListToReqList.c)
 *     IopCommitConfiguration @ 0x14084D8A8 (IopCommitConfiguration.c)
 *     IopRearrangeReqList @ 0x14085097C (IopRearrangeReqList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestoreResourcesInternal(__int64 a1)
{
  _DWORD *v1; // rdx
  _DWORD *v4; // rbx
  int BestConfiguration; // esi
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  ULONG v8; // eax
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[8]; // [rsp+30h] [rbp-40h] BYREF
  char vars0; // [rsp+70h] [rbp+0h] BYREF

  v1 = *(_DWORD **)(a1 + 416);
  v9 = 0LL;
  if ( !v1 )
    return 0LL;
  v4 = PnpCmResourcesToIoResources(a1, v1, 0);
  if ( !v4 )
    return 3221225626LL;
  memset(v10, 0, sizeof(v10));
  v10[0] = *(_QWORD *)(a1 + 32);
  v10[3] = v4;
  HIDWORD(v10[1]) = 4;
  BestConfiguration = IopResourceRequirementsListToReqList((__int64)v10, (int **)&v10[4]);
  if ( BestConfiguration >= 0 && (v6 = v10[4]) != 0 )
  {
    IopRearrangeReqList(v10[4]);
    if ( !*(_QWORD *)(v6 + 24) )
    {
      PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
      return 3221225858LL;
    }
    BestConfiguration = PnpFindBestConfiguration((__int64)v10, 1u, (__int64)&v9);
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v10, (unsigned __int64)&vars0);
    if ( BestConfiguration >= 0 )
      BestConfiguration = IopCommitConfiguration((_QWORD **)&v9);
    if ( v10[5] )
      ExFreePoolWithTag((PVOID)v10[5], 0);
    if ( v10[6] )
      ExFreePoolWithTag((PVOID)v10[6], 0);
    v7 = *(_DWORD **)(a1 + 416);
    v8 = PnpDetermineResourceListSize(v7);
    IopWriteAllocatedResourcesToRegistry(a1, v7, v8);
  }
  else
  {
    ExFreePoolWithTag((PVOID)v10[3], 0);
  }
  return (unsigned int)BestConfiguration;
}
