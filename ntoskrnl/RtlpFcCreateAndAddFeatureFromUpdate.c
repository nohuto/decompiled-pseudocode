/*
 * XREFs of RtlpFcCreateAndAddFeatureFromUpdate @ 0x1409C023C
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409C0408 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x1409C02A4 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x1409C02DC (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcUpdateFeature @ 0x1409C037C (RtlpFcUpdateFeature.c)
 */

__int64 __fastcall RtlpFcCreateAndAddFeatureFromUpdate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _DWORD *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r11

  result = RtlpFcIsUpdateModifyingOrAddingFeature(a1);
  if ( (_BYTE)result )
  {
    v5 = *a2;
    *(_OWORD *)v5 = 0LL;
    *(_DWORD *)v5 = *v4;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v5 + 4) & 0xFFFFFF70 | v4[1] & 0xF;
    RtlpFcUpdateFeature(v5, v4);
    result = RtlpFcDoesFeatureHaveUniqueState(*a2);
    if ( (_BYTE)result )
    {
      ++*v7;
      result = v6 + 16;
      *a2 = v6 + 16;
    }
  }
  return result;
}
