/*
 * XREFs of MiTransformValidPteInPlace @ 0x1403BD25C
 * Callers:
 *     MiReplicatePteChangeToProcess @ 0x1402A470C (MiReplicatePteChangeToProcess.c)
 *     MiShadowTopLevelPxes @ 0x1402A5D94 (MiShadowTopLevelPxes.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14038B664 (MiDemoteValidLargePageOneLevel.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x140387768 (MiFlushValidPteFromTb.c)
 *     MiWritePteHighLevel @ 0x14064BD10 (MiWritePteHighLevel.c)
 */

void __fastcall MiTransformValidPteInPlace(volatile signed __int64 *a1, unsigned __int64 a2, signed __int64 a3, int a4)
{
  signed __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // ebp
  signed __int64 v11; // rtt
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rtt

  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  v8 = *a1;
  if ( *a1 != a3 )
  {
    v9 = ((unsigned int)MiFlags >> 26) & 3;
    while ( 1 )
    {
      v10 = 0;
      if ( v9 <= 1 && (!v9 || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v8 & 0x80u) == 0LL) )
      {
        v10 = 1;
        if ( KeGetCurrentPrcb()->Number < (unsigned int)KeNumberProcessors_0 )
        {
          MiWritePteHighLevel(a1, a2, a3);
          return;
        }
      }
      while ( (v8 & 0x20) != 0 && !v10 )
      {
        v12 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
        if ( (MiFlags & 0x2000000) != 0 )
          _mm_lfence();
        v13 = v8;
        v8 = _InterlockedCompareExchange64(a1, v12, v8);
        if ( v13 == v8 )
        {
          MiFlushValidPteFromTb(a2, v8, a4);
          v8 = v12;
          break;
        }
        if ( v9 == 1 && a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v8 & 0x80u) == 0LL )
          v10 = 1;
      }
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v11 = v8;
      v8 = _InterlockedCompareExchange64(a1, a3, v8);
      if ( v11 == v8 )
        break;
      if ( v8 == a3 )
        return;
    }
    if ( v10 )
      LOBYTE(v8) = v8 | 0x20;
    if ( (v8 & 0x20) != 0 )
      MiFlushValidPteFromTb(a2, v8, a4);
  }
}
