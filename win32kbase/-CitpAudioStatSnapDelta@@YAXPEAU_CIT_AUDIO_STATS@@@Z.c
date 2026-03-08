/*
 * XREFs of ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C00C825C
 * Callers:
 *     ?CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z @ 0x1C0087D08 (-CitpInteractionSummaryStopTracking@@YAXPEAU_CIT_INTERACTION_SUMMARY@@I@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C00C8230 (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpAudioStatSnapDelta(struct _CIT_AUDIO_STATS *a1)
{
  int v2; // r8d
  int v3; // eax
  unsigned __int64 v4; // rdx
  unsigned int v5; // ecx

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1;
  v4 = (MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0]) / 0x2710uLL;
  v5 = v4 + (*(_DWORD *)a1 & 0xFFFFFF) - *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v4;
  if ( v5 > 0xFFFFFF )
    v5 = 0xFFFFFF;
  *(_DWORD *)a1 = v2 ^ (v5 ^ v3) & 0xFFFFFF;
}
