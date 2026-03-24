/*
 * XREFs of StringCbLengthW @ 0x1402DF754
 * Callers:
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406B4BA0 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406B6F48 (SPCallServerHandleGetAppPolicyValue.c)
 *     PfVerifyScenarioBuffer @ 0x1406CEF40 (PfVerifyScenarioBuffer.c)
 *     sub_140960F54 @ 0x140960F54 (sub_140960F54.c)
 *     sub_140961350 @ 0x140961350 (sub_140961350.c)
 *     sub_1409622DC @ 0x1409622DC (sub_1409622DC.c)
 *     sub_1409628F0 @ 0x1409628F0 (sub_1409628F0.c)
 *     sub_140963358 @ 0x140963358 (sub_140963358.c)
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
