__int64 __fastcall MiEmptyPteBins(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // ecx
  __int64 v4; // rsi
  int v5; // r13d
  int i; // r12d
  int v7; // ebx
  unsigned int j; // edi
  signed __int64 v9; // rax
  volatile signed __int64 *v11; // r9
  __int64 *v12; // r10
  int v13; // r11d
  unsigned __int8 CurrentIrql; // r14
  signed __int64 v15; // rtt
  unsigned __int8 MayNeedFlush; // al
  ULONG_PTR *v17; // r10
  int v18; // ebp
  unsigned __int64 v19; // r15
  _DWORD *SchedulerAssist; // r10
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // eax
  unsigned __int8 v31; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v33; // r8
  signed __int32 v34[26]; // [rsp+0h] [rbp-68h] BYREF
  int v36; // [rsp+80h] [rbp+18h]
  signed __int64 v37; // [rsp+88h] [rbp+20h] BYREF

  v37 = 0LL;
  v1 = 0;
  _InterlockedOr(v34, 0);
  v3 = KiTbFlushTimeStamp;
  v4 = *(_QWORD *)(a1 + 72);
  v36 = KiTbFlushTimeStamp;
  if ( (__int64 *)a1 == &qword_140C695C0 )
  {
    v5 = 3;
  }
  else if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
  {
    v5 = 2;
  }
  else
  {
    v5 = 1;
  }
  for ( i = 0; i < v5; ++i )
  {
    v7 = 0;
    if ( KeNumberNodes )
    {
      while ( 2 )
      {
        for ( j = 0; j < 8; ++j )
        {
          v9 = *(_QWORD *)(v4 + 8LL * j);
          v37 = v9;
          if ( (_DWORD)v9 )
          {
            if ( !(unsigned __int8)MiTbFlushTimeStampMayNeedFlush((unsigned int)v9, v3, 0xFFFFFFFFLL) || v13 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                if ( CurrentIrql == 2 )
                  LODWORD(v21) = 4;
                else
                  v21 = (-1LL << (CurrentIrql + 1)) & 4;
                SchedulerAssist[5] |= v21;
                v12 = (__int64 *)a1;
              }
              if ( CurrentIrql == 2 && v12 == &qword_140C695C0 && i )
              {
                if ( KiIrqlFlags )
                {
                  v31 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v31 - 2) <= 0xDu )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v33 = CurrentPrcb->SchedulerAssist;
                    v26 = (v33[5] & 0xFFFF0007) == 0;
                    v33[5] &= 0xFFFF0007;
                    if ( v26 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
                __writecr8(2uLL);
                return v1;
              }
              v15 = v37;
              if ( v15 == _InterlockedCompareExchange64(v11, 0LL, v37) )
              {
                _InterlockedOr(v34, 0);
                MayNeedFlush = MiTbFlushTimeStampMayNeedFlush(
                                 (unsigned int)v37,
                                 (unsigned int)KiTbFlushTimeStamp,
                                 0xFFFFFFFFLL);
                if ( i == 2 )
                {
                  v18 = MiReleaseLargePdeMappings(v17, &v37, MayNeedFlush);
                  if ( KiIrqlFlags )
                  {
                    v22 = KeGetCurrentIrql();
                    if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
                    {
                      v23 = KeGetCurrentPrcb();
                      v24 = v23->SchedulerAssist;
                      v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v26 = (v25 & v24[5]) == 0;
                      v24[5] &= v25;
                      if ( v26 )
                        KiRemoveSystemWorkPriorityKick(v23);
                    }
                  }
                  v19 = CurrentIrql;
                  __writecr8(CurrentIrql);
                }
                else
                {
                  v18 = MiReleaseSmallPteMappings(v17, i, HIDWORD(v37), MayNeedFlush);
                  v19 = CurrentIrql;
                }
                _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 64), -v18);
                v1 = 1;
              }
              else
              {
                --j;
                v19 = CurrentIrql;
              }
              if ( KiIrqlFlags )
              {
                v27 = KeGetCurrentIrql();
                if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
                {
                  v28 = KeGetCurrentPrcb();
                  v29 = v28->SchedulerAssist;
                  v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v26 = (v30 & v29[5]) == 0;
                  v29[5] &= v30;
                  if ( v26 )
                    KiRemoveSystemWorkPriorityKick(v28);
                }
              }
              __writecr8(v19);
            }
            v3 = v36;
          }
        }
        v4 += 72LL;
        if ( ++v7 < (unsigned int)(unsigned __int16)KeNumberNodes )
          continue;
        break;
      }
    }
  }
  return v1;
}
