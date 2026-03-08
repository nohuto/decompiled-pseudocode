/*
 * XREFs of MiMirrorNodeLargePages @ 0x14064CF54
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x140624848 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x140625C30 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMirrorAddPagesToBrownList @ 0x1406246DC (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x140624E58 (MiMirrorOmitPagesFromCopy.c)
 */

volatile LONG *__fastcall MiMirrorNodeLargePages(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  volatile LONG *result; // rax
  KIRQL v6; // al
  int *v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // r13
  unsigned int v12; // ecx
  __int64 i; // rbp
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD **v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rsi
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int64 *v29; // [rsp+40h] [rbp-88h]
  int *v30; // [rsp+48h] [rbp-80h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  unsigned __int64 v33; // [rsp+60h] [rbp-68h]
  unsigned __int64 v34; // [rsp+68h] [rbp-60h]
  unsigned __int64 v35; // [rsp+70h] [rbp-58h]
  unsigned __int8 v37; // [rsp+D8h] [rbp+10h]
  int v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v38 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = a1;
  result = (volatile LONG *)(unsigned __int16)KeNumberNodes;
  v37 = 17;
  v33 = v3;
  v35 = v3 + 25408LL * (unsigned __int16)KeNumberNodes;
  if ( v3 < v35 )
  {
    result = (volatile LONG *)(v3 + 23104);
    SpinLock = (volatile LONG *)(v3 + 23104);
    do
    {
      if ( !a3 )
      {
        v6 = ExAcquireSpinLockExclusive(result);
        v4 = a1;
        v37 = v6;
      }
      v7 = dword_140C65800;
      v31 = v3;
      v8 = MiLargePageSizes;
      v30 = dword_140C65800;
      v9 = v3;
      v29 = MiLargePageSizes;
      v32 = 3LL;
      do
      {
        v10 = *v8;
        v11 = 0LL;
        v12 = *v7;
        v34 = v10;
        v39 = *v7;
        v28 = 0LL;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v14 = 0;
            if ( MmNumberOfChannels )
            {
              do
              {
                v15 = 4LL;
                v27 = 4LL;
                v16 = 32 * (4 * (v11 + i) + v14) + 560;
                do
                {
                  v17 = *(_QWORD ***)(v9 + v16);
                  if ( v12 )
                  {
                    v18 = v12;
                    v26 = v12;
                    do
                    {
                      v19 = *v17;
                      if ( *v17 != v17 )
                      {
                        do
                        {
                          if ( v38 )
                            MiMirrorOmitPagesFromCopy(
                              v4,
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x44000000000LL) >> 4),
                              v34);
                          else
                            MiMirrorAddPagesToBrownList(
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x44000000000LL) >> 4),
                              v34);
                          v19 = (_QWORD *)*v19;
                          v4 = a1;
                        }
                        while ( v19 != v17 );
                        v18 = v26;
                      }
                      v4 = a1;
                      v17 += 3;
                      v26 = --v18;
                    }
                    while ( v18 );
                    v15 = v27;
                    v9 = v31;
                    v12 = v39;
                  }
                  v4 = a1;
                  v16 += 8LL;
                  v27 = --v15;
                }
                while ( v15 );
                ++v14;
              }
              while ( v14 < MmNumberOfChannels );
              v11 = v28;
            }
            v4 = a1;
          }
          v11 += 2LL;
          v28 = v11;
        }
        while ( v11 <= 2 );
        v9 += 1072LL;
        v8 = v29 + 1;
        v7 = v30 + 1;
        ++v29;
        v20 = v32-- == 1;
        ++v30;
        v31 = v9;
      }
      while ( !v20 );
      if ( !v38 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (v37 + 1));
            v20 = (v24 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v24;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v37);
      }
      a3 = v38;
      v3 = v33 + 25408;
      v4 = a1;
      result = SpinLock + 6352;
      v33 = v3;
      SpinLock += 6352;
    }
    while ( v3 < v35 );
  }
  return result;
}
