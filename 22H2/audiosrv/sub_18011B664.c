/*
 * XREFs of sub_18011B664 @ 0x18011B664
 * Callers:
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_18011B664(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // bl
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 1;
  if ( v1 )
  {
    v5 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(v1, &unk_18015EB20, pvar) >= 0
      && ((LOWORD(pvar[0]) - 11) & 0xFFF7) == 0 )
    {
      v2 = LOWORD(pvar[1]) != 0;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
