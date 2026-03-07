__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  volatile LONG *v3; // r14
  KIRQL v4; // al
  unsigned int v5; // edx
  int *v6; // rcx
  KIRQL v7; // r13
  _QWORD *v8; // rax
  unsigned int v9; // r8d
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // r15d
  _QWORD *v14; // rsi
  unsigned int v15; // ebp
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  _DWORD *v23; // r9
  int v24; // eax
  __int64 v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+48h] [rbp-70h]
  int *v27; // [rsp+50h] [rbp-68h]
  _QWORD *v28; // [rsp+58h] [rbp-60h]
  unsigned __int64 v29; // [rsp+60h] [rbp-58h]
  int v31; // [rsp+C8h] [rbp+10h]
  unsigned int v32; // [rsp+D0h] [rbp+18h]
  int v33; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 16);
  result = (unsigned __int16)KeNumberNodes;
  v29 = v1 + 25408LL * (unsigned __int16)KeNumberNodes;
  if ( v1 < v29 )
  {
    v3 = (volatile LONG *)(v1 + 23104);
    do
    {
      v4 = ExAcquireSpinLockExclusive(v3);
      v5 = 0;
      v28 = (_QWORD *)v1;
      v6 = dword_140C65800;
      v32 = 0;
      v7 = v4;
      v27 = dword_140C65800;
      v8 = (_QWORD *)v1;
      do
      {
        if ( *v8 )
        {
          v9 = *v6;
          v10 = 0;
          v33 = *v6;
          if ( MmNumberOfChannels )
          {
            do
            {
              v11 = 32LL * v10 + 560;
              v31 = 0;
              v26 = v11;
              do
              {
                v12 = v11;
                v13 = 0;
                v25 = v11;
                do
                {
                  v14 = *(_QWORD **)((char *)v8 + v12);
                  v15 = 0;
                  if ( v9 )
                  {
                    do
                    {
                      if ( (_QWORD *)*v14 != v14 )
                      {
                        if ( !(unsigned int)MiMoveLargeZeroToFree(a1, v1, v5, v31, v15, v10, v13) )
                        {
                          ExReleaseSpinLockExclusiveFromDpcLevel(v3);
                          if ( KiIrqlFlags )
                          {
                            CurrentIrql = KeGetCurrentIrql();
                            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
                            {
                              CurrentPrcb = KeGetCurrentPrcb();
                              SchedulerAssist = CurrentPrcb->SchedulerAssist;
                              v19 = ~(unsigned __int16)(-1LL << (v7 + 1));
                              v20 = (v19 & SchedulerAssist[5]) == 0;
                              SchedulerAssist[5] &= v19;
                              if ( v20 )
                                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                            }
                          }
                          __writecr8(v7);
                          --v15;
                          v14 -= 3;
                          v7 = ExAcquireSpinLockExclusive(v3);
                        }
                        v9 = v33;
                        v5 = v32;
                      }
                      ++v15;
                      v14 += 3;
                    }
                    while ( v15 < v9 );
                    v8 = v28;
                    v12 = v25;
                  }
                  v12 += 8LL;
                  ++v13;
                  v25 = v12;
                }
                while ( v13 <= 3 );
                ++v31;
                v11 = v26 + 256;
                v26 += 256LL;
              }
              while ( v31 <= 1 );
              ++v10;
            }
            while ( v10 < MmNumberOfChannels );
            v6 = v27;
          }
        }
        ++v5;
        ++v6;
        v8 += 134;
        v32 = v5;
        v27 = v6;
        v28 = v8;
      }
      while ( v5 < 3 );
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
      if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && v7 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v20 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)v22);
        }
      }
      result = v7;
      __writecr8(v7);
      v1 += 25408LL;
      v3 += 6352;
    }
    while ( v1 < v29 );
  }
  return result;
}
