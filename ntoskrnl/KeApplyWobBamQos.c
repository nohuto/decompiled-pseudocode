__int64 __fastcall KeApplyWobBamQos(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int PrcbFlags; // ecx
  __int64 result; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *SchedulerAssist; // r8
  int v12; // ett
  struct _KPRCB *CurrentPrcb; // rbp
  int v14; // ecx
  _KCORE_CONTROL_BLOCK *CoreControlBlock; // rax
  unsigned int ProcessorCount; // ecx
  _KPRCB **Prcbs; // rdx
  __int64 v18; // r8
  int v19; // [rsp+58h] [rbp+10h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF
  struct _KPRCB *v21; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0LL;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(a2 + 64) );
  }
  v6 = (unsigned __int8)*(_DWORD *)(a3 + 512);
  v7 = (unsigned __int8)*(_DWORD *)(a2 + 512);
  if ( v6 != v7 && (v6 == 3 || v7 == 3 || v6 < v7) )
  {
    CurrentPrcb = a1;
    if ( !a1 )
      CurrentPrcb = KeGetCurrentPrcb();
    KiAcquirePrcbLocksForIsolationUnit(CurrentPrcb, 0LL, &v20);
    KiSetThreadQosLevelUnsafe(a2, v6);
    if ( CurrentPrcb->NextThread )
      goto LABEL_27;
    v14 = *(_DWORD *)(a2 + 120) >> 1;
    v21 = CurrentPrcb;
    if ( (v14 & 1) != 0 )
    {
      CoreControlBlock = CurrentPrcb->CoreControlBlock;
      ProcessorCount = CoreControlBlock->ProcessorCount;
      Prcbs = CoreControlBlock->Prcbs;
      if ( !CoreControlBlock->ProcessorCount )
      {
LABEL_27:
        KiReleasePrcbLocksForIsolationUnit(&v20);
        goto LABEL_4;
      }
    }
    else
    {
      Prcbs = &v21;
      ProcessorCount = 1;
    }
    v18 = ProcessorCount;
    do
    {
      if ( KeHeteroSystem )
        (*Prcbs)->PriorityState[64].AllFields ^= (*(_BYTE *)(a2 + 512) ^ (*Prcbs)->PriorityState[64].AllFields) & 7;
      ++Prcbs;
      --v18;
    }
    while ( v18 );
    goto LABEL_27;
  }
LABEL_4:
  *(_QWORD *)(a2 + 64) = 0LL;
  _disable();
  PrcbFlags = (unsigned __int8)a1->PrcbFlags.PrcbFlags;
  result = *(unsigned int *)(a2 + 512);
  if ( (unsigned __int8)result != PrcbFlags
    && ((unsigned __int8)result == 3 || PrcbFlags == 3 || (unsigned __int8)result < PrcbFlags) )
  {
    result = KeCheckAndApplyBamQos(a1, a2);
  }
  v10 = KeGetCurrentPrcb();
  SchedulerAssist = v10->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    LODWORD(result) = *SchedulerAssist;
    do
    {
      v12 = result;
      result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
    }
    while ( v12 != (_DWORD)result );
    if ( (result & 0x200000) != 0 )
      result = KiRemoveSystemWorkPriorityKick(v10);
  }
  _enable();
  return result;
}
