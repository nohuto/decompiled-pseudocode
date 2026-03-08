/*
 * XREFs of ?MustUpdateExpressions@CExpressionManager@@QEBA_NXZ @ 0x180052780
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180051314 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180052E70 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CExpressionManager::MustUpdateExpressions(CExpressionManager *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 64) || (*((_BYTE *)this + 448) & 2) != 0 || *((_DWORD *)this + 40) )
    return 1;
  return result;
}
