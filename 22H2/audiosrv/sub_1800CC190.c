/*
 * XREFs of sub_1800CC190 @ 0x1800CC190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CC190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  if ( v4 <= 0x3E8 )
  {
    LOBYTE(a4) = 1;
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 72) + 264LL))(
             *(_QWORD *)(a1 + 72),
             a2,
             a3,
             a4);
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      267,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      -2147024809);
    return 2147942487LL;
  }
}
