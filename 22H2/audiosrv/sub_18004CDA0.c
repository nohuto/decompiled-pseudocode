/*
 * XREFs of sub_18004CDA0 @ 0x18004CDA0
 * Callers:
 *     sub_18002E7C0 @ 0x18002E7C0 (sub_18002E7C0.c)
 * Callees:
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 */

void __fastcall sub_18004CDA0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 432);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 432));
  sub_18006DFE8(a1 + 472);
  if ( v1 )
    LeaveCriticalSection(v1);
}
