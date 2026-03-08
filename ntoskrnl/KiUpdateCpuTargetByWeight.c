/*
 * XREFs of KiUpdateCpuTargetByWeight @ 0x1402F1C6C
 * Callers:
 *     KiAssignSchedulingGroupWeights @ 0x1402F1A84 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057B080 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402F2428 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1402F24DC (KiResetScb.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057B080 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByWeight(LARGE_INTEGER *a1, char a2)
{
  __int16 LowPart; // si
  unsigned __int16 LowPart_high; // bp
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v10; // r15
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rsi
  char v14; // al
  LARGE_INTEGER *v15; // rcx
  LARGE_INTEGER v16; // rdi
  __int64 v17; // rdx
  char v19; // [rsp+70h] [rbp+8h]
  bool v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  LowPart = a1->LowPart;
  LowPart_high = HIWORD(a1->u.LowPart);
  if ( a1[12].QuadPart )
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0, &v22);
    v16 = a1[67];
    v8 = *(_QWORD *)(v16.QuadPart + 8) * (unsigned __int64)LOWORD(a1->LowPart) / *(unsigned int *)(a1[12].QuadPart + 20);
    if ( LowPart == LowPart_high )
      v6 = *(_QWORD *)(v16.QuadPart + 8)
         * (unsigned __int64)LOWORD(a1->LowPart)
         / *(unsigned int *)(a1[12].QuadPart + 20);
    else
      v6 = *(_QWORD *)(v16.QuadPart + 16);
    KiReleasePrcbLocksForIsolationUnit(&v22);
  }
  else
  {
    v6 = KiCyclesPerGeneration;
    v7 = KiCyclesPerGeneration * (unsigned __int64)LOWORD(a1->LowPart) % (unsigned int)KiGroupSchedulingTotalWeight;
    v8 = KiCyclesPerGeneration * (unsigned __int64)LOWORD(a1->LowPart) / (unsigned int)KiGroupSchedulingTotalWeight;
    if ( LowPart == LowPart_high )
      v6 = KiCyclesPerGeneration * (unsigned __int64)LOWORD(a1->LowPart) / (unsigned int)KiGroupSchedulingTotalWeight;
  }
  LOBYTE(PerformanceCounter.LowPart) = KeNumberProcessors_0;
  v21 = KeNumberProcessors_0;
  v20 = v6 == KiCyclesPerGeneration;
  v10 = 0LL;
  v11 = v8 != KiCyclesPerGeneration ? 0 : 0x20;
  if ( KeMaximumProcessors )
  {
    v19 = 16 * (v6 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[53 * (unsigned int)v10 + 16];
      if ( v12 )
      {
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v10], 0, &v22);
        if ( !v20 )
        {
          if ( *(_BYTE *)(v12 + 33) )
          {
            a1[5].QuadPart = v6 * v21;
            a1[6].QuadPart = v6 * v21;
          }
        }
      }
      v14 = *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v6;
      LOBYTE(PerformanceCounter.LowPart) = v11 | (v19 | v14) & 0xDF;
      *(_BYTE *)(v13 + 112) = PerformanceCounter.LowPart;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          if ( (a1->HighPart & 2) != 0 )
          {
            KiResetScb(v13, v12);
            KiCheckForEffectivePriorityChange(v12, v17, v13);
          }
        }
        LOBYTE(PerformanceCounter.LowPart) = KiReleasePrcbLocksForIsolationUnit(&v22);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    a1[3] = PerformanceCounter;
  }
  v15 = a1 + 10;
  if ( (LARGE_INTEGER *)v15->QuadPart != v15 )
  {
    LOBYTE(v7) = a2;
    LOBYTE(PerformanceCounter.LowPart) = KiUpdateChildrenCpuTarget(v15, v7);
  }
  return PerformanceCounter.LowPart;
}
