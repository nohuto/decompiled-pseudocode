/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800271F4
 * Callers:
 *     ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1800ABA84 (-AddAndSet@-$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x1800C149C (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x180027268 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArrayImpl<1>::AddMultiple(__int64 a1, int a2, int a3, _QWORD *a4)
{
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi

  v8 = DynArrayImpl<1>::Grow(a1, a2, a3, 0, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x191u, 0LL);
  }
  else
  {
    if ( a4 )
      *a4 = *(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 24) * a2);
    *(_DWORD *)(a1 + 24) += a3;
  }
  return v10;
}
