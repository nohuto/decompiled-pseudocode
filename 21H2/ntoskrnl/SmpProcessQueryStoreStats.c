/*
 * XREFs of SmpProcessQueryStoreStats @ 0x14059D288
 * Callers:
 *     SmQueryStoreCommitUsage @ 0x14059D1F0 (SmQueryStoreCommitUsage.c)
 *     SmProcessQueryStoreStats @ 0x140929FF0 (SmProcessQueryStoreStats.c)
 * Callees:
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14024A6DC (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     SmpKeyedStoreEntryGet @ 0x140287698 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(PVOID a1)
{
  __int64 v1; // rax
  int v3; // edx
  __int64 *v4; // rax
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( a1 == qword_140D24158 )
  {
    v3 = dword_140D241B0;
  }
  else
  {
    v5 = a1;
    v1 = SmpKeyedStoreEntryGet((ULONG_PTR)qword_140D24188, &v5, 0, 0);
    if ( !v1 )
      return 3221226021LL;
    v3 = *(unsigned __int16 *)(v1 + 16);
  }
  if ( v3 == -1 )
    return 3221226021LL;
  v4 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v3 & 0x3FF);
  return SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v4);
}
