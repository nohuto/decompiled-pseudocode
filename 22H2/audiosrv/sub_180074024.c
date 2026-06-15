/*
 * XREFs of sub_180074024 @ 0x180074024
 * Callers:
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

char __fastcall sub_180074024(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx

  result = sub_180009DE0(a1);
  if ( result )
  {
    v3 = *(_QWORD *)(a1 + 248);
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 256) )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 248) + 80LL))(
          *(_QWORD *)(a1 + 248),
          *(_QWORD *)(a1 + 256));
        *(_QWORD *)(a1 + 256) = 0LL;
      }
    }
    return sub_1800CB144(a1 + 248);
  }
  return result;
}
