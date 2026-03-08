/*
 * XREFs of PspModifyAncestorBits @ 0x1409AF60C
 * Callers:
 *     PspRemoveRateControl @ 0x1409AF8BC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1409AFE3C (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspModifyAncestorBits(__int64 a1, unsigned int a2, char a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = *(_QWORD *)(a1 + 1288); i; i = *(_QWORD *)(i + 1288) )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(i + 1536), a2);
    }
    else
    {
      result = ~a2;
      _InterlockedAnd((volatile signed __int32 *)(i + 1536), result);
    }
  }
  return result;
}
