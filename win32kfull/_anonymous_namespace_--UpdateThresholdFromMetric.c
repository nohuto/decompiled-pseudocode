/*
 * XREFs of _anonymous_namespace_::UpdateThresholdFromMetric @ 0x1C01027F0
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x1C0102EC8 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 * Callees:
 *     UpdateWinIniInt @ 0x1C01C9800 (UpdateWinIniInt.c)
 */

bool __fastcall anonymous_namespace_::UpdateThresholdFromMetric(
        char a1,
        bool *a2,
        bool *a3,
        BOOL a4,
        unsigned __int8 a5,
        BOOL a6)
{
  bool result; // al

  result = a4;
  if ( a1 )
  {
    result = (unsigned int)UpdateWinIniInt(0LL, 12LL, a4, a5) != 0;
    *a2 = result;
    *a3 = result;
  }
  if ( *a3 )
  {
    result = a6;
    *((_BYTE *)&unk_1C035C1E0 + 4 * a6) = a5;
    *((_BYTE *)&unk_1C035C1E0 + 4 * a6 + 1) = a5;
    *((_BYTE *)&unk_1C035C1E0 + 4 * a6 + 2) = a5;
    *((_BYTE *)&unk_1C035C1E0 + 4 * a6 + 3) = a5;
  }
  return result;
}
