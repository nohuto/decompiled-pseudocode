/*
 * XREFs of EtwpCoverageSamplerContextSwap @ 0x140601874
 * Callers:
 *     EtwTraceContextSwap @ 0x140384B80 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerContextSwap(_KTHREAD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  unsigned int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r8d
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r11d
  unsigned int v11; // r11d
  unsigned int v12; // r11d
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax

  if ( a1 && a1 != *(_KTHREAD **)qword_140C31888 && a1 != KeGetCurrentPrcb()->IdleThread )
  {
    v1 = *(_QWORD *)(qword_140C31888 + 8);
    v2 = (unsigned int)v1;
    LODWORD(v1) = ((unsigned int)v1 >> 13) & 0x3FFFF;
    _BitScanReverse(&v3, v1);
    v4 = (v2 >> 4) & 0x1FF;
    v5 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v3 - 2) + 8LL * ((unsigned int)v1 ^ (1 << v3)) + 8);
    if ( !*(_DWORD *)(v5 + 8 * v4 + 184) )
    {
LABEL_14:
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8 * v4 + 324));
      EtwpCovSampCaptureSample(0LL, 0x50000004u);
      return;
    }
    v6 = MEMORY[0xFFFFF78000000320];
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 8 * v4 + 188)) > *(_DWORD *)(v5 + 8 * v4 + 192) )
    {
      v7 = *(_DWORD *)(v5 + 8 * v4 + 196);
      v8 = *(_DWORD *)(v5 + 8 * v4 + 184);
      v9 = v8 + *(_DWORD *)(v5 + 8 * v4 + 204);
      v10 = *(_DWORD *)(v5 + 8 * v4 + 212);
      *(_DWORD *)(v5 + 8 * v4 + 188) = MEMORY[0xFFFFF78000000320];
      if ( v9 > v7 )
        v9 = v7;
      v11 = *(_DWORD *)(v5 + 8 * v4 + 200) + v10;
      *(_DWORD *)(v5 + 8 * v4 + 200) = 0;
      v12 = v11 >> 1;
      *(_DWORD *)(v5 + 8 * v4 + 204) = v9;
      *(_DWORD *)(v5 + 8 * v4 + 212) = v12;
      if ( v12 >= 2 * v8 )
      {
        v13 = v12 / (v8 + 1);
        v14 = 16777619 * (*(_DWORD *)(v5 + 8 * v4 + 220) ^ v6);
        *(_DWORD *)(v5 + 8 * v4 + 216) = v13;
        *(_DWORD *)(v5 + 8 * v4 + 220) = v14;
        *(_DWORD *)(v5 + 8 * v4 + 208) = v14 & (2 * v13);
      }
      else
      {
        *(_DWORD *)(v5 + 8 * v4 + 216) = 1;
        *(_DWORD *)(v5 + 8 * v4 + 208) = 1;
      }
    }
    ++*(_DWORD *)(v5 + 8 * v4 + 200);
    v15 = *(_DWORD *)(v5 + 8 * v4 + 204);
    if ( v15 > 0 )
    {
      v16 = *(_DWORD *)(v5 + 8 * v4 + 208) - 1;
      *(_DWORD *)(v5 + 8 * v4 + 208) = v16;
      if ( v16 <= 0 )
      {
        *(_DWORD *)(v5 + 8 * v4 + 204) = v15 - 1;
        *(_DWORD *)(v5 + 8 * v4 + 208) = *(_DWORD *)(v5 + 8 * v4 + 216);
        goto LABEL_14;
      }
    }
  }
}
