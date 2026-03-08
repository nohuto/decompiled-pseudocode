/*
 * XREFs of MiInitializeZeroEngines @ 0x140729A34
 * Callers:
 *     MiNodeZeroConductor @ 0x1408314C0 (MiNodeZeroConductor.c)
 * Callees:
 *     MiAbsorbPossibleEngineChanges @ 0x1402A87C4 (MiAbsorbPossibleEngineChanges.c)
 *     MiGetOptimalProcessorWriteCount @ 0x140303004 (MiGetOptimalProcessorWriteCount.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     MiZeroEngineSetOptimalCount @ 0x1403AF760 (MiZeroEngineSetOptimalCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140811138 (MiComputeCacheAttributeSpeeds.c)
 */

__int64 __fastcall MiInitializeZeroEngines(__int64 a1)
{
  int v2; // ebp
  int v3; // edi
  __int64 v4; // r14
  unsigned int v5; // r12d
  __int64 v6; // rbx
  int v7; // esi
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v12; // eax
  __int64 v13; // rcx
  _BYTE v14[80]; // [rsp+20h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = 1;
  do
  {
    v6 = v4 + a1;
    if ( !*(_QWORD *)(v4 + a1 + 264) )
    {
      *(_QWORD *)(v6 + 264) = a1;
      *(_DWORD *)(v6 + 96) = v3;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL) + 25408LL * *(unsigned int *)(a1 + 56);
      *(_QWORD *)(v6 + 288) = v6 + 280;
      *(_QWORD *)(v6 + 280) = v6 + 280;
      *(_QWORD *)(v6 + 216) = v6 + 208;
      *(_QWORD *)(v6 + 208) = v6 + 208;
      *(_QWORD *)(v6 + 296) = v13;
      if ( *(_BYTE *)(a1 + 60) )
        *(_WORD *)(v6 + 121) = 257;
    }
    *(_BYTE *)(v6 + 124) = 0;
    v7 = 1 << v3;
    if ( *(_BYTE *)(v6 + 125) )
    {
      *(_BYTE *)(v6 + 125) = 0;
      v2 |= v7;
    }
    MiAbsorbPossibleEngineChanges((int *)(v6 + 96), v14);
    if ( v14[0] )
    {
      if ( v14[1] )
      {
        v2 |= v7;
      }
      else
      {
        *(_BYTE *)(v6 + 124) = 1;
        v5 = 0;
      }
    }
    ++v3;
    v4 += 296LL;
  }
  while ( v3 < 3 );
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = v9 + a1 + 96;
    if ( *(_DWORD *)(v10 + 164) && _bittest(&v2, v8) )
    {
      if ( !(unsigned int)MiZeroPageCalibrate((int *)(v9 + a1 + 96)) )
      {
        *(_BYTE *)(v10 + 29) = 1;
        v5 = 0;
      }
      MiComputeCacheAttributeSpeeds(v9 + a1 + 96);
      v12 = MiGetOptimalProcessorWriteCount(*(_DWORD *)(a1 + 56), v8);
      MiZeroEngineSetOptimalCount(v9 + a1 + 96, v12);
    }
    ++v8;
    v9 += 296LL;
  }
  while ( v8 < 3 );
  return v5;
}
