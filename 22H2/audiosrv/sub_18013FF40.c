/*
 * XREFs of sub_18013FF40 @ 0x18013FF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall sub_18013FF40(__int64 a1)
{
  BOOL v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+28h] [rbp-20h]
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  sub_180066980((__int64)&v6, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 48));
  v2 = *(_QWORD *)(a1 + 104) || *(_QWORD *)(a1 + 192);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 )
    LeaveCriticalSection(v6);
  return v2;
}
