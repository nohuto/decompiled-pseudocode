/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x1402ED670
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiWakeOtherQueueWaiters @ 0x140242C80 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024BE60 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1402C4150 (KiExitDispatcher.c)
 *     ObpGetWaitObject @ 0x1402C5D80 (ObpGetWaitObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402D8A70 (KxWaitForSpinLockAndAcquire.c)
 *     KiWaitSatisfyOther @ 0x1402EDB1C (KiWaitSatisfyOther.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140512F94 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1405167CC (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405168D8 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A7700 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  int v12; // ebx
  int v13; // r14d
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 WaitObject; // rbx
  __int64 v17; // r8
  _DWORD *SchedulerAssist; // r9
  volatile signed __int32 *v19; // rdi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v22; // rcx
  _QWORD *v23; // rsi
  PVOID v24; // rax
  unsigned __int8 v25; // r15
  __int64 v26; // r9
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  BOOLEAN v29; // bl
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 v36; // cl
  unsigned __int64 v37; // r10
  __int64 CurrentThread; // r9
  _DWORD *v39; // rsi
  __int64 v40; // r9
  char v41; // al
  int v42; // r9d
  PVOID *v43; // r8
  _QWORD *v44; // rax
  _DWORD *v45; // r9
  unsigned int v46; // eax
  PVOID v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  int v54; // eax
  bool v55; // zf
  _DWORD *v56; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v58; // r9
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  int v63; // eax
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  PVOID v69; // [rsp+40h] [rbp-58h] BYREF
  PVOID v70; // [rsp+48h] [rbp-50h] BYREF
  _DWORD v71[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD *v72; // [rsp+58h] [rbp-40h]
  struct _KPRCB *v73; // [rsp+60h] [rbp-38h]
  __int64 v74; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v69 = 0LL;
    v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v69, 0LL);
    if ( v12 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v12;
    }
    v70 = 0LL;
    v13 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v70, 0LL);
    v71[1] = v13;
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v47 = v69;
    }
    else
    {
      v14 = v70;
      WaitObject = ObpGetWaitObject((__int64)v70 - 48);
      if ( (__int16 *)WaitObject != &ObpDefaultObject && WaitObject && (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) != 0 )
      {
        v19 = (volatile signed __int32 *)((char *)Object + 96);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v15 = (-1LL << (CurrentIrql + 1)) & 4;
          v17 = (unsigned int)v15 | SchedulerAssist[5];
          SchedulerAssist[5] = v17;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v19);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = CurrentPrcb->SchedulerAssist;
          if ( v22 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v48 = v22[6];
              v22[6] = v48 + 1;
              if ( v48 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( _interlockedbittestandset64(v19, 0LL) )
          {
            v49 = CurrentPrcb->SchedulerAssist;
            if ( v49 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v50 = v49[6] - 1;
                v49[6] = v50;
                if ( !v50 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            KxWaitForSpinLockAndAcquire(v19, v15, v17, (__int64)SchedulerAssist);
          }
        }
        if ( !*((_BYTE *)Object + 104) )
        {
          *((_BYTE *)Object + 104) = 1;
          v23 = Object;
          *((_QWORD *)Object + 6) = KeyContext;
          v23[7] = ApcContext;
          *((_DWORD *)v23 + 18) = IoStatus;
          v23[8] = IoStatusInformation;
          v23[10] = v70;
          v24 = v69;
          v23[11] = v69;
          *((_WORD *)v23 + 8) = 1026;
          v23[3] = v24;
          v23[4] = WaitObject;
          v25 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v25 <= 0xFu )
          {
            v56 = KeGetCurrentPrcb()->SchedulerAssist;
            v15 = (-1LL << (v25 + 1)) & 4;
            v17 = (unsigned int)v15 | v56[5];
            v56[5] = v17;
          }
          v26 = 0LL;
          v71[0] = 0;
          while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
          {
            do
              KeYieldProcessorEx(v71, v15, v17, v26);
            while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
          }
          if ( *(int *)(WaitObject + 4) <= 0 )
          {
            v27 = *(_QWORD **)(WaitObject + 16);
            if ( *v27 == WaitObject + 8 )
            {
              v28 = Object;
              *(_QWORD *)Object = WaitObject + 8;
              v28[1] = v27;
              *v27 = v28;
              *(_QWORD *)(WaitObject + 16) = v28;
              _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v59 = KeGetCurrentIrql();
                  if ( v59 <= 0xFu && v25 <= 0xFu && v59 >= 2u )
                  {
                    v60 = KeGetCurrentPrcb();
                    v61 = v60->SchedulerAssist;
                    v62 = ~(unsigned __int16)(-1LL << (v25 + 1));
                    v55 = (v62 & v61[5]) == 0;
                    v61[5] &= v62;
                    if ( v55 )
                      KiRemoveSystemWorkPriorityKick(v60);
                  }
                }
              }
              __writecr8(v25);
              v29 = 0;
              goto LABEL_18;
            }
LABEL_48:
            __fastfail(3u);
          }
          KiWaitSatisfyOther(WaitObject);
          *((_BYTE *)v23 + 17) = 5;
          *(_QWORD *)Object = v35;
          v72 = (char *)v69 + 8;
          v36 = KeGetCurrentIrql();
          __writecr8(v37);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v36 <= 0xFu )
          {
            v45 = KeGetCurrentPrcb()->SchedulerAssist;
            v33 = (-1LL << (v36 + 1)) & 4;
            v34 = (unsigned int)v33 | v45[5];
            v45[5] = v34;
          }
          v73 = KeGetCurrentPrcb();
          CurrentThread = (__int64)v73->CurrentThread;
          v74 = CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentThread);
            EtwTraceEnqueueWork(v58, Object, IsThreadRunning);
          }
          v39 = v69;
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v69, v33, v34, CurrentThread);
          if ( (_QWORD *)*v72 == v72
            || (v46 = v39[10], v39 = v69, v46 >= *((_DWORD *)v69 + 11))
            || (v39 = v69, *(PVOID *)(v74 + 232) == v69) && *(_BYTE *)(v74 + 643) == 15 )
          {
            v41 = 0;
          }
          else
          {
            v41 = KiWakeQueueWaiter((__int64)v73, (__int64)v69, (__int64)Object, v40);
          }
          if ( !v41 )
          {
            v42 = v39[1];
            v39[1] = v42 + 1;
            v43 = (PVOID *)*((_QWORD *)v39 + 4);
            if ( *v43 != v39 + 6 )
              goto LABEL_48;
            v44 = Object;
            *(_QWORD *)Object = v39 + 6;
            v44[1] = v43;
            *v43 = v44;
            *((_QWORD *)v39 + 4) = v44;
            if ( !v42 && (_QWORD *)*v72 != v72 )
              KiWakeOtherQueueWaiters((__int64)v73, (__int64)v39);
          }
          _InterlockedAnd(v39, 0xFFFFFF7F);
          _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
          KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1LL, 0LL, v25);
          v29 = 1;
