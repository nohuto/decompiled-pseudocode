/*
 * XREFs of ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x1405C0AA0
 * Callers:
 *     SmQueryStoreCommitUsage @ 0x1405C7730 (SmQueryStoreCommitUsage.c)
 *     SmProcessQueryStoreStats @ 0x1408A1FF4 (SmProcessQueryStoreStats.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140397D08 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 */

__int64 __fastcall SmpProcessQueryStoreStats(struct _EPROCESS *a1, struct _ST_STATS *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  int v4; // ebx
  int v5; // esi
  __int64 *v6; // rax
  unsigned int StoreStats; // ebx
  BOOLEAN v8; // al
  struct _EPROCESS *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v2 = *((_QWORD *)a1->PartitionObject + 3);
  if ( a1 != *(struct _EPROCESS **)(v2 + 2008) )
  {
    v10 = a1;
    v3 = SmpKeyedStoreEntryGet(v2 + 2072, &v10, 0, 0);
    if ( v3 )
    {
      LOWORD(v4) = *(_WORD *)(v3 + 16);
      v5 = 0;
      goto LABEL_4;
    }
    return (unsigned int)-1073741275;
  }
  v4 = *(_DWORD *)(v2 + 2112);
  if ( v4 == -1 )
    return (unsigned int)-1073741275;
  v8 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 1952));
  v5 = v8;
  if ( !v8 )
    return (unsigned int)-1073740640;
LABEL_4:
  v6 = (__int64 *)SmKmStoreRefFromStoreIndex(v2, v4 & 0x3FF);
  StoreStats = SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*v6);
  if ( v5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v2 + 1952));
  return StoreStats;
}
