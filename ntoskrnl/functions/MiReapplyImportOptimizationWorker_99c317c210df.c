ULONG_PTR __fastcall MiReapplyImportOptimizationWorker(ULONG_PTR Argument)
{
  __int64 CurrentIrql; // rsi
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // r13
  signed __int32 v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rbp
  int IsVerifierApplicableToImage; // edi
  unsigned int v12; // edi
  __int64 v13; // r8
  _QWORD *v14; // r14
  __int64 v15; // r11
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // edi
  unsigned int v22; // ebp
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // rdx
  unsigned __int16 *v26; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v28; // r8
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  bool v35; // zf
  __int16 v37; // [rsp+80h] [rbp-8h]
  __int64 v38; // [rsp+90h] [rbp+8h] BYREF
  int v39; // [rsp+98h] [rbp+10h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+18h]
  __int64 v41; // [rsp+A8h] [rbp+20h]

  v39 = 0;
  KeGetCurrentIrql();
  CurrentIrql = KeGetCurrentIrql();
  v38 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( (_BYTE)CurrentIrql == 15 )
      LODWORD(v4) = 0x8000;
    else
      v4 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v4;
  }
  _disable();
  v5 = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( v5 )
    _InterlockedOr(v5, 0x200000u);
  v6 = *(_QWORD *)(Argument + 24);
  v7 = _InterlockedDecrement((volatile signed __int32 *)Argument);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    LODWORD(v38) = 0;
    while ( (*(_DWORD *)Argument & 0x80000000) != v8 )
      KeYieldProcessorEx(&v38);
    while ( !*(_DWORD *)(Argument + 8) )
      KeYieldProcessorEx(&v39);
    IsVerifierApplicableToImage = 0;
  }
  else
  {
    *(_DWORD *)Argument = *(_DWORD *)(Argument + 4) | v8;
    v9 = *(_QWORD *)(Argument + 16);
    v10 = *(_QWORD *)(*(_QWORD *)(Argument + 32) + 24LL);
    v41 = *(_QWORD *)(v6 + 24);
    v40 = v10;
    IsVerifierApplicableToImage = MmIsVerifierApplicableToImage(v9);
    if ( IsVerifierApplicableToImage >= 0 )
    {
      v12 = 0;
      if ( *(unsigned int *)(Argument + 48) / 0x18uLL )
      {
        v13 = 0LL;
        v14 = (_QWORD *)(Argument + 56);
        do
        {
          v15 = *(_QWORD *)(Argument + 40);
          v16 = *(int *)(v15 + 24 * v13);
          *(_QWORD *)(v15 + 24 * v13 + 16) = *(_QWORD *)(v10 + 8 * v16);
          *(_QWORD *)(v10 + 8 * v16) = *(_QWORD *)(v15 + 24 * v13 + 8);
          v17 = (_QWORD *)*v14;
          if ( (_QWORD *)*v14 != v14 )
          {
            do
            {
              v18 = 0LL;
              v19 = *((_DWORD *)v17 + 34) >> 3;
              if ( v19 )
              {
                v20 = v17[16];
                while ( *(_QWORD *)(v20 + 8 * v18) != *(_QWORD *)(v15 + 24 * v13 + 16) )
                {
                  v18 = (unsigned int)(v18 + 1);
                  if ( (unsigned int)v18 >= v19 )
                    goto LABEL_21;
                }
                *(_QWORD *)(v20 + 8 * v18) = *(_QWORD *)(v15 + 24 * v13 + 8);
              }
LABEL_21:
              v17 = (_QWORD *)*v17;
            }
            while ( v17 != v14 );
            v10 = v40;
          }
          v13 = ++v12;
        }
        while ( v12 < *(unsigned int *)(Argument + 48) / 0x18uLL );
        LOBYTE(CurrentIrql) = v38;
      }
      v21 = 0;
      v22 = (*(_DWORD *)(v6 + 40) >> 12) + ((*(_DWORD *)(v6 + 40) & 0xFFF) != 0);
      if ( v22 )
      {
        v23 = v41;
        v24 = 56LL;
        do
        {
          v25 = *(_QWORD *)(Argument + 32);
          v26 = *(unsigned __int16 **)(v25 + v24);
          if ( v26
            && (*(_BYTE *)(((((unsigned __int64)(v21 << 12) + v23) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
          {
            MiApplyRetpolineFixups((v21 << 12) + v23, v25, (__int64)v26, v21 << 12, v25, v26, 0);
          }
          ++v21;
          v24 += 8LL;
        }
        while ( v21 < v22 );
      }
      IsVerifierApplicableToImage = 0;
    }
    _InterlockedIncrement((volatile signed __int32 *)(Argument + 8));
  }
  if ( (v37 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v28 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v28 )
    {
      _m_prefetchw(v28);
      v29 = *v28;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(v28, v29 & 0xFFDFFFFF, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v35 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v35 )
        KiRemoveSystemWorkPriorityKick((__int64)v32);
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return IsVerifierApplicableToImage;
}
