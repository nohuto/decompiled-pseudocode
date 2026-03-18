/*
 * XREFs of _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C01205F0
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_ @ 0x1C023C9E0 (_lambda_88f23c52c0dc3ab6faf80570be987f32_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 <= *((_BYTE *)&unk_1C032CF48 + a3 + 12)
      && a2 >= *((_BYTE *)&unk_1C032CF48 + a3);
}
