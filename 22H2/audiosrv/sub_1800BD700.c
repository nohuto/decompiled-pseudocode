/*
 * XREFs of sub_1800BD700 @ 0x1800BD700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180046480 @ 0x180046480 (sub_180046480.c)
 */

void __fastcall sub_1800BD700(struct _RTL_CRITICAL_SECTION *a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  sub_180046480(&a1->SpinCount);
  if ( v1 )
    LeaveCriticalSection(v1);
}
