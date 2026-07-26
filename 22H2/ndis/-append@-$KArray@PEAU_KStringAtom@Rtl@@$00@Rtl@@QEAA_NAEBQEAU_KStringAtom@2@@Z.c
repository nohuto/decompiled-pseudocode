/*
 * XREFs of ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C01250B8
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C0124528 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033.c)
 *     ndisLoadNamedFilterAltitudes @ 0x1C0126054 (ndisLoadNamedFilterAltitudes.c)
 * Callees:
 *     ?grow@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0125198 (-grow@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@AEAA_N_K@Z.c)
 */

char __fastcall Rtl::KArray<Rtl::_KStringAtom *,1>::append(__int64 a1, _QWORD *a2)
{
  char result; // al

  result = Rtl::KArray<Rtl::_KStringAtom *,1>::grow(a1, (unsigned int)(*(_DWORD *)(a1 + 4) + 1));
  if ( result )
  {
    result = 1;
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 4))++) = *a2;
  }
  return result;
}
