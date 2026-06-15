/*
 * XREFs of sub_1800FE400 @ 0x1800FE400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FE400(__int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_DWORD *)(a1 + 16) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
  }
  return 0LL;
}
