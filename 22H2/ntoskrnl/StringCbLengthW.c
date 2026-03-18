/*
 * XREFs of StringCbLengthW @ 0x1402F51A8
 * Callers:
 *     sub_1406F2550 @ 0x1406F2550 (sub_1406F2550.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x140748E2C (SPCallServerHandleGetAppPolicyValue.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1407495A0 (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x14074A530 (PfVerifyScenarioBuffer.c)
 *     sub_140A4BC90 @ 0x140A4BC90 (sub_140A4BC90.c)
 *     sub_140A4C044 @ 0x140A4C044 (sub_140A4C044.c)
 *     sub_140A4C9D4 @ 0x140A4C9D4 (sub_140A4C9D4.c)
 *     sub_140A4CF6C @ 0x140A4CF6C (sub_140A4CF6C.c)
 *     sub_140A4D388 @ 0x140A4D388 (sub_140A4D388.c)
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