LABEL_18:
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v19, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v19, 0LL);
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          if ( v31 )
          {
            if ( v30->NestingLevel <= 1u )
            {
              v63 = v31[6] - 1;
              v31[6] = v63;
              if ( !v63 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v64 = KeGetCurrentIrql();
              if ( v64 <= 0xFu && CurrentIrql <= 0xFu && v64 >= 2u )
              {
                v65 = KeGetCurrentPrcb();
                v66 = v65->SchedulerAssist;
                v67 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v55 = (v67 & v66[5]) == 0;
                v66[5] &= v67;
                if ( v55 )
                  KiRemoveSystemWorkPriorityKick(v65);
              }
            }
          }
          __writecr8(CurrentIrql);
          if ( AlreadySignaled )
          {
            if ( PreviousMode )
            {
              v32 = (__int64)AlreadySignaled;
              if ( (unsigned __int64)AlreadySignaled >= 0x7FFFFFFF0000LL )
                v32 = 0x7FFFFFFF0000LL;
              *(_BYTE *)v32 = *(_BYTE *)v32;
            }
            *AlreadySignaled = v29;
          }
          return v13;
        }
        KxReleaseSpinLock((PKSPIN_LOCK)v19);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v55 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v55 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(CurrentIrql);
        v13 = -1073741585;
        v14 = v70;
      }
      else
      {
        v13 = -1073741583;
      }
      ObfDereferenceObjectWithTag(v69, 0x746C6644u);
      ObfDereferenceObjectWithTag(v14, 0x746C6644u);
      v47 = Object;
    }
    ObfDereferenceObjectWithTag(v47, 0x746C6644u);
    return v13;
  }
  return result;
}
