/*
 * XREFs of sub_180062288 @ 0x180062288
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FABF8 @ 0x1800FABF8 (sub_1800FABF8.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FC184 @ 0x1800FC184 (sub_1800FC184.c)
 *     sub_1800FDD70 @ 0x1800FDD70 (sub_1800FDD70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180062288(__int64 a1, PROPVARIANT *a2, _BYTE *a3)
{
  __int64 v6; // rcx
  char v7; // bl
  LPVOID v9; // rax
  void *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  PROPVARIANT v14[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-10h]
  LPVOID pv; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0LL;
  v11 = 0LL;
  v7 = 0;
  *(_OWORD *)pvar = 0LL;
  v13 = 0LL;
  *(_OWORD *)v14 = 0LL;
  v15 = 0LL;
  if ( a3 )
    *a3 = 0;
  if ( a2 && a1 )
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v11) >= 0
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_18015C928, v14) >= 0
      && LOWORD(v14[0]) == 11
      && LOWORD(v14[1]) == 0xFFFF
      && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(v11, &unk_1801607E0, pvar) >= 0 )
    {
      if ( LOWORD(pvar[0]) == 31 )
      {
        *a2 = pvar[1];
        LOWORD(pvar[0]) = 0;
        v7 = 1;
      }
      else if ( !LOWORD(pvar[0]) )
      {
        ppv = 0LL;
        v17 = 0LL;
        pv = 0LL;
        if ( CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv) < 0
          || (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v17) < 0
          || (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &pv) < 0 )
        {
          v10 = pv;
        }
        else
        {
          v9 = pv;
          pv = 0LL;
          *a2 = v9;
          v7 = 1;
          if ( a3 )
            *a3 = 1;
          v10 = 0LL;
        }
        CoTaskMemFree(v10);
        pv = 0LL;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( ppv )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      }
    }
    PropVariantClear(pvar);
    PropVariantClear(v14);
    v6 = v11;
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
