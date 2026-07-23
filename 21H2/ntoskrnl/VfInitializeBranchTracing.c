/*
 * XREFs of VfInitializeBranchTracing @ 0x1409D9394
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x1409C7050 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ViIsBTSSupported @ 0x1409D9628 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D975C (ViSetupBTSPerProcNoEnable.c)
 */

__int64 VfInitializeBranchTracing()
{
  int v1; // eax
  __int64 v2; // rbx
  PVOID PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  PVOID *v6; // rcx
  int v7; // eax

  if ( (MmVerifierData & 0x8000000) == 0 )
    return 3221225474LL;
  if ( VfBTSInitialized )
    return 3221226538LL;
  if ( !(unsigned int)ViIsBTSSupported() )
    return 3221226537LL;
  memset(VfBTSDataManagementArea, 0, sizeof(VfBTSDataManagementArea));
  if ( (_DWORD)ViVerifyBTSBufferSize )
    v1 = 24 * ViVerifyBTSBufferSize;
  else
    v1 = 240000;
  LODWORD(ViVerifyBTSBufferSize) = v1;
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( (unsigned int)v2 < 0x500 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x58uLL, 0x6D535442u);
      VfBTSDataManagementArea[v2] = (__int64)PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_15;
      *(_QWORD *)VfBTSDataManagementArea[v2] = ExAllocatePoolWithTag(
                                                 NonPagedPoolNx,
                                                 (unsigned int)ViVerifyBTSBufferSize,
                                                 0x62535442u);
      v4 = (_QWORD *)VfBTSDataManagementArea[v2];
      if ( !*v4 )
        goto LABEL_15;
      v4[1] = *v4;
      *(_QWORD *)(VfBTSDataManagementArea[v2] + 24) = 0LL;
      *(_QWORD *)(VfBTSDataManagementArea[v2] + 16) = *(_QWORD *)VfBTSDataManagementArea[v2]
                                                    + (unsigned int)ViVerifyBTSBufferSize
                                                    + 1LL;
      v5 = VfBTSDataManagementArea[v2];
      v2 = (unsigned int)(v2 + 1);
      *(_QWORD *)(v5 + 80) = 0LL;
      if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_14;
    }
    return 3221226537LL;
  }
LABEL_14:
  if ( !(unsigned int)ViSetupBTSPerProcNoEnable() )
  {
LABEL_15:
    if ( (unsigned int)v2 < 0x500 )
    {
      do
      {
        v6 = (PVOID *)VfBTSDataManagementArea[v2];
        if ( v6 )
        {
          if ( *v6 )
          {
            ExFreePoolWithTag(*v6, 0x62535442u);
            *(_QWORD *)VfBTSDataManagementArea[v2] = 0LL;
            v6 = (PVOID *)VfBTSDataManagementArea[v2];
          }
          ExFreePoolWithTag(v6, 0x6D535442u);
          VfBTSDataManagementArea[v2] = 0LL;
        }
        v7 = v2;
        v2 = (unsigned int)(v2 - 1);
      }
      while ( v7 );
    }
    return 3221226537LL;
  }
  VfBTSInitialized = 1;
  return 0LL;
}
