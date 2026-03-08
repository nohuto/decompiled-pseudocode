/*
 * XREFs of CmpLoadSystemVersionData @ 0x14081469C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     CmpMergeVersionDescriptors @ 0x14081323C (CmpMergeVersionDescriptors.c)
 *     CmpLoadLayerVersions @ 0x1408148C4 (CmpLoadLayerVersions.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  memset(CmpLayerVersions, 0, sizeof(CmpLayerVersions));
  CmpLayerVersionCount = 0;
  memset(P, 0, sizeof(P));
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140005A90);
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
