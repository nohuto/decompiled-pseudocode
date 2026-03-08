/*
 * XREFs of RtlpFcUpdateFeature @ 0x1409C037C
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x1409BFDE4 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x1409BFEF0 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x1409C023C (RtlpFcCreateAndAddFeatureFromUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcUpdateFeature(_DWORD *a1, __int64 a2)
{
  int *v2; // r8
  int v4; // ecx
  int v5; // r9d
  __int64 result; // rax

  v2 = a1 + 1;
  if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
    *v2 ^= (*v2 ^ (16 * *(_DWORD *)(a2 + 8))) & 0x30;
  if ( (*(_DWORD *)(a2 + 28) & 2) != 0 )
  {
    v4 = *v2 ^ (*v2 ^ (*(unsigned __int8 *)(a2 + 16) << 8)) & 0x3F00;
    *v2 = v4;
    a1[2] = *(_DWORD *)(a2 + 24);
    v5 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 20) << 14)) & 0xC000;
    *v2 = v5;
  }
  else
  {
    v5 = *v2;
  }
  *v2 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(a2 + 12) << 6)) & 0x40;
  result = (a1[3] ^ (*(_DWORD *)(a2 + 16) >> 8)) & 1;
  a1[3] ^= result;
  return result;
}
