/*
 * XREFs of sub_1800FD274 @ 0x1800FD274
 * Callers:
 *     sub_1800F9ED0 @ 0x1800F9ED0 (sub_1800F9ED0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FD0E8 @ 0x1800FD0E8 (sub_1800FD0E8.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800FD274(__int64 a1)
{
  char v2; // si
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // zf
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v12[24]; // [rsp+38h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]
  unsigned int v15; // [rsp+C0h] [rbp+48h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(_BYTE *)(a1 + 352);
  v3 = *(_QWORD *)(a1 + 64);
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, 0LL, 15LL, &v11) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v15) >= 0 )
  {
    for ( i = 0; i < v15; ++i )
    {
      v17 = 0LL;
      pv = 0LL;
      *(_OWORD *)pvar = 0LL;
      v14 = 0LL;
      v18 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, i, &v18) >= 0 )
      {
        v5 = v18;
        sub_18002A504(&pv, 0LL);
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v5 + 40LL))(v5, &pv) >= 0 )
        {
          v6 = v18;
          v7 = v17;
          v17 = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          if ( (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, 2LL, &v17) >= 0
            && sub_1800FD0E8(v8, v18)
            && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
                 v17,
                 &unk_18015C928,
                 pvar) >= 0 )
          {
            v9 = LOWORD(pvar[0]) == 11 ? LOWORD(pvar[1]) == 0xFFFF : v2 == 0;
            if ( v9 != v2 )
            {
              LOWORD(pvar[0]) = 11;
              LOWORD(pvar[1]) = -1;
              if ( !v2 )
                LOWORD(pvar[1]) = 0;
              if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v17 + 48LL))(
                     v17,
                     &unk_18015C928,
                     pvar) >= 0 )
                sub_1800FDD70(a1, pv, v12);
            }
          }
        }
      }
      PropVariantClear(pvar);
      if ( pv )
        CoTaskMemFree(pv);
      sub_18000F708(&v17);
      sub_18000F708(&v18);
    }
  }
  return sub_18000F708(&v11);
}
