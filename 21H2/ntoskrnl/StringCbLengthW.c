/*
 * XREFs of StringCbLengthW @ 0x140290AA4
 * Callers:
 *     SPCallServerHandleIsAppLicensed @ 0x140614020 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406163A8 (SPCallServerHandleGetAppPolicyValue.c)
 *     PfVerifyScenarioBuffer @ 0x1406A6220 (PfVerifyScenarioBuffer.c)
 *     sub_1406ECCA0 @ 0x1406ECCA0 (sub_1406ECCA0.c)
 *     sub_140961134 @ 0x140961134 (sub_140961134.c)
 *     sub_140961530 @ 0x140961530 (sub_140961530.c)
 *     sub_1409624BC @ 0x1409624BC (sub_1409624BC.c)
 *     sub_140962AD0 @ 0x140962AD0 (sub_140962AD0.c)
 *     sub_140963538 @ 0x140963538 (sub_140963538.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
