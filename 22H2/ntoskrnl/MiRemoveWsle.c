/*
 * XREFs of MiRemoveWsle @ 0x1402B9670
 * Callers:
 *     MiTerminateWsle @ 0x1402B7440 (MiTerminateWsle.c)
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiWriteValidPteVolatile @ 0x140240CE0 (MiWriteValidPteVolatile.c)
 *     MiVolunteerForTrimFirst @ 0x1402B78C0 (MiVolunteerForTrimFirst.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiLookupDataTableEntry @ 0x140358CCC (MiLookupDataTableEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiLogRemoveWsleEvent @ 0x1405305A4 (MiLogRemoveWsleEvent.c)
 */

signed __int64 __fastcall MiRemoveWsle(__int64 a1, unsigned __int64 a2, __int64 a3, char a4, int a5, int a6)
{
  char v6; // al
  volatile signed __int64 *v11; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v14; // rdx
  char v15; // cl
  char v16; // cl
  unsigned __int8 v17; // di
  int v18; // r12d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r14
  unsigned __int64 *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int8 v23; // al
  unsigned __int64 v24; // rcx
  signed __int64 result; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int8 v28; // di
  unsigned __int64 v29; // rsi
  __int64 v30; // r14
  int v31; // eax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v33; // rax
  struct _LIST_ENTRY *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  signed __int64 v37; // [rsp+20h] [rbp-68h] BYREF
  volatile signed __int64 *v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int128 v40; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+48h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int64 v44; // [rsp+98h] [rbp+10h] BYREF

  v6 = *(_BYTE *)(a1 + 184) & 7;
  v39 = 0LL;
  if ( v6 == 2 )
    v11 = (volatile signed __int64 *)&unk_140C4F7C0;
  else
    v11 = (volatile signed __int64 *)(a1 + 256);
  v38 = v11;
  v37 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v31 = SchedulerAssist[6];
      SchedulerAssist[6] = v31 + 1;
      if ( v31 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v37, v11);
  }
  else
  {
    v14 = (_QWORD *)_InterlockedExchange64(v11, (__int64)&v37);
    if ( v14 )
      KxWaitForLockOwnerShip((__int64)&v37, v14);
  }
  if ( a6 )
  {
    *(_QWORD *)(a1 + 144) -= a3;
    v40 = 0LL;
    v41 = 0LL;
    if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) -= a3;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
  {
    if ( PsNtosImageBase
      && (a2 < PsNtosImageEnd && a2 >= (unsigned __int64)PsNtosImageBase
       || a2 < PsHalImageEnd && a2 >= (unsigned __int64)PsHalImageBase) )
    {
      LODWORD(xmmword_140C4CD48) = xmmword_140C4CD48 - a3;
    }
    else if ( (unsigned int)MiGetSystemRegionType(a2) == 12
           && MiLookupDataTableEntry((__int64)((((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16, 2LL) )
    {
      DWORD1(xmmword_140C4CD48) -= a3;
    }
  }
  v15 = *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 136) -= a3;
  v16 = v15 & 7;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    *(_QWORD *)(a1 + 120) -= a3;
    v17 = a4 & 0xF;
    v18 = 1;
    if ( v17 == 8 )
      goto LABEL_20;
  }
  else
  {
    v18 = 0;
    if ( v16 )
      goto LABEL_20;
    v17 = a4 & 0xF;
  }
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v19 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v20 = *(_QWORD *)v19;
    if ( v19 >= 0xFFFFF6FB7DBED000uLL
      && v19 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v33 = *((_QWORD *)&Flink->Flink + ((v19 >> 3) & 0x1FF));
        v19 = v20 | 0x20;
        if ( (v33 & 0x20) == 0 )
          v19 = v20;
        v20 = v19;
        if ( (v33 & 0x42) != 0 )
          v20 = v19 | 0x42;
      }
    }
    v44 = v20;
    if ( (unsigned int)MiPteInShadowRange(&v44, v19)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v20 & 1) != 0
      && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
    {
      v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v34 )
      {
        v35 = *((_QWORD *)&v34->Flink + (((unsigned __int64)&v44 >> 3) & 0x1FF));
        v36 = v20 | 0x20;
        if ( (v35 & 0x20) == 0 )
          v36 = v20;
        v20 = v36;
        if ( (v35 & 0x42) != 0 )
          v20 = v36 | 0x42;
      }
    }
    v21 = (unsigned __int64 *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v22 = *v21;
    v23 = (*v21 >> 14) & 7;
    if ( ((*v21 >> 4) & 0x3FF) != 0 )
    {
      if ( v17 == v23 )
      {
        v24 = v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(16 * (((*v21 >> 4) & 0x3FF) - a3))) & 0x3FF0;
LABEL_17:
        *v21 = v24;
        goto LABEL_18;
      }
      if ( v17 > v23 )
      {
        v24 = v22 & 0xFFFFFFFFFFFE000FuLL | (16 * (-(__int16)a3 & 0x3FF | ((unsigned __int64)(v17 & 7) << 10)));
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  *(_QWORD *)(a1 + 8LL * v17 + 40) -= a3;
  if ( v17 == 7 )
    MiVolunteerForTrimFirst(a1, -a3);
LABEL_20:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140C4F808 -= a3;
    if ( v18 == 1 )
      qword_140C4F810 -= a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
    goto LABEL_24;
  }
  _m_prefetchw(&v37);
  result = v37;
  if ( v37 )
    goto LABEL_60;
  result = _InterlockedCompareExchange64(v38, 0LL, (signed __int64)&v37);
  if ( (signed __int64 *)result != &v37 )
  {
    result = KxWaitForLockChainValid(&v37);
LABEL_60:
    v37 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_24:
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      result = (unsigned int)(v27[6] - 1);
      v27[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v26);
    }
  }
  if ( v18 == 1 )
  {
    if ( a5 == 9
      || a5 == 10
      && (result = 0xFFFFF68000000000uLL, (*(_BYTE *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0) )
    {
      v28 = a5 & 0xF;
      if ( a3 )
      {
        v29 = a2;
        v30 = a3;
        do
        {
          result = MiWriteValidPteVolatile(
                     (volatile signed __int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                     0x80000000,
                     v28);
          v29 += 4096LL;
          --v30;
        }
        while ( v30 );
      }
    }
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 && a3 )
  {
    do
    {
      result = MiLogRemoveWsleEvent(a2, *(_BYTE *)(a1 + 184) & 7);
      a2 += 4096LL;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
