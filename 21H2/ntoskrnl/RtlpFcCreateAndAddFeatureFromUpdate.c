/*
 * XREFs of RtlpFcCreateAndAddFeatureFromUpdate @ 0x14091A1C0
 * Callers:
 *     RtlpFcUpdateFeatureConfiguration @ 0x14091A644 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     RtlpFcDoesFeatureHaveUniqueState @ 0x14091A228 (RtlpFcDoesFeatureHaveUniqueState.c)
 *     RtlpFcIsUpdateModifyingOrAddingFeature @ 0x14091A280 (RtlpFcIsUpdateModifyingOrAddingFeature.c)
 *     RtlpFcUpdateFeature @ 0x14091A5D0 (RtlpFcUpdateFeature.c)
 */

__int64 __fastcall RtlpFcCreateAndAddFeatureFromUpdate(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r9
  __int64 *v3; // r11
  __int64 v4; // rcx
  _QWORD *v5; // r11
  __int64 v6; // r8
  _DWORD *v7; // r10
  _QWORD *v8; // r11

  result = RtlpFcIsUpdateModifyingOrAddingFeature(a1);
  if ( (_BYTE)result )
  {
    v4 = *v3;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)v4 = *v2;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)(v4 + 4) & 0xFFFFFF70 | v2[1] & 0xF;
    RtlpFcUpdateFeature(v4, v2);
    result = RtlpFcDoesFeatureHaveUniqueState(*v5);
    if ( (_BYTE)result )
    {
      ++*v7;
      result = v6 + 12;
      *v8 = v6 + 12;
    }
  }
  return result;
}
