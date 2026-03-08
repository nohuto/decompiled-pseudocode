/*
 * XREFs of _lambda_88f23c52c0dc3ab6faf80570be987f32_::operator() @ 0x1C00F0C8C
 * Callers:
 *     _lambda_88f23c52c0dc3ab6faf80570be987f32_::_lambda_invoker_cdecl_ @ 0x1C00F0C70 (_lambda_88f23c52c0dc3ab6faf80570be987f32_--_lambda_invoker_cdecl_.c)
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_88f23c52c0dc3ab6faf80570be987f32_::operator()(__int64 a1, unsigned __int8 a2, int a3)
{
  return (unsigned int)a2 <= *(_DWORD *)(gpDispInfo + 136LL)
      && a2 <= *((_BYTE *)&unk_1C035C1E0 + a3 + 12)
      && a2 >= *((_BYTE *)&unk_1C035C1E0 + a3);
}
