/*
 * XREFs of IopMcAddMdlPagesToTable @ 0x14055C730
 * Callers:
 *     IopMcCreateBufferEntryMdl @ 0x14094E6D0 (IopMcCreateBufferEntryMdl.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     IopMcShouldYield @ 0x14055CFD0 (IopMcShouldYield.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopMcAddMdlPagesToTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  unsigned int v4; // eax
  unsigned __int64 v5; // rsi
  _DWORD *v7; // rcx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  KIRQL v10; // bl
  unsigned __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  bool v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r11
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  __int64 result; // rax
  int v30; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a2 + 44) & 0xFFF;
  v3 = *(unsigned int *)(a2 + 40) + 4095LL;
  *(_QWORD *)(a1 + 88) = a2 + 48;
  v4 = 0;
  v5 = (unsigned __int64)(v2 + v3) >> 12;
  if ( (_DWORD)v5 )
  {
    v7 = (_DWORD *)(a1 + 120);
    do
    {
      *v7 = v4++;
      v7 += 8;
    }
    while ( v4 < (unsigned int)v5 );
  }
  v30 = 0;
  v8 = 0;
  v10 = ExAcquireSpinLockExclusive(&dword_140C5D2E4);
  if ( !(_DWORD)v5 )
    goto LABEL_28;
  v11 = a1 + 96;
  do
  {
    LOBYTE(v9) = v10;
    if ( (unsigned __int8)IopMcShouldYield(v8, v9) )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C5D2E4);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
      KeYieldProcessorEx(&v30);
      v10 = ExAcquireSpinLockExclusive(&dword_140C5D2E4);
    }
    v9 = qword_140C5D2E8;
    v17 = 0;
    if ( !qword_140C5D2E8 )
      goto LABEL_26;
    v18 = *(unsigned int *)(v11 + 24);
    v19 = v11 - (unsigned int)(32 * (v18 + 3));
    v20 = *(_QWORD *)(*(_QWORD *)(v19 + 88) + 8 * v18);
    while ( 1 )
    {
      v21 = *(unsigned int *)(v9 + 24);
      v22 = v9 - (unsigned int)(32 * (v21 + 3));
      v23 = *(_QWORD *)(v22 + 88);
      if ( v20 < *(_QWORD *)(v23 + 8 * v21) )
        break;
      if ( v20 <= *(_QWORD *)(v23 + 8 * v21) )
      {
        if ( v19 < v22 )
          break;
        if ( v19 <= v22 )
          goto LABEL_27;
      }
      v24 = *(_QWORD *)(v9 + 8);
      if ( !v24 )
      {
        v17 = 1;
        goto LABEL_26;
      }
LABEL_24:
      v9 = v24;
    }
    v24 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
      goto LABEL_24;
    v17 = 0;
LABEL_26:
    RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C5D2E8, v9, v17, v11);
LABEL_27:
    ++v8;
    v11 += 32LL;
  }
  while ( v8 < (unsigned int)v5 );
LABEL_28:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C5D2E4);
  if ( KiIrqlFlags )
  {
    v25 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && v10 <= 0xFu && v25 >= 2u )
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      v28 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v16 = (v28 & v27[5]) == 0;
      v27[5] &= v28;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  result = v10;
  __writecr8(v10);
  return result;
}
