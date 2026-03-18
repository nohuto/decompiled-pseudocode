/*
 * XREFs of StringCbLengthW @ 0x140354748
 * Callers:
 *     SPCallServerHandleIsAppLicensed @ 0x1406CD46C (SPCallServerHandleIsAppLicensed.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1407D45CC (SPCallServerHandleGetAppPolicyValue.c)
 *     PfVerifyScenarioBuffer @ 0x1407D8870 (PfVerifyScenarioBuffer.c)
 *     sub_140A0C7AC @ 0x140A0C7AC (sub_140A0C7AC.c)
 *     sub_140A0CB34 @ 0x140A0CB34 (sub_140A0CB34.c)
 *     sub_140A0D838 @ 0x140A0D838 (sub_140A0D838.c)
 *     sub_140A0DD98 @ 0x140A0DD98 (sub_140A0DD98.c)
 *     sub_140A0E590 @ 0x140A0E590 (sub_140A0E590.c)
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
