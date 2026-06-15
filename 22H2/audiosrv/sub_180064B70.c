/*
 * XREFs of sub_180064B70 @ 0x180064B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180064BF0 @ 0x180064BF0 (sub_180064BF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180064B70(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi

  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  if ( a2 )
    sub_180064BF0(a1 + 24, a2);
  else
    v4 = -2147024809;
  LeaveCriticalSection(v5);
  return v4;
}
