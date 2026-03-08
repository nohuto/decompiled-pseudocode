/*
 * XREFs of EtwpCoverageSamplerReadyThread @ 0x140601C50
 * Callers:
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x140601340 (EtwpCovSampCaptureSample.c)
 */

__int64 __fastcall EtwpCoverageSamplerReadyThread(__int64 a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // ecx

  result = (__int64)KeGetCurrentThread();
  if ( *(_QWORD *)qword_140C31888 != result && *(_QWORD *)qword_140C31888 != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (__int64)KeGetCurrentThread();
    if ( (_KTHREAD *)result != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
    {
      v3 = *(_QWORD *)(qword_140C31888 + 8);
      v4 = (unsigned int)v3;
      LODWORD(v3) = ((unsigned int)v3 >> 13) & 0x3FFFF;
      _BitScanReverse(&v5, v3);
      v6 = (v4 >> 4) & 0x1FF;
      v7 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2) + 8LL * ((unsigned int)v3 ^ (1 << v5)) + 8);
      if ( !*(_DWORD *)(v7 + 8 * v6 + 224) )
      {
LABEL_15:
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8 * v6 + 328));
        return EtwpCovSampCaptureSample(0LL, 0x30000008u);
      }
      v8 = MEMORY[0xFFFFF78000000320];
      result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v7 + 8 * v6 + 228));
      if ( (unsigned int)result > *(_DWORD *)(v7 + 8 * v6 + 232) )
      {
        v9 = *(_DWORD *)(v7 + 8 * v6 + 236);
        v10 = *(_DWORD *)(v7 + 8 * v6 + 224);
        v11 = v10 + *(_DWORD *)(v7 + 8 * v6 + 244);
        v12 = *(_DWORD *)(v7 + 8 * v6 + 240);
        *(_DWORD *)(v7 + 8 * v6 + 228) = MEMORY[0xFFFFF78000000320];
        if ( v11 > v9 )
          v11 = v9;
        v13 = *(_DWORD *)(v7 + 8 * v6 + 252) + v12;
        *(_DWORD *)(v7 + 8 * v6 + 240) = 0;
        result = (unsigned int)(2 * v10);
        v14 = v13 >> 1;
        *(_DWORD *)(v7 + 8 * v6 + 244) = v11;
        *(_DWORD *)(v7 + 8 * v6 + 252) = v14;
        if ( v14 >= (unsigned int)result )
        {
          v15 = v14 / (v10 + 1);
          v16 = 16777619 * (*(_DWORD *)(v7 + 8 * v6 + 260) ^ v8);
          *(_DWORD *)(v7 + 8 * v6 + 256) = v15;
          result = v16 & (2 * v15);
          *(_DWORD *)(v7 + 8 * v6 + 260) = v16;
          *(_DWORD *)(v7 + 8 * v6 + 248) = result;
        }
        else
        {
          *(_DWORD *)(v7 + 8 * v6 + 256) = 1;
          *(_DWORD *)(v7 + 8 * v6 + 248) = 1;
        }
      }
      ++*(_DWORD *)(v7 + 8 * v6 + 240);
      v17 = *(_DWORD *)(v7 + 8 * v6 + 244);
      if ( v17 > 0 )
      {
        result = (unsigned int)(*(_DWORD *)(v7 + 8 * v6 + 248) - 1);
        *(_DWORD *)(v7 + 8 * v6 + 248) = result;
        if ( (int)result <= 0 )
        {
          *(_DWORD *)(v7 + 8 * v6 + 244) = v17 - 1;
          *(_DWORD *)(v7 + 8 * v6 + 248) = *(_DWORD *)(v7 + 8 * v6 + 256);
          goto LABEL_15;
        }
      }
    }
  }
  return result;
}
