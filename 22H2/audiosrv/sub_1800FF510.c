/*
 * XREFs of sub_1800FF510 @ 0x1800FF510
 * Callers:
 *     sub_1800FFAD8 @ 0x1800FFAD8 (sub_1800FFAD8.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FF510(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+50h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF

  v9 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 40LL))(v2, a2, &v10);
  if ( v3 >= 0 )
  {
    v4 = v10;
    v5 = v9;
    v9 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, 1LL, &v9);
    if ( v3 >= 0 )
    {
      LOWORD(pvar[0]) = 11;
      LOWORD(pvar[1]) = -1;
      v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 48LL))(v9, &unk_180172DA8, pvar);
    }
  }
  PropVariantClear(pvar);
  sub_18000F708(&v9);
  sub_18000F708(&v10);
  return (unsigned int)v3;
}
