/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x14075BBE8
 * Callers:
 *     MiCommitVadCfgBits @ 0x1407D2AEC (MiCommitVadCfgBits.c)
 * Callees:
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiGetControlAreaLoadConfig @ 0x14034C364 (MiGetControlAreaLoadConfig.c)
 *     MiMarkPrivateOpenCfgBits @ 0x14075C5C4 (MiMarkPrivateOpenCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x14075C600 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 ControlAreaLoadConfig; // rax
  int v13; // r8d
  __int64 result; // rax
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  v5 = **(__int64 ***)(a3 + 72);
  v6 = *v5;
  v7 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  v8 = (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 1;
  if ( (unsigned int)MiVadMapsLargeImage(a3) )
  {
    result = MiMarkPrivateOpenCfgBits(a1, v7, v8, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 += (unsigned __int64)*(unsigned __int8 *)(MiLocateVadEvent() + 8) << 16;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL) & 0xFFF;
    v9 = 1;
    v16 = (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL) >> 12;
    if ( v8 > v7 + ((__int64)(*(_QWORD *)(v6 + 64) + 8 * (v16 + (v15 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12) )
      v8 = v7 + ((__int64)(*(_QWORD *)(v6 + 64) + 8 * (v16 + (v15 != 0)) - *(_QWORD *)(a3 + 80)) >> 3 << 12);
  }
  v10 = *(_QWORD *)(a3 + 80);
  v11 = *(_QWORD *)(v6 + 64);
  if ( v10 != v11 && !v9 )
  {
    v17 = (v10 - v11) >> 3 << 12;
    v7 += v17;
    v8 += v17;
  }
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)v5);
  return MiPopulateCfgBitMap(a1, *(_QWORD *)(ControlAreaLoadConfig + 8), v13, 0, v7, v8);
}
