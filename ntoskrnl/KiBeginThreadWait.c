/*
 * XREFs of KiBeginThreadWait @ 0x1402934C0
 * Callers:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     KeWaitForAlertByThreadId @ 0x140293354 (KeWaitForAlertByThreadId.c)
 *     KiWaitForAllObjects @ 0x1402936D0 (KiWaitForAllObjects.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14023A168 (KiCheckForThreadDispatch.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, char a2, char a3, char a4)
{
  unsigned __int8 v4; // r14
  __int64 v6; // rbp
  unsigned int v9; // esi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v14; // zf
  unsigned __int8 v15; // cl
  _DWORD *v16; // r9
  __int64 v17; // rdx
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_BYTE *)(a1 + 390);
  v6 = a2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = v6;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = (SchedulerAssist[5] & 0xFFFF0003) == 0;
        SchedulerAssist[5] &= 0xFFFF0003;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
    {
      v16 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v15 == 2 )
        LODWORD(v17) = 4;
      else
        v17 = (-1LL << (v15 + 1)) & 4;
      v16[5] |= v17;
    }
    *(_BYTE *)(a1 + 390) = 0;
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(v6 + a1 + 114) )
    {
      *(_BYTE *)(v6 + a1 + 114) = 0;
      v9 = 257;
    }
    else if ( (_BYTE)v6 && *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
      v9 = 192;
    }
    else if ( *(_BYTE *)(a1 + 114) )
    {
      *(_BYTE *)(a1 + 114) = 0;
      v9 = 257;
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
      goto LABEL_11;
  }
  else if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && (_BYTE)v6 )
  {
    v9 = 192;
LABEL_11:
    *(_QWORD *)(a1 + 64) = 0LL;
    KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v4);
    return v9;
  }
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = a3;
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  result = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
