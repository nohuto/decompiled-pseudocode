/*
 * XREFs of EtwpCovSampCaptureFlushStats @ 0x1408A3CAC
 * Callers:
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __fastcall EtwpCovSampCaptureFlushStats(__int64 a1, _DWORD *a2)
{
  ULONG result; // eax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r11
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD *v12; // rcx

  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( result )
  {
    v5 = 0LL;
    v6 = result;
    do
    {
      v7 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, v7);
      v9 = 0LL;
      v10 = 8LL;
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + ExSaPageArrays) + 8LL * (v8 - 2))
                      + 8 * (v7 ^ (unsigned int)(1 << v8))
                      + 8)
          + 8 * ((*(_QWORD *)(a1 + 8) >> 4) & 0x1FFLL);
      v12 = a2;
      do
      {
        result = _InterlockedExchange((volatile __int32 *)(v9 + v11 + 304), 0);
        *v12 += result;
        v9 += 4LL;
        ++v12;
        --v10;
      }
      while ( v10 );
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
