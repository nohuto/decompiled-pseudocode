/*
 * XREFs of _lambda_0336b3a089846025bc79125dee2480fe_::operator() @ 0x1C00F0DAC
 * Callers:
 *     _lambda_0336b3a089846025bc79125dee2480fe_::_lambda_invoker_cdecl_ @ 0x1C00F0D90 (_lambda_0336b3a089846025bc79125dee2480fe_--_lambda_invoker_cdecl_.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_0336b3a089846025bc79125dee2480fe_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 >= *((_BYTE *)&unk_1C035C1E0 + a3 + 8)
      && a2 >= *((_BYTE *)&unk_1C035C1E0 + a3 + 4);
}
