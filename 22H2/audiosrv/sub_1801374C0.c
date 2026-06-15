/*
 * XREFs of sub_1801374C0 @ 0x1801374C0
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_180136500 @ 0x180136500 (sub_180136500.c)
 * Callees:
 *     sub_1800308A0 @ 0x1800308A0 (sub_1800308A0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180060060 @ 0x180060060 (sub_180060060.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801374C0(__int64 a1, _WORD *a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // r8
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-28h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v9 = v6;
  sub_180060060(v10, a2);
  sub_1800308A0((_QWORD *)(a1 + 464), &v9, (char *)v10);
  if ( v11 >= 8 )
    sub_1800472E0(v10[0], 2 * v11 + 2);
  if ( v9 != *(struct _RTL_CRITICAL_SECTION **)(a1 + 472) )
  {
    v7 = *(_QWORD *)&v9[1].LockCount;
    *(_QWORD *)&v9[1].LockCount = *a3;
    *a3 = v7;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
