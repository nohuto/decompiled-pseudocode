/*
 * XREFs of ?internal_get_bytecount@?$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z @ 0x1C01800B4
 * Callers:
 *     umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___ @ 0x1C017FA30 (umptr_r__POINTL_--enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___.c)
 *     umptr_r__POINTL_::enumerate__POINTFIX__lambda_7f7dd7d542b1a81b17ae61408d3670f9___ @ 0x1C01802A8 (umptr_r__POINTL_--enumerate__POINTFIX__lambda_7f7dd7d542b1a81b17ae61408d3670f9___.c)
 *     ??$read@U_POINTFIX@@@?$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z @ 0x1C0180398 (--$read@U_POINTFIX@@@-$umptr_r@U_POINTL@@@@QEBA_NPEAU_POINTFIX@@_K_J@Z.c)
 * Callees:
 *     ULongLongMult @ 0x1C0180240 (ULongLongMult.c)
 */

ULONGLONG __fastcall umptr<_POINTL>::internal_get_bytecount(__int64 a1, ULONGLONG *a2, _QWORD *a3)
{
  __int64 v3; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v3 = a1;
  if ( *a2 > *(_QWORD *)(a1 + 8) - *a3 || ULongLongMult(*a2, 8uLL, &pullResult) < 0 )
    *(_BYTE *)(v3 + 24) = 1;
  return pullResult;
}
