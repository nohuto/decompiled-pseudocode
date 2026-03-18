/*
 * XREFs of _lambda_17ffa216705245d0294b2aa95ba432df_::operator() @ 0x1C0120628
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_17ffa216705245d0294b2aa95ba432df_::_lambda_invoker_cdecl_ @ 0x1C023C980 (_lambda_17ffa216705245d0294b2aa95ba432df_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_17ffa216705245d0294b2aa95ba432df_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 >= *((_BYTE *)&unk_1C032CF48 + a3 + 16)
      && a2 >= *((_BYTE *)&unk_1C032CF48 + a3 + 4);
}
