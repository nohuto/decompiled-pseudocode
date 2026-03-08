/*
 * XREFs of MiMirrorGatherBrownPages @ 0x140624848
 * Callers:
 *     MiMirrorBrownPhase @ 0x140AA94BC (MiMirrorBrownPhase.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMirrorAddPagesToBrownList @ 0x1406246DC (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorNodeLargePages @ 0x14064CF54 (MiMirrorNodeLargePages.c)
 */

__int64 __fastcall MiMirrorGatherBrownPages(__int64 *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // r14
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rdx
  volatile LONG *v15; // r12
  unsigned __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 i; // rcx
  _QWORD *v20; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rsi
  unsigned __int8 v27; // di
  _DWORD *v28; // r9
  __int64 v29; // rdx
  unsigned __int64 j; // rcx
  _QWORD *v31; // rbx
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  __int64 v36; // r14
  unsigned int k; // ebp
  unsigned __int8 v38; // si
  _DWORD *v39; // r9
  __int64 v40; // rdx
  volatile LONG *v41; // rdi
  unsigned __int64 v42; // r8
  _QWORD *v43; // rbx
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // eax
  __int64 result; // rax
  volatile LONG *v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  unsigned int v51; // [rsp+90h] [rbp+8h]
  unsigned int v53; // [rsp+A0h] [rbp+18h]
  unsigned int v54; // [rsp+A8h] [rbp+20h]

  v54 = a4;
  v4 = a4;
  v5 = a3;
  v50 = *a1;
  v6 = a2;
  v53 = 0;
  v7 = 0;
  v8 = 16LL;
  if ( a3 <= 4LL )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 8 * v5 + 6824);
      v10 = v4;
      v51 = v4;
      if ( v5 <= 1 )
        break;
      if ( v5 == 2 )
      {
        v11 = v6 + 2944;
LABEL_9:
        v9 = 88LL * v4 + v11;
        goto LABEL_10;
      }
      if ( v5 == 3 )
      {
        if ( *(_QWORD *)v9 != *(_QWORD *)(v6 + 17824) )
        {
          v11 = v6 + 5312;
          goto LABEL_9;
        }
LABEL_42:
        if ( ++v5 > 4 )
          goto LABEL_43;
      }
      else
      {
LABEL_10:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v14) = 4;
          else
            v14 = (-1LL << (CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= v14;
        }
        v15 = (volatile LONG *)(v9 + 32);
        v49 = (volatile LONG *)(v9 + 32);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 32));
        if ( *(_QWORD *)v9 )
        {
          v16 = *(_QWORD *)(v9 + 16);
          do
          {
            v17 = 48 * v16 - 0x220000000000LL;
            if ( !_bittest64((const signed __int64 *)(v17 + 40), 0x35u) )
            {
              if ( v5 == 2 && MiIsDecayPfn(v16) )
              {
                v18 = *(_QWORD *)(v17 + 16);
                if ( qword_140C657C0 && (v18 & 0x10) == 0 )
                  v18 &= ~qword_140C657C0;
                for ( i = (v18 >> 12) & 0xFFFFFFFFFFLL; i != v16; i = *v20 & 0xFFFFFFFFFFLL )
                {
                  v20 = (_QWORD *)(48 * i - 0x220000000000LL);
                  MiMirrorAddPagesToBrownList(i, 1uLL);
                }
              }
              else
              {
                MiMirrorAddPagesToBrownList(v16, 1uLL);
              }
            }
            v16 = *(_QWORD *)v17 & 0xFFFFFFFFFFLL;
          }
          while ( v16 != 0x3FFFFFFFFFLL );
          v4 = v54;
          v15 = v49;
          v7 = v53;
          v6 = a2;
          v10 = v51;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v15);
        if ( KiIrqlFlags )
        {
          v21 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        if ( v5 <= 1 )
        {
          v53 = ++v7;
          if ( v7 >= 3 * dword_140C6577C )
          {
            v53 = 0;
            v7 = 0;
            if ( v5 == 1 )
              MiMirrorNodeLargePages(v50, v6, 0LL);
          }
          else
          {
            --v5;
          }
          goto LABEL_41;
        }
        if ( v5 == 2 )
        {
          ++v4;
          if ( v10 == 7 )
            v4 = 0;
          else
            v5 = 1LL;
          v54 = v4;
LABEL_41:
          v8 = 16LL;
          goto LABEL_42;
        }
        if ( v5 != 3 )
          goto LABEL_41;
        ++v4;
        v8 = 16LL;
        v54 = v4;
        if ( v4 == 16 )
          goto LABEL_42;
      }
    }
    v9 = *(_QWORD *)(v6 + 8 * v5 + 2496) + 88LL * v7;
    goto LABEL_10;
  }
LABEL_43:
  v26 = v6 + 3920;
  do
  {
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
    {
      v28 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v27 == 2 )
        LODWORD(v29) = 4;
      else
        v29 = (-1LL << (v27 + 1)) & 4;
      v28[5] |= v29;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v26 + 16));
    for ( j = *(_QWORD *)v26; j != 0x3FFFFFFFFFLL; j = *v31 & 0xFFFFFFFFFFLL )
    {
      v31 = (_QWORD *)(48 * j - 0x220000000000LL);
      MiMirrorAddPagesToBrownList(j, 1uLL);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v26 + 16));
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v27 <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v25 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)v33);
      }
    }
    __writecr8(v27);
    v26 += 88LL;
    --v8;
  }
  while ( v8 );
  v36 = a2;
  for ( k = 0; k < 2; ++k )
  {
    v38 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
    {
      v39 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v38 == 2 )
        LODWORD(v40) = 4;
      else
        v40 = (-1LL << (v38 + 1)) & 4;
      v39[5] |= v40;
    }
    v41 = (volatile LONG *)(v36 + (-(__int64)(k != 0) & 0x80) + 3680);
    ExAcquireSpinLockExclusiveAtDpcLevel(v41);
    v42 = *(_QWORD *)((-(__int64)(k != 0) & 0x80) + v36 + 3664);
    if ( v42 != 0x3FFFFFFFFFLL )
    {
      do
      {
        v43 = (_QWORD *)(48 * v42 - 0x220000000000LL);
        MiMirrorAddPagesToBrownList(v42, 1uLL);
        v42 = *v43 & 0xFFFFFFFFFFLL;
      }
      while ( v42 != 0x3FFFFFFFFFLL );
      v36 = a2;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v41);
    if ( KiIrqlFlags )
    {
      v44 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v44 <= 0xFu && v38 <= 0xFu && v44 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v47 = ~(unsigned __int16)(-1LL << (v38 + 1));
        v25 = (v47 & v46[5]) == 0;
        v46[5] &= v47;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick((__int64)v45);
      }
    }
    result = v38;
    __writecr8(v38);
  }
  return result;
}
