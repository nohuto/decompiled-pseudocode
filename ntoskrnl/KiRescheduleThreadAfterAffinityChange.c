char __fastcall KiRescheduleThreadAfterAffinityChange(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        __int64 *a6,
        volatile signed __int64 *a7,
        _QWORD *a8)
{
  struct _KPRCB *CurrentPrcb; // r13
  char v12; // r12
  int v13; // ebx
  __int64 v14; // rax
  __int64 *v15; // rbx
  bool v16; // zf
  bool v17; // zf
  __int64 *RescheduleContextEntryForPrcb; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // r11
  char v22; // r10
  unsigned int v23; // ebx
  __int64 v24; // r10
  __int64 *v25; // rcx
  _DWORD v27[84]; // [rsp+30h] [rbp-188h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v13 = a4;
  LOBYTE(v14) = (unsigned __int8)memset(v27, 0, sizeof(v27));
  switch ( v13 )
  {
    case 1:
      v23 = *(char *)(a1 + 195);
      KiRemoveThreadFromAnyReadyQueue(a5, (__int64)a7, a1, v23);
      LOBYTE(v14) = KiPrepareReadyThreadForRescheduling(a1, v23, (__int64)a8);
      goto LABEL_4;
    case 2:
      if ( a2 )
      {
        LODWORD(v14) = KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a5 + 36));
        v16 = (_DWORD)v14 == 0;
      }
      else
      {
        if ( !a3 )
          goto LABEL_4;
        v14 = *(_QWORD *)a3 >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] & 0x3F);
        v16 = (((unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] >> 6 == *(unsigned __int16 *)(a3 + 8)) & (unsigned __int8)v14) == 0;
      }
      if ( !v16 )
      {
LABEL_4:
        v15 = a6;
        goto LABEL_5;
      }
      LOBYTE(v14) = *(_BYTE *)(a1 + 388);
      if ( (_BYTE)v14 != 2 )
      {
        *(_BYTE *)(a1 + 112) |= 8u;
        goto LABEL_4;
      }
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v17 = *(_QWORD *)(a5 + 16) == 0LL;
      break;
    case 3:
      if ( a2 )
      {
        LODWORD(v14) = KeCheckProcessorAffinityEx(a2, *(_DWORD *)(a5 + 36));
        v17 = (_DWORD)v14 == 0;
      }
      else
      {
        if ( !a3 )
          goto LABEL_4;
        v14 = *(_QWORD *)a3 >> (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] & 0x3F);
        v17 = (((unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a5 + 36)] >> 6 == *(unsigned __int16 *)(a3 + 8)) & (unsigned __int8)v14) == 0;
      }
      break;
    default:
      goto LABEL_4;
  }
  if ( !v17 )
    goto LABEL_4;
  v15 = a6;
  KiStartRescheduleContext((__int64)v27, a6, a1);
  RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v27, a5);
  KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v19, 0, 1);
  if ( (v22 & 2) != 0 )
  {
    LOBYTE(v20) = v27[0];
    v24 = 0LL;
    if ( LOBYTE(v27[0]) )
    {
      do
      {
        v25 = (__int64 *)&v27[10 * v24 + 4];
        if ( v25 != v21 )
        {
          KiAdjustRescheduleContextEntryForThreadRemoval(v25, v20, 0, 1);
          LOBYTE(v20) = v27[0];
        }
        v24 = (unsigned int)(v24 + 1);
      }
      while ( (unsigned int)v24 < (unsigned __int8)v20 );
    }
    v27[1] = 0;
  }
  KiSearchForNewThreadsForRescheduleContext(v27, (__int64)a8);
  LOBYTE(v14) = KiCommitRescheduleContext((unsigned __int8 *)v27, CurrentPrcb, 0, a8);
  v12 = v14;
LABEL_5:
  if ( a5 )
    LOBYTE(v14) = KiReleasePrcbLocksForIsolationUnit(v15);
  if ( a7 )
    _InterlockedAnd64(a7, 0LL);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v12 )
  {
    KiCompleteRescheduleContext(v27, CurrentPrcb);
    LOBYTE(v14) = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
  }
  return v14;
}
