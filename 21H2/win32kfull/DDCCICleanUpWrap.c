/*
 * XREFs of DDCCICleanUpWrap @ 0x1C0120C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorAPI@@QEAA@XZ @ 0x1C0120C54 (--1CMonitorAPI@@QEAA@XZ.c)
 */

void DDCCICleanUpWrap()
{
  PVOID v0; // rbx

  v0 = P;
  if ( P )
  {
    CMonitorAPI::~CMonitorAPI((CMonitorAPI *)P);
    ExFreePoolWithTag(v0, 0x63326947u);
  }
  P = 0LL;
}
