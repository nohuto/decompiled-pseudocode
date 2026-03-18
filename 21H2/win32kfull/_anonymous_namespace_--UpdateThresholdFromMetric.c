/*
 * XREFs of _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C0114DE8
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C00A1484 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C0158014 (UpdateWinIniInt.c)
 */

char __fastcall anonymous_namespace_::UpdateThresholdFromMetric(
        char a1,
        _BYTE *a2,
        char *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  char result; // al

  if ( a1 )
  {
    result = (unsigned int)UpdateWinIniInt(0LL, 12LL, a4, a5) != 0;
    *a2 = result;
    *a3 = result;
  }
  else
  {
    result = *a3;
  }
  if ( result )
  {
    result = a6;
    *((_BYTE *)&unk_1C032CF48 + 4 * a6) = a5;
    *((_BYTE *)&unk_1C032CF48 + 4 * a6 + 1) = a5;
    *((_BYTE *)&unk_1C032CF48 + 4 * a6 + 2) = a5;
    *((_BYTE *)&unk_1C032CF48 + 4 * a6 + 3) = a5;
  }
  return result;
}
