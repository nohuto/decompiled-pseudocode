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
