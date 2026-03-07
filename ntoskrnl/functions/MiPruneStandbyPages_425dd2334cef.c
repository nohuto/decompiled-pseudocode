__int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned __int16 v9; // cx
  unsigned int v10; // r12d
  int v11; // r15d
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  unsigned __int64 i; // rsi
  signed __int32 v17; // ecx
  ULONG_PTR Page; // rax
  unsigned __int64 v19; // rbp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  __int64 result; // rax
  __int64 v26; // rbp
  BOOL IsFreeZeroPfnCold; // eax
  __int64 v28; // r8
  unsigned int v29; // edx
  __int64 v30; // rbx
  unsigned int PfnChannel; // eax
  __int64 v32; // rax
  ULONG_PTR v33; // rsi
  unsigned __int64 v34; // rbx
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  ULONG_PTR v37; // [rsp+20h] [rbp-68h]
  ULONG_PTR v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+28h] [rbp-60h]
  __int128 v40; // [rsp+30h] [rbp-58h] BYREF
  int v41; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+98h] [rbp+10h]

  v40 = 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  v8 = a3;
  v9 = KeNumberNodes;
  v10 = 1;
  v41 = *(_DWORD *)(v7 + 23000) & 1;
  v11 = 2;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_44;
  do
  {
    v12 = *(unsigned int *)(qword_140C65718 + 4LL * (v10 + a2 * v9));
    v13 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 25408 * v12);
    if ( v13[2854] || !(_DWORD)InitializationPhase )
    {
      v14 = (unsigned int)MmNumberOfChannels;
      if ( MmNumberOfChannels )
      {
        v15 = v14 * MiNodeFreeZeroPages(v13, v8, 4096);
        if ( v15 > 0x10000 )
        {
          MiInitializePageColorBase(0LL, v12 + 1, (__int64)&v40);
          for ( i = v15 - 0x10000; i; --i )
          {
            v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v40, 1u);
            Page = MiGetPage(a1, DWORD2(v40) & (unsigned int)v17 | HIDWORD(v40), 0x40u);
            v38 = Page;
            if ( Page != -1LL )
            {
              v37 = MiSwapNumaStandbyPage(Page);
              v19 = (unsigned __int8)MiLockPageInline(48 * v37 - 0x220000000000LL);
              MiInsertPageInFreeOrZeroedList(v37, 2);
              _InterlockedAnd64((volatile signed __int64 *)(48 * v37 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                  v24 = (v23 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v23;
                  if ( v24 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(v19);
              result = v37;
              if ( v37 == v38 )
                return result;
              if ( ++v6 == a4 )
              {
                result = MiFreeZeroPagesNeeded(a1, a2, a3);
                a4 = result;
                if ( !result )
                  return result;
                v6 = 0LL;
              }
            }
          }
        }
        v8 = a3;
      }
    }
    v9 = KeNumberNodes;
    ++v10;
  }
  while ( v10 < (unsigned __int16)KeNumberNodes );
LABEL_44:
  while ( 1 )
  {
    result = MiRemoveLowestPriorityStandbyPage(a1, 8LL, 0LL);
    v33 = result;
    if ( result == -1 )
      break;
    v39 = v6;
    v42 = 0;
    v26 = 48 * result - 0x220000000000LL;
    ++v6;
    IsFreeZeroPfnCold = MiIsFreeZeroPfnCold(v26);
    v29 = v11 & 0xFFFFFBFF;
    v11 |= 0x400u;
    if ( !IsFreeZeroPfnCold )
      v11 = v29;
    v30 = *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * (v28 >> 4)) + 2);
    PfnChannel = MiGetPfnChannel(48 * v33 - 0x220000000000LL);
    if ( (_DWORD)v30 != a2 || PfnChannel != a3 && v41 )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(*(_QWORD *)(a1 + 16) + 25408 * v30), PfnChannel, 4096) >= 0x200 )
      {
        v32 = MiSwapNumaStandbyPage(v33);
        if ( v32 == v33 )
        {
          v42 = 1;
        }
        else
        {
          v33 = v32;
          v26 = 48 * v32 - 0x220000000000LL;
          v11 &= ~0x400u;
        }
      }
      else
      {
        v6 = v39;
      }
    }
    v34 = (unsigned __int8)MiLockPageInline(v26);
    MiInsertPageInFreeOrZeroedList(v33, v11);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v34 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
        v24 = ((unsigned int)result & v36[5]) == 0;
        v36[5] &= result;
        if ( v24 )
          result = KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    __writecr8(v34);
    if ( v42 )
      break;
    if ( v6 == a4 )
    {
      result = MiFreeZeroPagesNeeded(a1, a2, a3);
      a4 = result;
      if ( !result )
        return result;
      v6 = 0LL;
    }
  }
  return result;
}
