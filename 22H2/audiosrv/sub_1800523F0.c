/*
 * XREFs of sub_1800523F0 @ 0x1800523F0
 * Callers:
 *     sub_1800523E0 @ 0x1800523E0 (sub_1800523E0.c)
 * Callees:
 *     sub_18005244C @ 0x18005244C (sub_18005244C.c)
 */

void __fastcall sub_1800523F0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 616);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 616));
  if ( *(_DWORD *)(a1 + 408) != 2 )
    sub_18005244C(a1);
  if ( v1 )
    LeaveCriticalSection(v1);
}
