NTSTATUS __fastcall NtSetInformationWorkerFactory(void *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  KPROCESSOR_MODE PreviousMode; // si
  int v8; // r12d
  __int64 v9; // r13
  NTSTATUS result; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  PVOID v13; // rcx
  int Thread; // r14d
  char v15; // r11
  char *v16; // rsi
  unsigned __int64 *v17; // r8
  unsigned __int8 CurrentIrql; // dl
  _DWORD *SchedulerAssist; // r10
  signed __int64 *v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int *v24; // r13
  int v25; // r12d
  _DWORD *v26; // r12
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rax
  char v34; // al
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  __int64 Next; // rax
  unsigned __int8 Lock; // cl
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // cl
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  signed __int64 v49; // rsi
  signed __int64 v50; // r12
  bool v51; // cc
  signed __int64 v52; // r12
  __int64 v53; // rax
  signed __int32 v54[8]; // [rsp+0h] [rbp-1D8h] BYREF
  NTSTATUS v55; // [rsp+30h] [rbp-1A8h]
  char v56; // [rsp+34h] [rbp-1A4h]
  char v57; // [rsp+35h] [rbp-1A3h]
  PVOID Object; // [rsp+38h] [rbp-1A0h] BYREF
  char v59; // [rsp+42h] [rbp-196h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-190h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-178h]
  _DWORD *v62; // [rsp+68h] [rbp-170h]
  _DWORD *v63; // [rsp+70h] [rbp-168h]
  _QWORD v64[35]; // [rsp+78h] [rbp-160h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+0h]

  LODWORD(v62) = a2;
  Handle = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *(_OWORD *)v64 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&v64[3], 0, 0x100uLL);
  switch ( a2 )
  {
    case 2:
      v8 = 8;
      goto LABEL_9;
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 11:
    case 12:
    case 13:
    case 14:
      LODWORD(v9) = 4;
      v8 = 4;
      goto LABEL_10;
    case 6:
      return -1073741822;
    case 10:
      v8 = 16;
LABEL_9:
      LODWORD(v9) = 4;
      goto LABEL_10;
    case 15:
      LODWORD(v9) = 4;
      if ( a4 >= 0x100 )
        v8 = 256;
      else
        v8 = a4 + (a4 & 7);
LABEL_10:
      if ( a4 != v8 )
        return -1073741820;
      switch ( a2 )
      {
        case 2:
          if ( PreviousMode && (a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v64[3] = *(_QWORD *)a3;
          v12 = v64[3];
          break;
        case 3:
        case 4:
        case 5:
          if ( PreviousMode )
          {
            v11 = 0x7FFFFFFF0000LL;
            if ( a3 < 0x7FFFFFFF0000LL )
              v11 = a3;
            v12 = *(_DWORD *)v11;
            LODWORD(v64[3]) = *(_DWORD *)v11;
          }
          else
          {
            v12 = *(_DWORD *)a3;
            LODWORD(v64[3]) = *(_DWORD *)a3;
          }
          break;
        default:
          __fastfail(0x25u);
      }
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
      if ( result < 0 )
        return result;
      if ( a2 == 8 )
      {
        v13 = Object;
        if ( !v12 )
        {
          v12 = KeNumberProcessors_0;
          v13 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v12;
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
        return 0;
      }
      Thread = 0;
      v15 = 0;
      v57 = 0;
      LOBYTE(result) = 0;
      v55 = result;
      v59 = 0;
      v56 = 1;
      v16 = (char *)Object;
      v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v17;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql != 2 )
          v9 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v9;
        v12 = v64[3];
        v16 = (char *)Object;
      }
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
        v15 = 0;
      }
      else
      {
        v20 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle);
        if ( v20 )
        {
          KxWaitForLockOwnerShip((signed __int64)&LockHandle, v20);
          v15 = 0;
        }
        v16 = (char *)Object;
        v12 = v64[3];
      }
      switch ( (int)v62 )
      {
        case 2:
          if ( (unsigned int)Feature_1697191224__private_IsEnabledDeviceUsage()
            && *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_41;
          }
          v21 = v64[3];
          if ( v64[3] >= 0LL )
          {
            Thread = -1073741811;
            v15 = 0;
          }
          else
          {
            if ( v64[3] > -10000000LL )
              v21 = -10000000LL;
            if ( v21 < -6000000000LL )
              v21 = -6000000000LL;
            v64[3] = v21;
            *((_QWORD *)v16 + 14) = v21;
            v64[1] = -1LL;
            KeSetTimer2((__int64)(v16 + 424), v21, -v21, (__int64)v64);
            v15 = 0;
          }
          goto LABEL_99;
        case 3:
          v22 = *((_DWORD *)v16 + 101);
          if ( (v12 & 0x80000000) != 0 )
          {
            if ( v22 <= -v12 )
            {
              *((_DWORD *)v16 + 101) = 0;
              v23 = 0;
            }
            else
            {
              v23 = v22 + v12;
              *((_DWORD *)v16 + 101) = v22 + v12;
            }
          }
          else
          {
            v23 = v22 + v12;
            if ( v22 >= v22 + v12 )
            {
              *((_DWORD *)v16 + 101) = -1;
              v23 = -1;
            }
            else
            {
              *((_DWORD *)v16 + 101) = v23;
            }
          }
          if ( v22 )
          {
            if ( !v23 && (*((_DWORD *)v16 + 102) & 0x200) != 0 )
            {
              ExpLeaveWorkerFactoryAwayMode(v16);
              v15 = 0;
            }
          }
          else if ( v23 )
          {
            if ( (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v16) )
            {
              ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)v16, &LockHandle, 0);
              v56 = 0;
              v15 = 0;
            }
            else
            {
LABEL_41:
              v15 = 0;
            }
          }
          goto LABEL_99;
        case 4:
          Handle = v16 + 16;
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_99;
          }
          v24 = (unsigned int *)(v16 + 376);
          v25 = (unsigned __int8)v55;
          if ( v12 > *((_DWORD *)v16 + 94) )
            v25 = 1;
          v55 = v25;
          *v24 = v12;
          if ( *((_DWORD *)v16 + 95) < v12 )
            *((_DWORD *)v16 + 95) = v12;
          if ( !(_BYTE)v25 )
            goto LABEL_99;
          LOBYTE(v55) = 0;
          if ( (*((_DWORD *)v16 + 102) & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v16);
          v63 = v16 + 392;
          v62 = v16 + 384;
          if ( *((_DWORD *)v16 + 96) + *((_DWORD *)v16 + 98) >= *v24 )
            goto LABEL_86;
          v26 = v16 + 400;
          break;
        case 5:
          v33 = *((_QWORD *)v16 + 2);
          if ( *(_BYTE *)(v33 + 33) )
          {
            Thread = 128;
            goto LABEL_99;
          }
          v15 = 1;
          v57 = 1;
          if ( v12 && (!*((_DWORD *)v16 + 95) && *(_DWORD *)(v33 + 24) || *(int *)(*(_QWORD *)(v33 + 8) + 4LL) > 0) )
            v34 = 1;
          else
            v34 = v55;
          *((_DWORD *)v16 + 95) = v12;
          if ( v12 < *((_DWORD *)v16 + 94) )
            *((_DWORD *)v16 + 94) = v12;
          goto LABEL_100;
        default:
          __fastfail(0x25u);
      }
      while ( 1 )
      {
        ++*v26;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v28 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v30 = CurrentPrcb->SchedulerAssist;
            v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v32 = (v31 & v30[5]) == 0;
            v30[5] &= v31;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v16 = (char *)Object;
          }
        }
        __writecr8(OldIrql);
        Thread = ExpWorkerFactoryCreateThread(v16);
        KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)Handle, &LockHandle);
        if ( Thread < 0 )
          break;
        if ( *v63 + *v62 >= *v24 )
        {
LABEL_86:
          v15 = 0;
          goto LABEL_99;
        }
      }
      --*((_DWORD *)v16 + 100);
      v15 = 0;
