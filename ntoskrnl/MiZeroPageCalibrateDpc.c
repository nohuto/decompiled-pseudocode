__int64 __fastcall MiZeroPageCalibrateDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  int v3; // r12d
  _DWORD *MmInternal; // r14
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rdx
  unsigned int DpcProcessorDone; // ebp
  int started; // esi
  __int64 result; // rax
  __int64 *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // [rsp+20h] [rbp-18h]

  v3 = 0;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  MmInternal[3120] = 0;
  v7 = (volatile signed __int32 *)(a2 + 64);
  v8 = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a2 + 200));
  if ( (_DWORD)v8 == (_DWORD)KeNumberProcessors_0 )
    v8 = (unsigned int)_InterlockedExchangeAdd(v7, KeNumberProcessors_0 + 1);
  while ( 1 )
  {
    while ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) != 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = MmInternal[3120];
        if ( v10 )
          break;
        if ( KeShouldYieldProcessor() )
          *(_DWORD *)(a2 + 192) = 1;
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      if ( v10 == 2 )
        goto LABEL_19;
LABEL_11:
      MmInternal[3120] = 0;
      MiZeroMemory(
        v8,
        *((_QWORD *)MmInternal + 1569),
        *((_QWORD *)MmInternal + 1570),
        (unsigned int)MmInternal[3136],
        v17);
      v11 = *((_QWORD *)MmInternal + 1571);
      if ( v11 )
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 240), (PSLIST_ENTRY)(v11 - 32));
    }
    DpcProcessorDone = MiZeroPageCalibrateLastDpcProcessorDone(a2);
    if ( DpcProcessorDone == 2 )
      goto LABEL_19;
    if ( *(_DWORD *)(a2 + 192) && v3 )
      break;
    v3 = 1;
    started = MiStartDpcZeroingRound(a2);
    if ( !started )
      _InterlockedIncrement(v7);
    MiWakeOnlyParticipatingProcessorsFromAssignedNode(a2, DpcProcessorDone);
    if ( started )
      goto LABEL_11;
  }
  *(_DWORD *)(a2 + 196) = 1;
LABEL_19:
  result = (unsigned int)KeNumberProcessors_0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v15 = KiProcessorBlock;
    v16 = (unsigned int)KeNumberProcessors_0;
    do
    {
      result = *v15++;
      *(_DWORD *)(*(_QWORD *)(result + 33592) + 12480LL) = 2;
      --v16;
    }
    while ( v16 );
  }
  _InterlockedDecrement(a3);
  return result;
}
