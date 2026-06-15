/*
 * XREFs of sub_18006DE20 @ 0x18006DE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_18006D234 @ 0x18006D234 (sub_18006D234.c)
 */

__int64 __fastcall sub_18006DE20(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 408), &v6);
  if ( a2 )
    sub_18006D234((volatile signed __int32 *)(a2 + 52));
  v4 = sub_180008EAC(0x10uLL);
  v4[1] = a2;
  *v4 = *(_QWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 448) = v4;
  sub_180023350(&v6);
  return 0LL;
}
