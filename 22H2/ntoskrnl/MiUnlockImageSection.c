/*
 * XREFs of MiUnlockImageSection @ 0x14029B0C0
 * Callers:
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402A7960 (MiIsPfnCommitNotCharged.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     ExpUnblockPushLock @ 0x1402F4D68 (ExpUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3F5C (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(
        volatile signed __int32 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // r14
  __int64 CurrentIrql; // rdi
  signed __int32 v8; // ecx
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 SchedulerAssist; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 Process; // rdx
  int v14; // r10d
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int8 v20; // bp
  __int16 v21; // dx
  bool v22; // zf
  __int16 v23; // dx
  __int64 v24; // r11
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // esi
  unsigned __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // r11
  int v34; // r10d
  __int64 v35; // r11
  __int64 v36; // rdi
  unsigned __int64 v37; // r9
  struct _KPRCB *v38; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v43; // r9
  int v44; // eax
  signed __int32 v45[8]; // [rsp+0h] [rbp-88h] BYREF
  int v46; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+34h] [rbp-54h]
  unsigned __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  struct _KTHREAD *v49; // [rsp+48h] [rbp-40h]
  __int64 v50; // [rsp+50h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v49 = CurrentThread;
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v8 = _InterlockedDecrement(a1);
  result = (unsigned int)(v8 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, (__int64)(a2 << 25) >> 16, a4, v8);
  if ( v8 == 1 )
  {
    if ( a2 <= a3 )
    {
      v10 = MiPteInShadowRange(&v48, a2);
      SchedulerAssist = v10;
      v47 = v10;
      v12 = 0xFFFFF6FB7DBED000uLL;
      Process = 0xFFFFF6FB7DBED7F8uLL;
      v14 = 1;
      while ( 1 )
      {
        v15 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(Process + 912) != 1 && (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v12 = *(_QWORD *)(Process + 1928);
            if ( v12 )
            {
              v16 = *(_QWORD *)(v12 + 8 * ((v5 >> 3) & 0x1FF));
              v12 = v15 | 0x20;
              Process = (unsigned __int8)v16;
              LOBYTE(Process) = v16 & 0x20;
              if ( (v16 & 0x20) == 0 )
                v12 = *(_QWORD *)v5;
              v15 = v12;
              if ( (v16 & 0x42) != 0 )
                v15 = v12 | 0x42;
            }
          }
        }
        v48 = v15;
        if ( (_DWORD)SchedulerAssist )
        {
          if ( (MiFlags & 0xC00000) != 0 )
          {
            Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            if ( *(_BYTE *)(Process + 912) != 1 && (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v12 = *(_QWORD *)(Process + 1928);
              if ( v12 )
              {
                v17 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v48 >> 3) & 0x1FF));
                v12 = v15 | 0x20;
                Process = (unsigned __int8)v17;
                LOBYTE(Process) = v17 & 0x20;
                if ( (v17 & 0x20) == 0 )
                  v12 = v15;
                v15 = v12;
                if ( (v17 & 0x42) != 0 )
                  v15 = v12 | 0x42;
              }
            }
          }
        }
        v18 = 48 * ((v15 >> 12) & 0xFFFFFFFFFLL);
        v19 = v18 - 0x58000000000LL;
        v20 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
        {
          SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
          Process = (-1LL << (v20 + 1)) & 4;
          v12 = (unsigned int)Process | *(_DWORD *)(SchedulerAssist + 20);
          *(_DWORD *)(SchedulerAssist + 20) = v12;
        }
        v46 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v46, Process, v12, SchedulerAssist);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
          v14 = 1;
        }
        v21 = *(_WORD *)(v19 + 32);
        if ( !v21 )
          MiBadRefCount(v19);
        v22 = v21 == 1;
        v23 = v21 - 1;
        *(_WORD *)(v19 + 32) = v23;
        if ( !v22 || !MiIsPfnFileOnly(v19) )
          break;
LABEL_78:
        MiPfnReferenceCountIsZero(v19, v18 / 48);
LABEL_79:
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v41 = KeGetCurrentIrql();
            if ( v41 <= 0xFu && v20 <= 0xFu && v41 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v43 = CurrentPrcb->SchedulerAssist;
              v44 = ~(unsigned __int16)(-1LL << (v20 + 1));
              v22 = (v44 & v43[5]) == 0;
              v43[5] &= v44;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        result = v20;
        __writecr8(v20);
        SchedulerAssist = v47;
        v5 += 8LL;
        v14 = 1;
        Process = 0xFFFFF6FB7DBED7F8uLL;
        v12 = 0xFFFFF6FB7DBED000uLL;
        if ( v5 > a3 )
        {
          CurrentThread = v49;
          LOBYTE(CurrentIrql) = v50;
          goto LABEL_88;
        }
      }
      v24 = *(_QWORD *)(v19 + 40);
      if ( (v24 & 0x1000000000LL) != 0 || (v24 & 0x2000000000000LL) != 0 )
        goto LABEL_79;
      v25 = *(_QWORD *)(v19 + 24);
      v26 = v25 & 0x3FFFFFFFFFFFFFFFLL;
      if ( !v23 )
      {
        v27 = v14;
LABEL_52:
        v28 = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
        if ( v28 > 0xFFFFF6BFFFFFFF78uLL || v28 < 0xFFFFF68000000000uLL )
        {
          v29 = *(_BYTE *)(v19 + 35);
          if ( (v29 & 0x20) != 0 )
          {
            *(_BYTE *)(v19 + 35) = v29 & 0xDF;
            goto LABEL_77;
          }
        }
        if ( (unsigned int)MI_PFN_IS_PROTO(v19) && (*(_DWORD *)(v19 + 16) & 0x400LL) != 0 )
        {
          v34 = 1;
        }
        else if ( (unsigned int)MiIsPfnCommitNotCharged(v31, v30, v32) )
        {
          v34 = 1;
        }
        else if ( v27 == 1 && (v25 & 0x4000000000000000LL) != 0 )
        {
          v34 = 1;
        }
        v35 = (v33 >> 39) & 0x3FF;
        v36 = *(_QWORD *)(qword_140C4E648 + 8 * v35);
        if ( v34 == 1 )
          MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * v35), 1LL);
        v37 = 1LL;
        if ( (ULONG_PTR *)v36 == &MiSystemPartition )
        {
          v38 = KeGetCurrentPrcb();
          CachedResidentAvailable = (int)v38->CachedResidentAvailable;
          if ( (_DWORD)CachedResidentAvailable != -1 )
          {
            if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
            {
              while ( 1 )
              {
                v40 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&v38->CachedResidentAvailable,
                        CachedResidentAvailable + 1,
                        CachedResidentAvailable);
                v22 = (_DWORD)CachedResidentAvailable == v40;
                LODWORD(CachedResidentAvailable) = v40;
                if ( v22 )
                  break;
                if ( v40 == -1 || (unsigned __int64)(v40 + 1LL) > 0x100 )
                  goto LABEL_72;
              }
LABEL_77:
              if ( !v27 )
                goto LABEL_79;
              goto LABEL_78;
            }
LABEL_72:
            if ( (int)CachedResidentAvailable > 192
              && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                      (volatile signed __int32 *)&v38->CachedResidentAvailable,
                                                      192,
                                                      CachedResidentAvailable) )
            {
              v37 = (int)CachedResidentAvailable - 192 + 1LL;
            }
            if ( !v37 )
              goto LABEL_77;
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 7168), v37);
        goto LABEL_77;
      }
      if ( v23 == 1 )
      {
        if ( v26 )
        {
LABEL_50:
          v27 = 0;
          goto LABEL_52;
        }
      }
      else if ( v23 != 2 || !v26 )
      {
        goto LABEL_79;
      }
      if ( (*(_BYTE *)(v19 + 34) & 8) == 0 )
        goto LABEL_79;
      goto LABEL_50;
    }
LABEL_88:
    _InterlockedDecrement(a1);
    _InterlockedOr(v45, 0);
    if ( qword_140C4CD58 )
      result = ExpUnblockPushLock(&qword_140C4CD58, 0LL, 0LL);
  }
  if ( !(_BYTE)CurrentIrql )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return result;
}
