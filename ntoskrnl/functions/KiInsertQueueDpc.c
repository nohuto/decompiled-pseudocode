__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // r10
  unsigned __int8 v6; // r15
  unsigned __int64 v8; // r12
  char v9; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v12; // rbx
  __int64 v13; // rsi
  signed __int64 IsrDpcStats; // rcx
  int v15; // r11d
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // r11d
  __int64 v20; // r10
  unsigned __int64 v21; // r8
  _QWORD *v22; // r9
  _QWORD *v23; // rcx
  char v24; // al
  __int16 v25; // r9
  __int16 v26; // r10
  signed __int16 v27; // dx
  struct _KPRCB *v29; // rax
  __int64 v30; // rax
  __int16 v31; // r9
  _DWORD *SchedulerAssist; // rbx
  __int64 v33; // r9
  unsigned __int8 v34; // cl
  struct _KPRCB *v35; // rax
  _DWORD *v36; // r9
  int v37; // edx
  bool v38; // zf
  int v39; // [rsp+40h] [rbp-B8h]
  int Number; // [rsp+44h] [rbp-B4h]
  int v41; // [rsp+48h] [rbp-B0h]
  unsigned __int8 v42; // [rsp+50h] [rbp-A8h]
  int v43; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+60h] [rbp-98h]
  unsigned __int64 v45; // [rsp+68h] [rbp-90h]
  unsigned __int64 v46; // [rsp+70h] [rbp-88h]
  unsigned __int64 v47; // [rsp+78h] [rbp-80h]
  unsigned __int64 v48; // [rsp+80h] [rbp-78h]
  _DWORD v49[6]; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+A0h] [rbp-58h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  bool v52; // [rsp+100h] [rbp+8h]
  __int64 v53; // [rsp+108h] [rbp+10h]
  __int64 v54; // [rsp+110h] [rbp+18h]

  v54 = a3;
  v53 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v41 = 0;
  v39 = 0;
  v8 = 0LL;
  v52 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v33) = 0x8000;
    else
      v33 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v33;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 < 0x800u )
  {
    Number = CurrentPrcb->Number;
    if ( (_WORD)v5 != (_WORD)Number )
      v9 = 1;
    v12 = (__int64)CurrentPrcb;
  }
  else
  {
    Number = v5 - 2048;
    v12 = KiProcessorBlock[(unsigned int)(v5 - 2048)];
    if ( !v12 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v12 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v12 + 209));
  if ( *(_BYTE *)BugCheckParameter2 != 26 || (v13 = v12 + 13168, !*(_BYTE *)(v12 + 13240)) )
    v13 = v12 + 13120;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
      goto LABEL_10;
    KxWaitForSpinLockAndAcquire(v13 + 16);
  }
  a2 = v53;
  a3 = v54;
LABEL_10:
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v15 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(v13 + 24);
    v39 = v15;
    *(_DWORD *)(v13 + 24) = v15 + 1;
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v52 )
    {
      v15 = *(_DWORD *)(v13 + 24);
      v39 = v15;
      v41 = *(_DWORD *)(v13 + 28);
    }
    v16 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v30 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v16;
      *v16 = v30;
      *(_QWORD *)v13 = v16;
    }
    else
    {
      *v16 = 0LL;
      **(_QWORD **)(v13 + 8) = v16;
      *(_QWORD *)(v13 + 8) = v16;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
    v17 = *(_QWORD *)(v12 + 35000);
    if ( v17 && v13 == v12 + 13120 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 28));
    }
    else if ( v13 != v12 + 13120 )
    {
      goto LABEL_28;
    }
    v18 = *(_QWORD *)(v12 + 13072);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 4) >> 5;
      v20 = -1LL << (*(_BYTE *)(v18 + 4) & 0x1F);
      v21 = *(_QWORD *)(BugCheckParameter2 + 24) & v20;
      v48 = HIWORD(v21);
      v47 = v21 >> 40;
      v46 = HIDWORD(v21);
      v45 = v21 >> 24;
      v44 = v21 >> 16;
      if ( v19 )
      {
        v50 = v21;
        v22 = (_QWORD *)(*(_QWORD *)(v18 + 8)
                       + 8
                       * ((HIBYTE(v21)
                         + 37
                         * ((unsigned __int8)v48
                          + 37
                          * ((unsigned __int8)v47
                           + 37
                           * ((unsigned __int8)v46
                            + 37
                            * ((unsigned __int8)v45
                             + 37 * ((unsigned __int8)v44 + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)(v19 - 1)));
        while ( 1 )
        {
          v23 = (_QWORD *)*v22;
          v22 = v23;
          if ( ((unsigned __int8)v23 & 1) != 0 )
            break;
          if ( v21 == (v20 & v23[1]) )
          {
            v8 = v23[2];
            v15 = v39;
            if ( v8 > (unsigned int)KiLongDpcRuntimeThresholdCycles )
              *(_DWORD *)(v13 + 40) = 1;
            goto LABEL_28;
          }
        }
      }
      v15 = v39;
    }
  }
LABEL_28:
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v15 = v39;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  if ( v6 )
  {
    if ( v52 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(KiWaitAlways ^ BugCheckParameter2),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v15,
        v41,
        Number,
        *(_BYTE *)(BugCheckParameter2 + 1),
        v8);
    if ( v13 == v12 + 13168 )
    {
      if ( (KiSetDpcRequestFlag(v12 + 13246, 2LL) & 0xAF) != 0 )
        goto LABEL_47;
      v25 = 4;
      goto LABEL_40;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 13224) )
    {
      v24 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( !v24 && *(_DWORD *)(v12 + 13228) >= *(_DWORD *)(v12 + 13232) )
          goto LABEL_57;
      }
      else if ( v24 != 3 && v24 != 2 )
      {
LABEL_57:
        if ( (KiSetDpcRequestFlag(v12 + 13244, 16LL) & 0xAF) != 0
          || (*(_QWORD *)(*(_QWORD *)(v12 + 192) + 64LL) & *(_QWORD *)(v12 + 200)) == 0LL )
        {
          goto LABEL_47;
        }
      }
    }
    v25 = 2;
LABEL_40:
    v26 = 175;
    if ( (struct _KPRCB *)v12 == CurrentPrcb )
    {
      v26 = 169;
      v25 |= 0x20u;
    }
    v43 = 0;
    _m_prefetchw((const void *)(v12 + 13244));
    v27 = *(_WORD *)(v12 + 13244);
    if ( v27 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 13244), v25 | v27, v27) )
    {
      do
      {
        RtlBackoff(&v43);
        _m_prefetchw((const void *)(v12 + 13244));
        v27 = *(_WORD *)(v12 + 13244);
      }
      while ( v27 != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 13244), v31 | v27, v27) );
    }
    if ( ((unsigned __int16)v27 & (unsigned __int16)v26) == 0 )
    {
      if ( (struct _KPRCB *)v12 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v49[0] = 5;
          *(_OWORD *)&v49[1] = 0LL;
          HalpInterruptSendIpi(v49, 47LL);
        }
      }
      else if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v12 + 24) || *(_BYTE *)(v12 + 7) )
      {
        KiHvEnlightenedGuestPriorityKick((__int64)CurrentPrcb, v12, KiVpThreadSystemWorkPriority);
        v29 = KeGetCurrentPrcb();
        ++v29->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(Number, 2);
      }
    }
  }
LABEL_47:
  if ( KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && v42 <= 0xFu && v34 >= 2u )
    {
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (v42 + 1));
      v38 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  __writecr8(v42);
  return v6;
}
