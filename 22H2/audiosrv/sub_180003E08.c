/*
 * XREFs of sub_180003E08 @ 0x180003E08
 * Callers:
 *     sub_180002040 @ 0x180002040 (sub_180002040.c)
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_180003D20 @ 0x180003D20 (sub_180003D20.c)
 *     sub_180035850 @ 0x180035850 (sub_180035850.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_1800C6108 @ 0x1800C6108 (sub_1800C6108.c)
 *     sub_1800C7DB0 @ 0x1800C7DB0 (sub_1800C7DB0.c)
 *     sub_1800C7E70 @ 0x1800C7E70 (sub_1800C7E70.c)
 *     sub_1800C8320 @ 0x1800C8320 (sub_1800C8320.c)
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800CADB4 @ 0x1800CADB4 (sub_1800CADB4.c)
 *     sub_1800CF240 @ 0x1800CF240 (sub_1800CF240.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 *     sub_1800D4504 @ 0x1800D4504 (sub_1800D4504.c)
 *     sub_1800D4D18 @ 0x1800D4D18 (sub_1800D4D18.c)
 *     sub_1800FD670 @ 0x1800FD670 (sub_1800FD670.c)
 *     sub_1800FE8AC @ 0x1800FE8AC (sub_1800FE8AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_180003E08(_QWORD *a1, __int64 a2)
{
  if ( !a2 )
    sub_1800B8610(2147500037LL);
  *a1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2) + 24;
  return a1;
}
