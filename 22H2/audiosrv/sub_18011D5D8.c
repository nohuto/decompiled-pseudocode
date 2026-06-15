/*
 * XREFs of sub_18011D5D8 @ 0x18011D5D8
 * Callers:
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011D5D8(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v2 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(v1, &unk_18015B5F8, pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v2 = 0;
  }
  PropVariantClear(pvar);
  return v2;
}
