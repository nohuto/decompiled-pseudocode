/*
 * XREFs of CmFcpIncrementChangeStamp @ 0x1407D551C
 * Callers:
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087DD54 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerStartBootPhase @ 0x140A386D8 (CmFcManagerStartBootPhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmFcpIncrementChangeStamp(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = a1 == -1;
  v2 = a1 + 1;
  result = 1LL;
  if ( !v1 )
    return v2;
  return result;
}
