/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x1800281F0
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x1800069A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x180006B88 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x180006DB8 (RtlpHpSegFreeRangeRemove.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlpHpTlLogGCScheduled @ 0x18010B478 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogMemStats @ 0x18010B530 (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, char a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // r13
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rbp
  unsigned __int16 v15; // ax
  char v16; // cl
  char v17; // dl
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rbp
  __int64 v23; // rcx
  char v25; // al
  int v26; // [rsp+78h] [rbp+10h] BYREF

  v5 = a5;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v12 = (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
    v13 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)(v11 + v12) < 0x100 )
    {
      v10 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
        v10 = 0LL;
    }
    if ( (unsigned int)v11 > *(unsigned __int8 *)(a1 + 10) )
    {
      v14 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v14 += -32LL * *(unsigned __int8 *)(v14 + 31);
      if ( (*(_BYTE *)(v14 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v14, v12);
        *(_BYTE *)(v14 + 31) += *(_BYTE *)(a2 + 31);
        v13 += (unsigned __int16)~*(_WORD *)(v14 + 28);
        *(_WORD *)(v14 + 28) = ~(_WORD)v13;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v14;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v14 + 31) - 1) + v14 + 31) = *(_BYTE *)(v14 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v10 )
    {
      RtlRbRemoveNode(a1 + 96, v10, v12);
      *(_OWORD *)v10 = 0LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      v15 = ~(unsigned __int16)*(_DWORD *)(v10 + 28);
      *(_DWORD *)v10 = -857879331;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v15);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
      v16 = *(_BYTE *)(a2 + 31);
      if ( v16 != 1 )
      {
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
        v16 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v16 + *(_BYTE *)(v10 + 31);
      v13 += (unsigned __int16)~*(_WORD *)(v10 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v13;
      *(_BYTE *)(v10 + 24) &= ~2u;
      v17 = *(_BYTE *)(a2 + 31) - 1;
      v18 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v18 + a2 + 24) |= 1u;
      *(_BYTE *)(v18 + a2 + 31) = v17;
    }
    if ( !v13 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v19 = *(__int16 *)(a1 + 22);
      v20 = *(_QWORD *)(v19 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v20 <= 8 )
        v20 = 8LL;
      v21 = *(_QWORD *)(v19 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v21 <= 8 )
        v21 = 8LL;
      v22 = v13 + *(_QWORD *)(v19 + a1 + 16) + *(_QWORD *)(v19 + a1 + 24);
      if ( v22 > v20 )
      {
        if ( (RtlpHpLfhPerfFlags & 0x40) == 0 || byte_18016C508 || !RtlpHpGCTimerInitialized )
          goto LABEL_32;
        if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
        {
          TpSetTimerEx(RtlpHpGCTimer, (__int64)&RtlpHpGCInterval, 0, 5000);
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogGCScheduled();
        }
      }
      if ( v22 <= v21 )
        break;
    }
LABEL_32:
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, &v26);
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive(a1 + 64);
    v25 = *(_BYTE *)(a2 + 24) & 0xEF;
    *v5 = -1;
    *(_BYTE *)(a2 + 24) = v25;
  }
  v23 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v23 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
