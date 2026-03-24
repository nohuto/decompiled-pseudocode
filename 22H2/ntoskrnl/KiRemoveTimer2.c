/*
 * XREFs of KiRemoveTimer2 @ 0x14024AD50
 * Callers:
 *     KeSetTimer2 @ 0x14022BEC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x140248150 (KiTimer2Expiration.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1402F05B0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KeCancelTimer2 @ 0x140348B50 (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x140348C40 (KeDisableTimer2.c)
 *     KiAdjustTimer2DueTimes @ 0x14039DCF0 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveTimer2(__int64 a1, __int64 a2, __int64 a3)
{
  char *v4; // rsi
  unsigned int v5; // edi
  int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // r14
  char v9; // al
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  bool v19; // cf
  __int64 result; // rax
  volatile signed __int32 *v21; // rcx

  v4 = (char *)(a1 + 130);
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 72LL;
  do
  {
    v9 = *v4;
    if ( (*v4 & 0x10) == 0 )
    {
      v10 = 0x140000000LL + 24LL * (v9 & 7) + 12786912;
      v11 = *(_QWORD *)(0x140000008LL + 24LL * (v9 & 7) + 12786912);
      if ( (v11 & 1) != 0 )
        v12 = v11 == 1 ? 0LL : v11 ^ (v10 | 1);
      else
        v12 = *(_QWORD *)(0x140000008LL + 24LL * (v9 & 7) + 12786912);
      RtlRbRemoveNode(v10, a1 + 24 * (v5 + 1LL), a3, -1LL);
      if ( v12 == a1 + 24 * (v5 + 1LL) )
      {
        v13 = *(_QWORD *)(v10 + 8);
        v6 = 1;
        if ( (v13 & 1) != 0 )
        {
          if ( v13 == 1 )
          {
LABEL_28:
            *(_QWORD *)(v10 + 16) = -1LL;
            goto LABEL_10;
          }
          v14 = v13 ^ (v10 | 1);
        }
        else
        {
          v14 = *(_QWORD *)(v10 + 8);
        }
        if ( v14 )
        {
          *(_QWORD *)(v10 + 16) = *(_QWORD *)(v8 - v7 + v14 - 24);
          goto LABEL_10;
        }
        goto LABEL_28;
      }
    }
LABEL_10:
    ++v5;
    v8 += 8LL;
    ++v4;
    v7 += 24LL;
  }
  while ( v5 < 2 );
  if ( v6 && KiNextTimer2DueTime == *(_QWORD *)(a1 + 72) )
  {
    v15 = -1LL;
    v16 = qword_140C31CF0;
    v17 = 5LL;
    do
    {
      v18 = v15;
      v15 = *v16;
      v19 = *v16 < v18;
      v16 += 3;
      if ( !v19 )
        v15 = v18;
      --v17;
    }
    while ( v17 );
    KiNextTimer2DueTime = v15;
  }
  result = *(unsigned __int8 *)(a1 + 129);
  if ( (result & 4) != 0 && _InterlockedExchangeAdd(&KiHrTimerActiveCount, 0xFFFFFFFF) == 1 )
  {
    result = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    v21 = *(volatile signed __int32 **)(result + 33976);
    if ( v21 )
    {
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 0x40) != 0 )
        _InterlockedAnd(v21, 0xFFF7FFFF);
    }
  }
  return result;
}
