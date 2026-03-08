/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x140818EC4
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x140A0F6D8 (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers @ 0x140B5399C (wil_details_PopulateInitialConfiguredFeatureStatesFromBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(int a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v4; // edx

  if ( a1 == -1073741275 || a1 == -2147483614 )
  {
    result = 0LL;
    *a3 = 0LL;
  }
  else
  {
    result = 0LL;
    *a3 = 0LL;
    if ( !a1 )
    {
      result = *(_DWORD *)(a2 + 4) & 0xB0;
      v4 = (8 * (result | (4 * (*(_DWORD *)(a2 + 4) & 0x40)))) | 0x206;
      goto LABEL_4;
    }
    if ( a1 == 279 )
    {
      result = 8 * (*(_DWORD *)(a2 + 4) & 0x80u);
      v4 = result | 0x206;
      goto LABEL_4;
    }
  }
  v4 = 518;
LABEL_4:
  *(_DWORD *)a3 = v4;
  return result;
}
