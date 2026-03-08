/*
 * XREFs of umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___ @ 0x1C017FA30
 * Callers:
 *     ?bXformRound@EXFORMOBJ@@QEAAHAEAV?$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z @ 0x1C017FF8C (-bXformRound@EXFORMOBJ@@QEAAHAEAV-$umptr_r@U_POINTL@@@@PEAU_POINTFIX@@_K@Z.c)
 * Callees:
 *     ?internal_get_bytecount@?$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z @ 0x1C01800B4 (-internal_get_bytecount@-$umptr@U_POINTL@@@@IEBA_KAEB_K0@Z.c)
 *     ?internal_get_offset@?$umptr@U_POINTL@@@@IEBA_KAEB_J@Z @ 0x1C01800FC (-internal_get_offset@-$umptr@U_POINTL@@@@IEBA_KAEB_J@Z.c)
 */

char __fastcall umptr_r__POINTL_::enumerate__POINTFIX__lambda_1867cd5895269d65287c9f43997bc2e1___(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 i; // rdi
  __int64 v9; // rbx
  unsigned __int64 v10; // r11
  __int64 v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v12 = a1[2];
  umptr<_POINTL>::internal_get_bytecount(a1, &v14, &v12);
  if ( *((_BYTE *)a1 + 25) || *((_BYTE *)a1 + 24) )
    return 0;
  for ( i = 0LL; ; ++i )
  {
    v13[1] = i;
    if ( i >= a3 )
      break;
    v9 = *a1;
    v13[0] = 0LL;
    v10 = i + umptr<_POINTL>::internal_get_offset(a1, v13);
    LODWORD(v11) = 16 * *(_DWORD *)(v9 + 8 * v10);
    HIDWORD(v11) = 16 * *(_DWORD *)(v9 + 8 * v10 + 4);
    *(_QWORD *)(a2 + 8 * i) = v11;
  }
  return 1;
}
