/*
 * XREFs of ?RmpActivityHostGetCommitLevel@@YA?AW4_RM_COMMIT_LEVEL@@PEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180007A08
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007920 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityHostGetCommitLevel(unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 < *a1 )
    return 1LL;
  if ( a2 < a1[1] )
    return 2LL;
  return 4 - (unsigned int)(a2 < a1[2]);
}
