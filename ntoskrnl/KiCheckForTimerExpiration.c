/*
 * XREFs of KiCheckForTimerExpiration @ 0x14022F940
 * Callers:
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140230870 (HalpInterruptSendIpi.c)
 *     RtlBackoff @ 0x140241660 (RtlBackoff.c)
 *     KiResetClockIntervalOneShot @ 0x1402D935C (KiResetClockIntervalOneShot.c)
 *     KiSetClockIntervalOneShot @ 0x1402D93BC (KiSetClockIntervalOneShot.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCheckForTimerExpiration(__int64 a1, unsigned int a2)
{
  _BYTE *v3; // rbx
  char v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rsi
  bool v10; // r11
  bool v11; // r15
  int *v12; // r14
  __int64 v13; // r10
  unsigned int v14; // r13d
  unsigned int v15; // r9d
  __int64 v16; // rbx
  int v17; // edx
  unsigned int v18; // edx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int8 CurrentIrql; // r14
  signed __int16 i; // dx
  _DWORD *SchedulerAssist; // r11
  __int64 v26; // r9
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  __int16 v32; // cx
  int v34; // [rsp+34h] [rbp-74h] BYREF
  _DWORD v35[6]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v36; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-48h] BYREF

  v3 = (_BYTE *)(a1 + 33);
  v4 = 0;
  v36 = 0LL;
  v5 = MEMORY[0xFFFFF78000000008];
  v6 = 0LL;
  v7 = a2;
  if ( (*(_BYTE *)(a1 + 13244) & 8) == 0 )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( !*v3 )
        goto LABEL_22;
      v8 = KiProcessorBlock[0];
    }
    else
    {
      v8 = a1;
    }
    v9 = v8 + 15360;
    if ( v8 != -15360 )
    {
      v10 = *(_QWORD *)(v8 + 32264) != KiLastNonHrTimerExpiration;
      v11 = *(_QWORD *)(v8 + 32256) != KiLastPseudoHrTimerExpiration;
      if ( KiGlobalTimerResolutionRequests )
        v10 = *(_QWORD *)(v8 + 32256) != KiLastPseudoHrTimerExpiration;
      if ( v10 || *(_QWORD *)(v8 + 32256) != KiLastPseudoHrTimerExpiration )
      {
        v12 = (int *)(v8 + 32272);
        v13 = MEMORY[0xFFFFF78000000008] >> 18;
        v14 = -1;
        v15 = 0;
        v16 = 0LL;
        while ( 1 )
        {
          v17 = *v12;
          if ( (unsigned int)(v13 - *v12) >= 0x100 )
            LODWORD(v13) = v17 + 255;
          v18 = v17 - 1;
          while ( 1 )
          {
            v6 = 32 * (v16 + (unsigned __int8)++v18);
            v19 = *(_QWORD *)(v6 + v9 + 536);
            if ( v15 != 1 || v10 )
              break;
            if ( v5 >= v19 )
            {
              if ( v14 >= v18 )
                v14 = v18;
              if ( v5 + (unsigned int)KePseudoHrTimeIncrement > (unsigned int)KeNonHrTimeIncrement + v19 )
              {
                v4 = 1;
                KiLastNonHrTimerExpiration = v5;
                v10 = 1;
                v18 = v14;
                goto LABEL_18;
              }
            }
LABEL_15:
            if ( v18 == (_DWORD)v13 )
              goto LABEL_16;
          }
          if ( v5 < v19 )
            goto LABEL_15;
          v4 = 1;
LABEL_16:
          if ( !v15 || v10 )
LABEL_18:
            *(_DWORD *)(v9 + 4LL * v15 + 16912) = v18;
          ++v15;
          ++v12;
          v16 += 256LL;
          if ( v15 >= 2 )
          {
            v7 = a2;
            break;
          }
        }
      }
      v3 = (_BYTE *)(a1 + 33);
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( v10
          || !v11
          || v5 < qword_140C41F98
          || v5 + (unsigned int)KePseudoHrTimeIncrement <= (unsigned __int64)(unsigned int)KeNonHrTimeIncrement
                                                         + qword_140C41F98 )
        {
          v3 = (_BYTE *)(a1 + 33);
          if ( v4 )
            goto LABEL_22;
          if ( v10 )
          {
            if ( KiNextTimer2DueTime > v5 )
            {
LABEL_39:
              v3 = (_BYTE *)(a1 + 33);
              goto LABEL_22;
            }
          }
          else if ( !v11 || qword_140C41F80 > v5 )
          {
            v3 = (_BYTE *)(a1 + 33);
            if ( qword_140C41F68 > v5 )
              goto LABEL_22;
          }
        }
        else
        {
          KiLastNonHrTimerExpiration = v5;
        }
        v4 = 1;
        goto LABEL_39;
      }
    }
  }
LABEL_22:
  if ( !*v3 )
    goto LABEL_23;
  v20 = qword_140C41F68;
  v21 = v5 + (unsigned int)KeMaximumIncrement;
  if ( qword_140C41F68 > v5 )
  {
    v22 = KiClockOwnerOneShotRequest;
    if ( !KiClockOwnerOneShotRequest )
      v22 = -1LL;
    if ( v22 != qword_140C41F68 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 15 )
        {
          LODWORD(v26) = 0x8000;
        }
        else
        {
          v6 = (unsigned int)CurrentIrql + 1;
          v26 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        }
        SchedulerAssist[5] |= v26;
      }
      if ( v21 > v20 )
        KiSetClockIntervalOneShot(v20, v5);
      else
        KiResetClockIntervalOneShot(v6);
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v31 = (v30 & v29[5]) == 0;
          v29[5] &= v30;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
LABEL_23:
    if ( !v4 )
      goto LABEL_24;
  }
  v34 = 0;
  _m_prefetchw((const void *)(a1 + 13244));
  for ( i = *(_WORD *)(a1 + 13244);
        i != _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 13244), i | 8, i);
        i = *(_WORD *)(a1 + 13244) )
  {
    RtlBackoff(&v34);
    _m_prefetchw((const void *)(a1 + 13244));
  }
  if ( (i & 0xA9) == 0 )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      v35[0] = 5;
      *(_OWORD *)&v35[1] = 0LL;
      HalpInterruptSendIpi(v35, 47LL);
    }
  }
LABEL_24:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x40000) != 0 && KeGetCurrentIrql() == 13 )
  {
    v31 = *v3 == 0;
    v32 = 0;
    WORD4(v36) = 0;
    *(_QWORD *)&v36 = v5;
    if ( !v31 )
    {
      v32 = 1;
      WORD4(v36) = 1;
    }
    if ( (*(_BYTE *)(a1 + 13244) & 8) != 0 )
    {
      v32 |= 8u;
      WORD4(v36) = v32;
    }
    if ( v7 <= 1 )
      WORD4(v36) = v32 | 0x10;
    v37[1] = 16LL;
    v37[0] = &v36;
    EtwTraceKernelEvent((unsigned int)v37, 1, 1074003968, 3919, 4196866);
  }
}