LABEL_99:
      v34 = v55;
LABEL_100:
      if ( v34 )
      {
        v35 = *((_DWORD *)v16 + 96);
        if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
        {
          Thread = 128;
        }
        else
        {
          v36 = *((_DWORD *)v16 + 95);
          if ( v35 < v36 )
          {
            if ( *((_DWORD *)v16 + 100) || v35 + *((_DWORD *)v16 + 98) >= v36 )
              goto LABEL_120;
            if ( (*((_DWORD *)v16 + 102) & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v16);
            ++*((_DWORD *)v16 + 100);
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v37 = LockHandle.OldIrql;
            if ( KiIrqlFlags )
            {
              v38 = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
              {
                v39 = KeGetCurrentPrcb();
                v40 = v39->SchedulerAssist;
                v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v32 = (v41 & v40[5]) == 0;
                v40[5] &= v41;
                if ( v32 )
                  KiRemoveSystemWorkPriorityKick(v39);
                v16 = (char *)Object;
              }
            }
            __writecr8(v37);
            v56 = 0;
            Thread = ExpWorkerFactoryCreateThread(v16);
            if ( Thread < 0 )
            {
              v56 = 1;
              KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
              --*((_DWORD *)v16 + 100);
              if ( v57 )
LABEL_120:
                Thread = 0;
            }
          }
          else if ( !v15 )
          {
            Thread = -1073741527;
          }
        }
      }
      if ( !v56 )
        goto LABEL_139;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_130;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_127;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_127:
        LockHandle.LockQueue.Next = 0LL;
        Lock = (unsigned __int8)LockHandle.LockQueue.Lock;
        if ( ((Lock ^ (unsigned __int8)_InterlockedExchange64(
                                         (volatile __int64 *)(Next + 8),
                                         (__int64)LockHandle.LockQueue.Lock)) & 4) != 0 )
        {
          _InterlockedOr(v54, 0);
          KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(Next + 8) >> 5) & 0x7F], 0LL));
        }
      }
      v16 = (char *)Object;
LABEL_130:
      v44 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v46);
          v16 = (char *)Object;
        }
      }
      __writecr8(v44);
LABEL_139:
      v49 = (signed __int64)(v16 - 48);
      if ( ObpTraceFlags )
        ObpPushStackInfo(v49);
      v50 = _InterlockedExchangeAdd64((volatile signed __int64 *)v49, 0xFFFFFFFFFFFFFFFFuLL);
      v51 = v50 <= 1;
      v52 = v50 - 1;
      if ( !v51 )
        return Thread;
      if ( *(_QWORD *)(v49 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v49 + 24) ^ (unsigned __int64)BYTE1(v49)],
          (ULONG_PTR)Object,
          1uLL,
          *(_QWORD *)(v49 + 8));
      if ( v52 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v52);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v49);
        return Thread;
      }
      v53 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v49);
      if ( v53 )
        ObpHandleRevocationBlockRemoveObject(v53);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v49);
      ObpRemoveObjectRoutine(v49, 0LL);
      return Thread;
    default:
      return -1073741821;
  }
}
