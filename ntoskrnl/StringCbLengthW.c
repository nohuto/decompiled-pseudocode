/*
 * XREFs of StringCbLengthW @ 0x14035ACC4
 * Callers:
 *     sub_1406DF1C0 @ 0x1406DF1C0 (sub_1406DF1C0.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1407883F0 (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1407DE5E8 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x1407E0090 (PfVerifyScenarioBuffer.c)
 *     sub_140A48FC0 @ 0x140A48FC0 (sub_140A48FC0.c)
 *     sub_140A49374 @ 0x140A49374 (sub_140A49374.c)
 *     sub_140A49D04 @ 0x140A49D04 (sub_140A49D04.c)
 *     sub_140A4A29C @ 0x140A4A29C (sub_140A4A29C.c)
 *     sub_140A4A6B8 @ 0x140A4A6B8 (sub_140A4A6B8.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  __int64 v5; // rax
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
    v5 = (v3 - i) & -(__int64)(i != 0);
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
