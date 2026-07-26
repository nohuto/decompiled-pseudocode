/*
 * XREFs of wil_details_StagingConfigFeature_HasUniqueState @ 0x1C003E430
 * Callers:
 *     wil_details_StagingConfig_QueryFeatureState @ 0x1C003E768 (wil_details_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall wil_details_StagingConfigFeature_HasUniqueState(_DWORD *a1)
{
  int v1; // eax
  _BOOL8 result; // rax

  result = 0;
  if ( *a1 )
  {
    v1 = a1[1];
    if ( (v1 & 0x300) != 0 || (v1 & 0xC00) != 0 || (v1 & 0x3000) != 0 || (v1 & 0x3F000000) != 0 || (v1 & 2) != 0 )
      return 1;
  }
  return result;
}
