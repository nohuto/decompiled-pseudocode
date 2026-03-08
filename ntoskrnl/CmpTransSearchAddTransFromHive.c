/*
 * XREFs of CmpTransSearchAddTransFromHive @ 0x1406B5A10
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x1406B5B04 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTransFromRm @ 0x140735958 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromHive(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  if ( !a1 )
    return 3221225485LL;
  if ( (a2 & 1) != 0 )
    return CmpTransSearchAddLightWeightTrans(a2, a1, a4, a5);
  return CmpTransSearchAddTransFromRm(*(_QWORD *)(a1 + 4152), a2, a3, a4, a5);
}
