/*
 * XREFs of sub_18011A2EC @ 0x18011A2EC
 * Callers:
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011A2EC(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  if ( v1 )
  {
    v5 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(v1, &unk_180172B68, pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      LOBYTE(v2) = LODWORD(pvar[1]) == 1;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
