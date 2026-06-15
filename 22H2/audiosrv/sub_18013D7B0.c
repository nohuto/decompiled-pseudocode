/*
 * XREFs of sub_18013D7B0 @ 0x18013D7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 */

_BOOL8 __fastcall sub_18013D7B0(struct _RTL_CRITICAL_SECTION *a1)
{
  BOOL v2; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, a1 + 2);
  v2 = a1[1].SpinCount != 0;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
