/*
 * XREFs of ?evaluate_flags@details@tip@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800ACC98
 * Callers:
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z @ 0x1800ACA0C (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAX_J@Z.c)
 * Callees:
 *     ?find_flags_match@details@tip@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z @ 0x1800ACD60 (-find_flags_match@details@tip@@YAPEBUtest_requirement@2@AEBVtest_state@2@PEBU32@_N@Z.c)
 */

char __fastcall tip::details::evaluate_flags(
        tip::details *this,
        const struct tip::test_state *a2,
        const struct tip::test_requirement *a3,
        const struct tip::test_requirement *a4)
{
  const struct tip::test_state *v5; // rsi
  const struct tip::test_requirement *flags_match; // rax
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = a3;
  if ( a2 )
  {
    flags_match = tip::details::find_flags_match(this, a2, 0LL, (bool)a4);
    if ( flags_match )
    {
      v8 = *((_BYTE *)this + 152) == (unsigned __int8)a3;
      goto LABEL_4;
    }
  }
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    flags_match = tip::details::find_flags_match(this, v5, a3, (bool)a4);
    if ( flags_match )
    {
      v8 = *((_BYTE *)this + 152) == 0;
LABEL_4:
      v9 = *((_QWORD *)flags_match + 1);
      if ( v8 )
      {
        *((_WORD *)this + 77) = *(_WORD *)flags_match;
        *((_QWORD *)this + 20) = v9;
LABEL_13:
        *((_BYTE *)this + 152) = 3;
        return 0;
      }
      return 0;
    }
  }
  if ( a4 )
  {
    LOBYTE(a3) = 1;
    if ( !tip::details::find_flags_match(this, a4, a3, (bool)a4) )
    {
      v10 = *((_QWORD *)a4 + 1);
      if ( !*((_BYTE *)this + 152) )
      {
        *((_WORD *)this + 77) = *(_WORD *)a4;
        *((_QWORD *)this + 20) = v10;
        goto LABEL_13;
      }
      return 0;
    }
  }
  return 1;
}
