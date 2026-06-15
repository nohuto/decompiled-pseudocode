/*
 * XREFs of sub_18012A2E0 @ 0x18012A2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012A2E0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 40LL))(*(_QWORD *)(a1 + 88));
}
