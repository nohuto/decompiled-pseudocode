/*
 * XREFs of ?IsSpace@CRegParser@ATL@@IEAAHG@Z @ 0x14005D8D4
 * Callers:
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14005D900 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x14005F2C0 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ATL::CRegParser::IsSpace(ATL::CRegParser *this, unsigned __int16 a2)
{
  return a2 >= 9u && (a2 <= 0xAu || a2 == 13 || a2 == 32);
}
