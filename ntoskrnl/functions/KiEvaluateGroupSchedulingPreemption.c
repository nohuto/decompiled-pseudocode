bool __fastcall KiEvaluateGroupSchedulingPreemption(__int64 *a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned __int8 v4; // al
  int v5; // ebx
  __int64 v6; // r13
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v12; // rbx
  __int64 v14; // rsi
  __int64 v15; // r15
  char v16; // r14
  unsigned int v17; // r8d
  unsigned int v18; // eax
  char v19; // dl
  __int64 v20; // rbx
  unsigned int ThreadEffectiveRankNonZero; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF
  int v26; // [rsp+80h] [rbp+18h]

  v26 = a3;
  v4 = *((_BYTE *)a1 + 32);
  v5 = 0;
  v6 = a1[2];
  v7 = v4;
  v8 = *a1;
  if ( (v4 & 1) != 0 )
  {
    *a4 = 0LL;
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
    {
      v20 = *(unsigned int *)(v8 + 216) + v12;
      if ( v20 )
      {
        LOBYTE(v7) = 1;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v20, v7, 0LL) )
          *a4 = v20;
      }
    }
    return 1;
  }
  v14 = *(_QWORD *)(v6 + 104);
  v24[0] = 0;
  if ( v14 )
  {
    v14 += *(unsigned int *)(v8 + 216);
    if ( v14 )
    {
      LOBYTE(v7) = (v4 & 4) != 0;
      v24[0] = KiGetThreadEffectiveRankNonZero(v6, v14, v7, 0LL);
    }
  }
  v15 = *(_QWORD *)(a2 + 104);
  v25 = 0;
  *a4 = 0LL;
  if ( !v15 || (v15 += *(unsigned int *)(v8 + 216)) == 0 )
  {
    v16 = v26;
LABEL_7:
    v17 = v25;
    goto LABEL_8;
  }
  LOBYTE(v7) = 1;
  ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a2, v15, v7, 0LL);
  v16 = v26;
  v17 = ThreadEffectiveRankNonZero;
  v25 = ThreadEffectiveRankNonZero;
  if ( ThreadEffectiveRankNonZero )
  {
    *a4 = v15;
    goto LABEL_8;
  }
  if ( (v26 & 2) == 0 )
  {
    v22 = v15;
    do
    {
      v5 += *(_DWORD *)(v22 + 116);
      v22 = *(_QWORD *)(v22 + 408);
    }
    while ( v22 );
    if ( v5
      && KiIsThreadConstrainedBySchedulingGroup(a2)
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && KiShouldPreemptionBeDeferred(v23) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( !v14 || !v15 )
    goto LABEL_9;
  v18 = v24[0];
  if ( v24[0] && v17 )
  {
    KiGetComparisonRanks(v14, v15, v24, &v25);
    v17 = v25;
LABEL_9:
    v18 = v24[0];
  }
  if ( v17 < v18 )
    return 1;
  if ( v17 != v18 )
    return (a1[4] & 0x10) != 0 && (*(_BYTE *)(a2 + 195) || !*(_BYTE *)(v6 + 195));
  v19 = *(_BYTE *)(a2 + 195);
  if ( v19 > *(char *)(v6 + 195) || v19 == *(_BYTE *)(v6 + 195) && ((a1[4] & 0x18) != 0 || (v16 & 1) != 0) )
    return 1;
  if ( (a1[4] & 0x10) == 0 )
    return 0;
  return v19 != 0;
}
