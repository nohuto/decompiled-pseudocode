/*
 * XREFs of sub_180128EB0 @ 0x180128EB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18012BBC8 @ 0x18012BBC8 (sub_18012BBC8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180128EB0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  *(_OWORD *)(a1 - 24) = 0LL;
  *(_QWORD *)(a1 - 8) = 0LL;
  v3 = sub_18012BBC8(a1 - 568);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
