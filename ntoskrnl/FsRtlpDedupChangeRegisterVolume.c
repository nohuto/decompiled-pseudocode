/*
 * XREFs of FsRtlpDedupChangeRegisterVolume @ 0x14093B9A0
 * Callers:
 *     FsRtlDedupChangeInit @ 0x14093B690 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x14053CC04 (McTemplateK0jq_EtwWriteTransfer.c)
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpDedupChangeRegisterVolume(__int64 a1, const GUID *a2, unsigned int *a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  __int64 Pool2; // r8
  int v9; // ebx
  __int64 *v10; // rax
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int64 *v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = FsRtlDedupChangeData; (__int64 *)i != &FsRtlDedupChangeData; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*(_DWORD *)(i + 16);
      *a3 = *(_DWORD *)(i + 36);
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(258LL, 40LL, 1749247300LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_22;
  }
  v10 = (__int64 *)FsRtlDedupChangeData;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v10 != &FsRtlDedupChangeData )
  {
    if ( *((_DWORD *)v10 + 9) == v11 )
    {
      if ( !++v11 )
        v10 = &FsRtlDedupChangeData;
    }
    else if ( *((_DWORD *)v10 + 9) > v11 )
    {
      break;
    }
    v10 = (__int64 *)*v10;
  }
  v12 = *(_OWORD *)a1;
  *(_DWORD *)(Pool2 + 36) = v11;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_OWORD *)(Pool2 + 20) = v12;
  v13 = (__int64 *)v10[1];
  if ( (__int64 *)*v13 != v10 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v10;
  *(_QWORD *)(Pool2 + 8) = v13;
  *v13 = Pool2;
  v10[1] = Pool2;
  *a3 = v11;
  if ( !MS_Dedup_Change_Provider_Context[0] )
    EtwRegister(
      &MS_Dedup_Change_Provider,
      (PETWENABLECALLBACK)FsRtlpDedupChangeEventsControlCallbackV2,
      MS_Dedup_Change_Provider_Context,
      MS_Dedup_Change_Provider_Context);
LABEL_21:
  v9 = 0;
LABEL_22:
  ExReleaseResourceLite(&Resource);
  if ( v9 >= 0 )
  {
    if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 1) != 0 )
    {
      LODWORD(v15) = *a3;
      McTemplateK0jq_EtwWriteTransfer(
        MS_Dedup_Change_Provider_Context,
        (const EVENT_DESCRIPTOR *)TieredStorage_NewVolume,
        a2,
        a1,
        v15);
    }
    ZwUpdateWnfStateData((__int64)&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL);
  }
  return (unsigned int)v9;
}
