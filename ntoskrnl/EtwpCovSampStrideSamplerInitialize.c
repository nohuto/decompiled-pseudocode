/*
 * XREFs of EtwpCovSampStrideSamplerInitialize @ 0x1409F0034
 * Callers:
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 __fastcall EtwpCovSampStrideSamplerInitialize(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 36) = ExGenRandom(0);
  v6 = 10 * a2 / KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = v6;
  v7 = *(_DWORD *)(a1 + 8) == 0;
  *(_DWORD *)(a1 + 4) = MEMORY[0xFFFFF78000000320] + ~v6;
  if ( v7 )
  {
    if ( a2 )
    {
      v8 = v3 * (KeMaximumIncrement / 0xAu / a2);
      LODWORD(v3) = 0x10000000;
      if ( v8 < 0x10000000 )
        LODWORD(v3) = v8;
    }
  }
  result = (unsigned int)(4 * v3);
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
