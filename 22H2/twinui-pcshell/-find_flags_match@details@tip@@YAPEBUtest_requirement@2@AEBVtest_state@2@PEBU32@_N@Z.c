/*
 * XREFs of ?find_flags_match@details@tip@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x1800ACD60
 * Callers:
 *     ?evaluate_flags@details@tip@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800ACC98 (-evaluate_flags@details@tip@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 * Callees:
 *     <none>
 */

const struct tip::test_requirement *__fastcall tip::details::find_flags_match(
        tip::details *this,
        const struct tip::test_state *a2,
        const struct tip::test_requirement *a3)
{
  _WORD *v3; // r11
  _WORD *v4; // r9
  const struct tip::test_state *v5; // r10
  _WORD *v6; // rax

  v3 = (_WORD *)*((_QWORD *)this + 14);
  v4 = &v3[52 * *((_QWORD *)this + 16)];
  while ( 1 )
  {
    v5 = a2;
    v6 = (_WORD *)*((_QWORD *)this + 14);
    if ( v3 == v4 )
    {
LABEL_5:
      v6 = 0LL;
    }
    else
    {
      while ( *v6 != *(_WORD *)a2 )
      {
        v6 += 52;
        if ( v6 == v4 )
          goto LABEL_5;
      }
    }
    if ( (v6 != 0LL) == (_BYTE)a3 )
      return a2;
    a2 = (const struct tip::test_state *)((char *)a2 + 16);
    if ( !*((_QWORD *)v5 + 3) )
      return 0LL;
  }
}
