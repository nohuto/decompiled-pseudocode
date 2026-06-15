/*
 * XREFs of sub_1800D0EFC @ 0x1800D0EFC
 * Callers:
 *     sub_1800D6BCC @ 0x1800D6BCC (sub_1800D6BCC.c)
 * Callees:
 *     sub_1800CE808 @ 0x1800CE808 (sub_1800CE808.c)
 */

void __fastcall sub_1800D0EFC(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v5; // rsi
  __int64 *i; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = *(__int64 **)(a1 + 64);
  for ( i = *(__int64 **)(a1 + 56); i != v5; ++i )
    sub_1800CE808(*i, a2, 0);
  if ( v2 )
    LeaveCriticalSection(v2);
}
