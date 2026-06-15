/*
 * XREFs of sub_18012C7F0 @ 0x18012C7F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012C7F0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  *(_DWORD *)(a1 + 52) = -1073741823;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    sub_180033A70((void *)a1);
  return a1;
}
