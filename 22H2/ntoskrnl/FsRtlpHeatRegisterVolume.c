/*
 * XREFs of FsRtlpHeatRegisterVolume @ 0x14088D118
 * Callers:
 *     FsRtlHeatInit @ 0x14088CE80 (FsRtlHeatInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     McGenEventRegister_EtwRegister @ 0x1403B6D08 (McGenEventRegister_EtwRegister.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x1404F0E90 (McTemplateK0jq_EtwWriteTransfer.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall FsRtlpHeatRegisterVolume(__int64 a1, const GUID *a2, _DWORD *a3)
{
  __int64 i; // r9
  __int64 v7; // rcx
  _OWORD *PoolWithTag; // r8
  int v9; // ebx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 **v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *ExplicitScope; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = FsRtlTieringHeatData; (__int64 *)i != &FsRtlTieringHeatData; i = *(_QWORD *)i )
  {
    v7 = *(_QWORD *)(i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(_QWORD *)(i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*(_DWORD *)(i + 16);
      *a3 = *(_DWORD *)(i + 36);
      goto LABEL_20;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x68745346u);
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_21;
  }
  v10 = (__int64 *)FsRtlTieringHeatData;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v10 != &FsRtlTieringHeatData )
  {
    if ( *((_DWORD *)v10 + 9) == (_DWORD)v11 )
    {
      v11 = (unsigned int)(v11 + 1);
      if ( !(_DWORD)v11 )
        v10 = &FsRtlTieringHeatData;
    }
    else if ( *((_DWORD *)v10 + 9) > (unsigned int)v11 )
    {
      break;
    }
    v10 = (__int64 *)*v10;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  v12 = *(_OWORD *)a1;
  *((_DWORD *)PoolWithTag + 9) = v11;
  *((_DWORD *)PoolWithTag + 4) = 1;
  *(_OWORD *)((char *)PoolWithTag + 20) = v12;
  v13 = (__int64 **)v10[1];
  if ( *v13 != v10 )
    __fastfail(3u);
  *((_QWORD *)PoolWithTag + 1) = v13;
  *(_QWORD *)PoolWithTag = v10;
  *v13 = (__int64 *)PoolWithTag;
  v10[1] = (__int64)PoolWithTag;
  *a3 = v11;
  McGenEventRegister_EtwRegister(
    (const GUID *)MS_StorageTiering_Provider,
    v11,
    MS_StorageTiering_Provider_Context,
    MS_StorageTiering_Provider_Context);
LABEL_20:
  v9 = 0;
LABEL_21:
  ExReleaseResourceLite(&Resource);
  if ( v9 >= 0 )
  {
    if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 1) != 0 )
    {
      LODWORD(ExplicitScope) = *a3;
      McTemplateK0jq_EtwWriteTransfer(v15, v14, a2, a1, (__int64)ExplicitScope);
    }
    ZwUpdateWnfStateData(&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v9;
}
