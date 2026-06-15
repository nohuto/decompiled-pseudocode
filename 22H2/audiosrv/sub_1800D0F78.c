/*
 * XREFs of sub_1800D0F78 @ 0x1800D0F78
 * Callers:
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 *     sub_180112C10 @ 0x180112C10 (sub_180112C10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D12E4 @ 0x1800D12E4 (sub_1800D12E4.c)
 */

void __fastcall sub_1800D0F78(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = a2[2];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a2 = a1[4];
  a1[4] = a2;
  if ( a1[2]-- == 1LL )
    sub_1800D12E4(a1);
}
