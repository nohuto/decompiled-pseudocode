/*
 * XREFs of sub_180068410 @ 0x180068410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180068410(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  __int64 result; // rax

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v1 )
    LeaveCriticalSection(v1);
  result = 0LL;
  *(_DWORD *)(a1 + 96) = 1;
  return result;
}
