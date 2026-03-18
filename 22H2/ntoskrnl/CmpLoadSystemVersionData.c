/*
 * XREFs of CmpLoadSystemVersionData @ 0x14080F630
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlCompareUnicodeString @ 0x1406DA1F0 (RtlCompareUnicodeString.c)
 *     CmpLoadLayerVersions @ 0x14080F858 (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x140810E1C (CmpMergeVersionDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  __int64 *v0; // rdi
  NTSTATUS result; // eax
  int LayerVersions; // esi
  int i; // r14d
  __int64 v4; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  KeyHandle = 0LL;
  v0 = CmpLayerVersions;
  CmpEditionVersion = 0LL;
  memset(CmpLayerVersions, 0, 0x80uLL);
  CmpLayerVersionCount = 0;
  memset(P, 0, sizeof(P));
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140002070);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(CmpLayerVersions, (__int64)&CmpBuildLayersString, 4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, (__int64)&CmpServicingLayersString, 64);
      if ( CmpLayerVersions[0] && (*(_DWORD *)(CmpLayerVersions[0] + 800) & 1) != 0 )
        CmpEditionVersion = CmpLayerVersions[0];
      for ( i = 0; i < CmpLayerVersionCount; ++v0 )
        ++i;
      if ( CmpEditionVersion )
      {
        v4 = CmpEditionVersion;
        NtBuildNumber = *(_DWORD *)(CmpEditionVersion + 8) | 0xF0000000;
        *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(CmpEditionVersion + 8);
        NtBuildQfe = *(_DWORD *)(v4 + 12);
      }
      LayerVersions = 0;
    }
    ZwClose(KeyHandle);
    return LayerVersions;
  }
  return result;
}
