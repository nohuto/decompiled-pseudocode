/*
 * XREFs of CmpCleanupKcbStack @ 0x1407836C4
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
