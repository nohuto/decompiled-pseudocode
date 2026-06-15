/*
 * XREFs of sub_180043CD0 @ 0x180043CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180043CD0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  __int64 v7; // rcx

  v4 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v4;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *(_DWORD *)(a1 + 220) = a3;
  *(_QWORD *)(a2 + 48) = 0LL;
  return 0LL;
}
