/*
 * XREFs of VfInitializeBranchTracing @ 0x140AD0860
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140ABF120 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViIsBTSSupported @ 0x140AD0ADC (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x140AD0C10 (ViSetupBTSPerProcNoEnable.c)
 */

__int64 VfInitializeBranchTracing()
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 Pool2; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  void **v6; // rcx
  void *v7; // rcx
  int v8; // eax

  if ( (MmVerifierData & 0x8000000) == 0 )
    return 3221225474LL;
  if ( VfBTSInitialized )
    return 3221226538LL;
  if ( !(unsigned int)ViIsBTSSupported() )
    return 3221226537LL;
  memset(VfBTSDataManagementArea, 0, sizeof(VfBTSDataManagementArea));
  if ( ViVerifyBTSBufferSize )
    v1 = 24 * ViVerifyBTSBufferSize;
  else
    v1 = 240000;
  ViVerifyBTSBufferSize = v1;
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( (unsigned int)v2 < 0x800 )
    {
      Pool2 = ExAllocatePool2(64LL, 0x58uLL, 0x6D535442u);
      VfBTSDataManagementArea[v2] = Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      *(_QWORD *)VfBTSDataManagementArea[v2] = ExAllocatePool2(64LL, (unsigned int)ViVerifyBTSBufferSize, 0x62535442u);
      v4 = (_QWORD *)VfBTSDataManagementArea[v2];
      if ( !*v4 )
        goto LABEL_15;
      v4[1] = *v4;
      *(_QWORD *)(VfBTSDataManagementArea[v2] + 24) = 0LL;
      v5 = (_QWORD *)VfBTSDataManagementArea[v2];
      v2 = (unsigned int)(v2 + 1);
      v5[2] = *v5 + (unsigned int)ViVerifyBTSBufferSize + 1LL;
      if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_13;
    }
    return 3221226537LL;
  }
LABEL_13:
  if ( !(unsigned int)ViSetupBTSPerProcNoEnable() )
  {
    if ( (unsigned int)v2 < 0x800 )
    {
      do
      {
LABEL_15:
        v6 = (void **)VfBTSDataManagementArea[v2];
        if ( v6 )
        {
          v7 = *v6;
          if ( v7 )
          {
            ExFreePoolWithTag(v7, 0x62535442u);
            *(_QWORD *)VfBTSDataManagementArea[v2] = 0LL;
          }
          ExFreePoolWithTag((PVOID)VfBTSDataManagementArea[v2], 0x6D535442u);
          VfBTSDataManagementArea[v2] = 0LL;
        }
        v8 = v2;
        v2 = (unsigned int)(v2 - 1);
      }
      while ( v8 );
    }
    return 3221226537LL;
  }
  VfBTSInitialized = 1;
  return 0LL;
}
