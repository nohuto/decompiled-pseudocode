/*
 * XREFs of RtlpFcUpdateFeature @ 0x14091A5D0
 * Callers:
 *     RtlpFcApplyUpdateAndAddFeature @ 0x140919D58 (RtlpFcApplyUpdateAndAddFeature.c)
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919E88 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcCreateAndAddFeatureFromUpdate @ 0x14091A1C0 (RtlpFcCreateAndAddFeatureFromUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcUpdateFeature(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 28);
  if ( (v2 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (16 * *(_DWORD *)(a2 + 8))) & 0x30;
    v2 = *(_DWORD *)(a2 + 28);
  }
  if ( (v2 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (*(unsigned __int8 *)(a2 + 16) << 8)) & 0x3F00;
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 24);
    v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a2 + 20) << 14)) & 0xC000;
    *(_DWORD *)(a1 + 4) = v6;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
  }
  result = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(a2 + 12) << 6)) & 0x40u;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
