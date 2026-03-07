void __fastcall MiComputeNodeMemory(__int16 *a1, int a2)
{
  unsigned int *v2; // r15
  unsigned __int64 v3; // r13
  _DWORD *v5; // r14
  unsigned __int64 v6; // rbp
  __int64 v7; // r9
  unsigned int *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  volatile LONG *v11; // r10
  unsigned int *v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdx
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned int *v21; // rax
  unsigned int *v22; // rdx
  __int64 *v23; // r8
  __int64 v24; // r11
  unsigned __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // r10
  _QWORD *v28; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int16 v34; // [rsp+20h] [rbp-78h]
  unsigned __int64 v35; // [rsp+28h] [rbp-70h]
  int v36; // [rsp+30h] [rbp-68h]
  volatile LONG *SpinLock; // [rsp+38h] [rbp-60h]
  int v38; // [rsp+40h] [rbp-58h]
  _OWORD v39[2]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v40; // [rsp+68h] [rbp-30h] BYREF

  v2 = (unsigned int *)*((_QWORD *)a1 + 4);
  v3 = -1LL;
  v34 = *a1;
  v36 = a2;
  v35 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( v2 )
  {
    v7 = *v2;
    v38 = *v2;
    v8 = &v2[4 * v7 + 4];
    if ( (_DWORD)v7 )
    {
      v3 = *((_QWORD *)v2 + 2);
      v6 = *(_QWORD *)&v2[4 * (unsigned int)(v7 - 1) + 6] + *(_QWORD *)&v2[4 * (unsigned int)(v7 - 1) + 4] - 1LL;
      v35 = v6;
    }
    *((_QWORD *)a1 + 2128) = v3;
    *((_QWORD *)a1 + 2129) = v6;
  }
  else
  {
    LODWORD(v7) = 0;
    v8 = 0LL;
    v38 = 0;
    if ( !a2 )
    {
      v21 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 1u);
      LODWORD(v7) = 0;
      v5 = v21;
      a2 = v36;
      v8 = &v21[4 * *v21 + 4];
    }
  }
  v9 = 0;
  v10 = *((_QWORD *)a1 + 2);
  if ( KeNumberNodes )
  {
    v11 = (volatile LONG *)(v10 + 23016);
    SpinLock = (volatile LONG *)(v10 + 23016);
    do
    {
      memset(v39, 0, sizeof(v39));
      if ( a2 )
      {
        if ( (_DWORD)v7 )
        {
          v12 = v8 + 1;
          v7 = (unsigned int)v7;
          v13 = v2 + 6;
          do
          {
            if ( *(v12 - 1) == v9 )
              *((_QWORD *)v39 + *v12) += *v13;
            v13 += 2;
            v12 += 2;
            --v7;
          }
          while ( v7 );
        }
      }
      else if ( *v5 )
      {
        v22 = v8;
        v23 = (__int64 *)(v5 + 6);
        v24 = (unsigned int)*v5;
        do
        {
          if ( *v22 == v9 )
          {
            v25 = *(v23 - 1);
            v26 = v22[1];
            v27 = *v23;
            if ( *v23 )
            {
              v28 = (_QWORD *)(48 * v25 - 0x21FFFFFFFFD8LL);
              do
              {
                if ( ((*v28 >> 43) & 0x3FF) == v34 )
                {
                  ++*((_QWORD *)v39 + v26);
                  if ( v3 > v25 )
                    v3 = v25;
                  if ( v6 < v25 )
                    v6 = v25;
                }
                ++v25;
                v28 += 6;
                --v27;
              }
              while ( v27 );
              v35 = v6;
            }
          }
          v22 += 2;
          v23 += 2;
          --v24;
        }
        while ( v24 );
        v11 = SpinLock;
      }
      if ( a1 == (__int16 *)&MiSystemPartition && MmNumberOfChannels )
      {
        v14 = v39;
        v15 = (unsigned int)MmNumberOfChannels;
        do
        {
          *v14 -= *(_QWORD *)((char *)v14 + (_QWORD)&qword_140C67250 + 32LL * v9 - (_QWORD)v39);
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      v16 = 0LL;
      v17 = ExAcquireSpinLockExclusive(v11);
      if ( MmNumberOfChannels )
      {
        v18 = v39;
        v19 = (unsigned int)MmNumberOfChannels;
        do
        {
          v16 += *v18;
          *(_QWORD *)((char *)v18 + (char *)SpinLock - (char *)&v40 - 184) = *v18;
          ++v18;
          --v19;
        }
        while ( v19 );
      }
      *((_QWORD *)SpinLock - 23) = v16;
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
          v33 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v17);
      ++v9;
      v11 = SpinLock + 6352;
      v6 = v35;
      LODWORD(v7) = v38;
      a2 = v36;
      SpinLock += 6352;
    }
    while ( v9 < (unsigned __int16)KeNumberNodes );
  }
  *((_QWORD *)a1 + 2129) = v6;
  v20 = 0LL;
  if ( v3 <= v6 )
    v20 = v3;
  *((_QWORD *)a1 + 2128) = v20;
  if ( v5 )
    MiDereferencePageRunsEx((__int64)v5, 1);
}
