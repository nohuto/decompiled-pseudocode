/*
 * XREFs of sub_18010F6C0 @ 0x18010F6C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18011020C @ 0x18011020C (sub_18011020C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010F6C0(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( *(_QWORD *)(a1 + 40) && *(_DWORD *)(a1 + 68) && a3 == 2 )
    sub_18011020C(a1, a2, a4);
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
