/*
 * XREFs of KiOutSwapKernelStacks @ 0x1402A7380
 * Callers:
 *     KeSwapProcessOrStack @ 0x140391CB0 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiWaitForContextSwap @ 0x1402A77E8 (KiWaitForContextSwap.c)
 *     KiDecrementProcessStackCount @ 0x1402A7824 (KiDecrementProcessStackCount.c)
 *     MmOutPageKernelStack @ 0x1402A7980 (MmOutPageKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG KiOutSwapKernelStacks()
{
  __int64 v0; // rsi
  __int64 v1; // rbx
  unsigned int v2; // r14d
  unsigned __int8 CurrentIrql; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // r8
  ULONG result; // eax
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rax
  _QWORD *v16; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v23[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-30h]

  v0 = 0LL;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v1 = KiProcessorBlock[KiLastProcessor];
  v2 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v15) = 4;
    if ( CurrentIrql != 2 )
      v15 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v15;
  }
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 32464), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(v1 + 32464) );
  }
  v4 = *(_QWORD **)(v1 + 32448);
  while ( v4 != (_QWORD *)(v1 + 32448) )
  {
    v5 = v4;
    if ( (unsigned int)v0 >= 5 )
      break;
    v6 = (__int64)(v4 - 27);
    v4 = (_QWORD *)*v4;
    if ( v2 < *(_DWORD *)(v6 + 436) )
      break;
    if ( *(char *)(v6 + 195) >= 25 )
    {
      v16 = (_QWORD *)v5[1];
      if ( (_QWORD *)v4[1] != v5 || (_QWORD *)*v16 != v5 )
        goto LABEL_36;
      *v16 = v4;
      v4[1] = v16;
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 0x11u);
      v7 = v6;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0x14u) )
        v7 = v6 | 1;
      *((_QWORD *)v23 + v0) = v7;
      v0 = (unsigned int)(v0 + 1);
      v8 = *v5;
      v9 = (_QWORD *)v5[1];
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v9 != v5 )
LABEL_36:
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    *(_QWORD *)(v6 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 32464), 0LL);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v0 )
  {
    v11 = (unsigned __int64 *)v23 + v0;
    do
    {
      --v11;
      LODWORD(v0) = v0 - 1;
      v12 = *v11 & 0xFFFFFFFFFFFFFFFEuLL;
      v13 = *v11 & 1;
      if ( !v13 )
        v12 = *v11;
      KiWaitForContextSwap(v12);
      if ( (unsigned int)v13 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v12 + 184));
      result = MmOutPageKernelStack(v12);
    }
    while ( (_DWORD)v0 );
  }
  return result;
}
