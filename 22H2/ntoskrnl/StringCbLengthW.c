/*
 * XREFs of StringCbLengthW @ 0x14026D5A4
 * Callers:
 *     sub_1405FD540 @ 0x1405FD540 (sub_1405FD540.c)
 *     PfVerifyScenarioBuffer @ 0x14062C430 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140697B60 (SPCallServerHandleIsAppLicensed.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140699F08 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_140960FA4 @ 0x140960FA4 (sub_140960FA4.c)
 *     sub_1409613A0 @ 0x1409613A0 (sub_1409613A0.c)
 *     sub_14096232C @ 0x14096232C (sub_14096232C.c)
 *     sub_140962940 @ 0x140962940 (sub_140962940.c)
 *     sub_1409633A8 @ 0x1409633A8 (sub_1409633A8.c)
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
