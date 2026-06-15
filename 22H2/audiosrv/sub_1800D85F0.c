/*
 * XREFs of sub_1800D85F0 @ 0x1800D85F0
 * Callers:
 *     sub_1800D8150 @ 0x1800D8150 (sub_1800D8150.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D85F0(__int64 a1, int a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 1LL, &v7);
    if ( v3 >= 0 )
    {
      LOWORD(pvar[0]) = 19;
      if ( a2 )
        LOWORD(pvar[1]) = 7;
      else
        LOWORD(pvar[1]) = 0;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v7 + 48LL))(v7, &unk_180172CE8, pvar);
    }
  }
  else
  {
    v3 = -2147024809;
  }
  PropVariantClear(pvar);
  if ( v3 < 0 )
    sub_18005E8F8((__int64)"SetNeverSetAsDefaultProperty", 2518, v3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
