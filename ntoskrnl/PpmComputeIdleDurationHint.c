/*
 * XREFs of PpmComputeIdleDurationHint @ 0x14022A658
 * Callers:
 *     PpmIdlePrepare @ 0x14022AA10 (PpmIdlePrepare.c)
 * Callees:
 *     PpmEstimateIdleDuration @ 0x14022A74C (PpmEstimateIdleDuration.c)
 */

__int64 __fastcall PpmComputeIdleDurationHint(__int64 a1, unsigned __int64 a2, int a3, char a4)
{
  __int64 v4; // rdi
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  signed __int64 v11; // rax
  __int64 v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+98h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a1 + 33600);
  v6 = a2;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v12 = 0LL;
  if ( *(_BYTE *)(a1 + 33) || !KiSerializeTimerExpiration )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
    _m_prefetchw(&PpmPlatformIdleHint);
    a2 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v11 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, a2 ^ (unsigned __int16)(a2 ^ (a2 - 1)), a2);
        if ( a2 == v11 )
          break;
        a2 = v11;
        _mm_pause();
        if ( !(_WORD)v11 )
          goto LABEL_4;
      }
      v7 = a2 >> 16;
    }
  }
LABEL_4:
  if ( !a4 || KiClockTimerPerCpuTickScheduling || *(_BYTE *)(a1 + 33) )
    v8 = -1LL;
  else
    v8 = PpmPerfQosIdleExpirationTimeout;
  LOBYTE(a2) = v6;
  PpmEstimateIdleDuration(a1, (_WORD)a2, 0, a3, v7, v8, (__int64)&v13, (__int64)&v12, (__int64)&v14, (__int64)&v15);
  *(_WORD *)(v4 + 56) |= v15;
  v9 = v12;
  *(_QWORD *)(v4 + 8) = v8;
  *(_QWORD *)(v4 + 720) = v9;
  *(_BYTE *)(v4 + 741) = v14;
  result = v13;
  *(_QWORD *)(v4 + 712) = v13;
  return result;
}
