/*
 * XREFs of KiUpdateCpuTargetByRate @ 0x1402F1E28
 * Callers:
 *     KeInsertSchedulingGroup @ 0x1402F161C (KeInsertSchedulingGroup.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F19B4 (KeSetSchedulingGroupCpuRates.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057B080 (KiUpdateChildrenCpuTarget.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140255D00 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402F2428 (KiCheckForEffectivePriorityChange.c)
 *     KiResetScb @ 0x1402F24DC (KiResetScb.c)
 *     KiUpdateChildrenCpuTarget @ 0x14057B080 (KiUpdateChildrenCpuTarget.c)
 */

char __fastcall KiUpdateCpuTargetByRate(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r13
  unsigned __int128 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  char v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rdi
  char v14; // al
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // r9
  char v19; // [rsp+70h] [rbp+8h]
  bool v20; // [rsp+78h] [rbp+10h]
  unsigned int v21; // [rsp+80h] [rbp+18h]
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v22 = 0LL;
  if ( *((_QWORD *)a1 + 12) )
  {
    KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[0], 0, &v22);
    v17 = *((_QWORD *)a1 + 67);
    v8 = *(_QWORD *)(v17 + 8) * (unsigned __int64)*a1 / 0x2710;
    v9 = *(_QWORD *)(v17 + 16) * (unsigned __int64)a1[1] / 0x2710;
    KiReleasePrcbLocksForIsolationUnit(&v22);
  }
  else
  {
    v4 = (KiCyclesPerGeneration * (unsigned __int64)*a1 * (unsigned __int128)0x346DC5D63886594BuLL) >> 64;
    v5 = KiCyclesPerGeneration * a1[1];
    v6 = v4;
    v7 = v5 * (unsigned __int128)0x346DC5D63886594BuLL;
    v8 = v6 >> 11;
    v9 = v5 / 0x2710;
  }
  LOBYTE(v7) = KeNumberProcessors_0;
  v21 = KeNumberProcessors_0;
  v20 = v9 == KiCyclesPerGeneration;
  v10 = 0LL;
  v11 = v8 != KiCyclesPerGeneration ? 0 : 0x20;
  if ( KeMaximumProcessors )
  {
    v19 = 16 * (v9 == KiCyclesPerGeneration);
    do
    {
      v12 = KiProcessorBlock[v10];
      v13 = (__int64)&a1[212 * (unsigned int)v10 + 64];
      if ( v12 )
      {
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v10], 0, &v22);
        if ( !v20 )
        {
          if ( *(_BYTE *)(v12 + 33) )
          {
            *((_QWORD *)a1 + 5) = v9 * v21;
            *((_QWORD *)a1 + 6) = v9 * v21;
          }
        }
      }
      v14 = *(_BYTE *)(v13 + 112) & 0xEF;
      *(_QWORD *)(v13 + 8) = v8;
      *(_QWORD *)(v13 + 16) = v9;
      LOBYTE(v7) = v11 | (v19 | v14) & 0xDF;
      *(_BYTE *)(v13 + 112) = v7;
      if ( v12 )
      {
        if ( a2 )
        {
          *(_QWORD *)(v13 + 32) = 0LL;
          *(_QWORD *)(v13 + 48) = 0LL;
          if ( (*((_DWORD *)a1 + 1) & 2) != 0 )
          {
            KiResetScb(v13, v12);
            KiCheckForEffectivePriorityChange(v12, v15, v13);
          }
        }
        LOBYTE(v7) = KiReleasePrcbLocksForIsolationUnit(&v22);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < KeMaximumProcessors );
  }
  if ( a2 )
  {
    *(LARGE_INTEGER *)&v7 = KeQueryPerformanceCounter(0LL);
    *((_QWORD *)a1 + 3) = v7;
  }
  v16 = a1 + 40;
  if ( (_QWORD *)*v16 != v16 )
  {
    BYTE8(v7) = a2;
    LOBYTE(v7) = KiUpdateChildrenCpuTarget(v16, *((_QWORD *)&v7 + 1));
  }
  return v7;
}
