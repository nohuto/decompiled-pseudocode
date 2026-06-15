/*
 * XREFs of sub_1800FBE80 @ 0x1800FBE80
 * Callers:
 *     sub_18006224C @ 0x18006224C (sub_18006224C.c)
 *     sub_1800FED78 @ 0x1800FED78 (sub_1800FED78.c)
 *     sub_1800FEE1C @ 0x1800FEE1C (sub_1800FEE1C.c)
 * Callees:
 *     sub_18006224C @ 0x18006224C (sub_18006224C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FBE80(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  *(_QWORD *)(a1 + 32) = a2;
  if ( (*(_QWORD *)(a1 + 16))-- == 1LL )
    return sub_18006224C(a1);
  return result;
}
