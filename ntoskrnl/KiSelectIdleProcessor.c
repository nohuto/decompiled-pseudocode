/*
 * XREFs of KiSelectIdleProcessor @ 0x14057528C
 * Callers:
 *     KiChooseTargetProcessor @ 0x140258FC0 (KiChooseTargetProcessor.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x140227260 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x140227310 (KiStartThreadCycleAccumulation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFindRankBiasedIdleSmtSet @ 0x140574DA8 (KiFindRankBiasedIdleSmtSet.c)
 */

__int64 __fastcall KiSelectIdleProcessor(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v32; // eax
  signed __int32 v33; // ett
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  char v39; // cl
  unsigned __int64 v40; // rax
  __int64 v41; // [rsp+28h] [rbp-8h] BYREF

  v6 = a5;
  v7 = 0LL;
  if ( !a5 )
  {
    v12 = *(unsigned __int16 *)(a4 + 136);
    if ( (unsigned __int16)v12 >= *a1 )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)&a1[4 * v12 + 4];
    v14 = *(_QWORD *)(a4 + 128);
    v15 = v14 & v13;
    if ( !v15 )
      return 0LL;
    _BitScanForward64(&v17, *(_QWORD *)(*(_QWORD *)(a3 + 192) + 128LL));
    _BitScanForward64(&v18, v14);
    v19 = (v18 + *(_BYTE *)(a3 + 209) - v17) & 0x3F;
    _BitScanForward64(&v18, __ROR8__(v15, v19));
    v6 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * (_DWORD)v12 + (((_BYTE)v18 + v19) & 0x3F)]];
  }
  v20 = *(unsigned __int16 *)(a4 + 136);
  if ( (unsigned __int16)v20 >= *a1 )
    v21 = 0LL;
  else
    v21 = *(_QWORD *)&a1[4 * v20 + 4];
  v22 = *(_QWORD *)(a4 + 8);
  v23 = *(_QWORD *)(a4 + 8LL * *((int *)a6 + 1) + 16);
  v24 = v21 & v22 & v23;
  v41 = v24;
  if ( a6[1] )
  {
    if ( v24 )
      goto LABEL_15;
    v22 = *(_QWORD *)(a4 + 16) & *(_QWORD *)(a4 + 96);
    v24 = v21 & v22 & v23;
    v41 = v24;
  }
  if ( !v24 )
    return v7;
LABEL_15:
  if ( (*(_BYTE *)(a4 + 184) & 1) == 0 || *a6 && KiFindRankBiasedIdleSmtSet(v6, &v41) )
    goto LABEL_35;
  v25 = *a6;
  if ( (v41 & *(_QWORD *)(a4 + 24)) != 0 )
  {
    if ( v25
      && (unsigned int)((0x101010101010101LL
                       * ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 < KiPerfIsoEnabled )
    {
      return v7;
    }
    v41 &= *(_QWORD *)(a4 + 24);
LABEL_35:
    v36 = *(_QWORD *)(a4 + 32);
    v37 = v41;
    if ( (v36 & v41) != 0 )
      v37 = v36 & v41;
    if ( (v37 & *(_QWORD *)(v6 + 200)) != 0 )
      return v6;
    v38 = *(_QWORD *)(v6 + 34912) & v37;
    if ( v38 || (v38 = *(_QWORD *)(v6 + 34936) & v37) != 0 )
    {
      v37 = v38;
    }
    else if ( (KiCacheAwareScheduling & 1) != 0 && (*(_QWORD *)(v6 + 34928) & v37) != 0 )
    {
      v37 &= *(_QWORD *)(v6 + 34928);
    }
    v39 = *(_BYTE *)(v6 + 209);
    _BitScanForward64(&v40, __ROR8__(v37, v39));
    return KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v6 + 208)
                                                               + (((unsigned __int8)v40 + v39) & 0x3F)]];
  }
  if ( !v25 )
  {
    v26 = *(_QWORD *)(a2 + 192);
    if ( v26 == a4 )
    {
      v27 = v41 & *(_QWORD *)(v26 + 16);
      v28 = *(_QWORD *)(a2 + 34912) & ~*(_QWORD *)(a2 + 200);
      if ( (v28 & v41) != 0 && (v27 & v28) == v28 && (*(_BYTE *)(a2 + 13244) & 1) == 0 && !*(_DWORD *)(a2 + 32472) )
      {
        v29 = *(_QWORD *)(a2 + 8);
        if ( !*(_BYTE *)(a2 + 32) )
        {
          _disable();
          KiEndThreadCycleAccumulation(a2, *(_QWORD *)(a2 + 8), 0LL, 0LL);
          KiStartThreadCycleAccumulation(a2, v29, 0);
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            _m_prefetchw(SchedulerAssist);
            v32 = *SchedulerAssist;
            do
            {
              v33 = v32;
              v32 = _InterlockedCompareExchange(SchedulerAssist, v32 & 0xFFDFFFFF, v32);
            }
            while ( v33 != v32 );
            if ( (v32 & 0x200000) != 0 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          _enable();
        }
        v34 = *(_DWORD *)(v29 + 80);
        v35 = *(_DWORD *)(v29 + 84);
        if ( v34 >= v35 || v35 - v34 < KiShortExecutionCycles )
          v41 &= v28;
      }
    }
    goto LABEL_35;
  }
  return v7;
}
