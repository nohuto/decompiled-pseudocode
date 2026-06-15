/*
 * XREFs of sub_18005E178 @ 0x18005E178
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FC184 @ 0x1800FC184 (sub_1800FC184.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FD038 @ 0x1800FD038 (sub_1800FD038.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_18005E178(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // di
  __int64 v8; // rcx
  __int64 v9; // rbx
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  PROPVARIANT v12[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h]
  LPVOID v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0LL;
  pv = 0LL;
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v15 = 0LL;
  v6 = 0;
  if ( a3 && a2 )
  {
    *a3 = 0LL;
    if ( *(_BYTE *)(a1 + 352) )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 0LL, &v11) >= 0
        && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_18015C928, pvar) >= 0
        && LOWORD(pvar[0]) == 11
        && LOWORD(pvar[1]) == 0xFFFF )
      {
        if ( (unsigned __int8)sub_1800FD038(a1, a2) )
        {
          sub_18002A504(&pv, 0LL);
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv) >= 0
            && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_1801607E0, v12) >= 0
            && LOWORD(v12[0]) == 31
            && v12[1] )
          {
            v16 = 0LL;
            v8 = *(_QWORD *)(a1 + 64);
            v17 = 0LL;
            if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 0LL, 0LL, &v17) >= 0 )
            {
              v9 = v17;
              sub_18002A504(&v16, 0LL);
              if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &v16) >= 0
                && !(unsigned int)o__wcsicmp(pv, v16)
                && (unsigned int)o__wcsicmp(pv, v12[1]) )
              {
                *a3 = v12[1];
                LOWORD(v12[0]) = 0;
                v6 = 1;
              }
            }
            if ( v16 )
              CoTaskMemFree(v16);
            sub_18000F708(&v17);
          }
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  PropVariantClear(pvar);
  PropVariantClear(v12);
  if ( pv )
    CoTaskMemFree(pv);
  sub_18000F708(&v11);
  return v6;
}
