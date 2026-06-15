/*
 * XREFs of sub_180066910 @ 0x180066910
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066910(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, __int64 *, _QWORD *); // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  sub_180066980(&lpCriticalSection, a1 + 80);
  v4 = 0;
  if ( a2 && (*a2 = 0LL, (v5 = *(void (__fastcall ****)(_QWORD, __int64 *, _QWORD *))(a1 + 72)) != 0LL) )
    (**v5)(v5, &qword_18015F820, a2);
  else
    v4 = -2147467261;
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
