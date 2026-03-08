/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180272F74
 * Callers:
 *     CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___ @ 0x180272BB0 (CChainingHelper--RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___.c)
 *     CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___ @ 0x180272C20 (CChainingHelper--RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___.c)
 *     CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___ @ 0x180272CB0 (CChainingHelper--RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigurationAxis(int a1)
{
  int v1; // ecx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 1LL;
    if ( v1 == 1 )
      return 2LL;
  }
  return 0LL;
}
