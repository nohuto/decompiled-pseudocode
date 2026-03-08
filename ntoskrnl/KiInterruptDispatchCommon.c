/*
 * XREFs of KiInterruptDispatchCommon @ 0x14039E224
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14039E1A0 (KeDispatchSecondaryInterrupt.c)
 *     IopPassiveInterruptWorker @ 0x14039E620 (IopPassiveInterruptWorker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KeGetCurrentProcessorNumberEx @ 0x1402C1200 (KeGetCurrentProcessorNumberEx.c)
 *     KiProcessPendingDisconnect @ 0x14039E4D0 (KiProcessPendingDisconnect.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14039E508 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiProcessDisconnectList @ 0x14039E548 (KiProcessDisconnectList.c)
 *     IoProcessPassiveInterrupts @ 0x14039E784 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14039E8DC (KiInvokeInterruptServiceRoutine.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, __int128 *a4, int *a5)
{
  int v6; // r12d
  __int128 *v7; // rdi
  char v8; // r15
  __int64 v9; // rbx
  _WORD *v10; // rsi
  unsigned __int8 v11; // bl
  __int64 v12; // rdx
  _QWORD *v13; // rdi
  unsigned int v14; // r13d
  __int128 *v15; // r8
  __int64 v16; // r14
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  __int64 v20; // rdi
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // r8d
  _DWORD *v26; // r9
  int v27; // edx
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  unsigned __int8 v37; // [rsp+20h] [rbp-61h]
  char v38; // [rsp+21h] [rbp-60h]
  char v39; // [rsp+22h] [rbp-5Fh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-59h] BYREF
  unsigned int v42; // [rsp+2Ch] [rbp-55h]
  unsigned int v43; // [rsp+30h] [rbp-51h]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-49h]
  int v45; // [rsp+40h] [rbp-41h]
  __int128 *v46; // [rsp+48h] [rbp-39h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-31h]
  int *v48; // [rsp+58h] [rbp-29h]
  struct _GROUP_AFFINITY Affinity; // [rsp+60h] [rbp-21h] BYREF
  __int128 v50; // [rsp+70h] [rbp-11h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-1h] BYREF

  v42 = a2;
  v37 = 0;
  v48 = a5;
  v6 = 0;
  ProcNumber = 0;
  v50 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v7 = &v50;
  v39 = 0;
  if ( a4 )
    v7 = a4;
  v38 = 0;
  v43 = 0;
  v46 = v7;
  v8 = 0;
  *((_QWORD *)v7 + 1) = v7;
  *(_QWORD *)v7 = v7;
  PreviousAffinity = 0LL;
  if ( a1 )
  {
    v9 = a2 - 256;
    SpinLock = (PKSPIN_LOCK)(48 * v9 + KiGlobalSecondaryIDT);
    KiAcquireSecondaryInterruptConnectLock(SpinLock);
    v10 = 0LL;
    if ( (unsigned int)v9 < 0x100 )
      v10 = *(_WORD **)(48 * v9 + KiGlobalSecondaryIDT + 40);
    v7 = v46;
  }
  else
  {
    SpinLock = 0LL;
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    *(_QWORD *)&Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v11 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v11 == 15 )
        LODWORD(v19) = 0x8000;
      else
        v19 = (-1LL << (v11 + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v19;
    }
    v10 = 0LL;
    v37 = v11;
    if ( v42 > 0xFF )
      goto LABEL_8;
    _mm_lfence();
    v10 = KeGetCurrentPrcb()->InterruptObject[v42];
  }
  v11 = v37;
LABEL_8:
  if ( !v10 )
    goto LABEL_28;
  v12 = 1LL;
  ++v10[51];
  v13 = v10;
  if ( (a3 & 1) != 0 )
  {
    while ( *((_BYTE *)v13 + 93) )
    {
      v20 = v13[1];
      if ( !v20 )
        goto LABEL_55;
      v13 = (_QWORD *)(v20 - 8);
      if ( v13 == (_QWORD *)v10 )
      {
        if ( !*((_BYTE *)v13 + 93) )
          break;
LABEL_55:
        v13 = 0LL;
        break;
      }
    }
    if ( !v13 )
      goto LABEL_27;
  }
  v14 = 0;
  v45 = *((_DWORD *)v10 + 27);
  while ( (unsigned __int8)CurrentIrql <= 2u || *((_BYTE *)v13 + 93) )
  {
    if ( (v13[13] & 1) == 0 )
    {
      ++*((_WORD *)v13 + 51);
      ++v14;
      if ( a1 )
      {
        KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && v11 <= 0xFu && v22 >= 2u )
          {
LABEL_66:
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = CurrentPrcb->SchedulerAssist;
            v11 = v37;
            v12 = -1LL << (v37 + 1);
            v25 = ~(unsigned __int16)v12 & v24[5];
            v24[5] = v25;
            if ( !v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      else if ( KiIrqlFlags )
      {
        v21 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && v11 <= 0xFu && v21 >= 2u )
          goto LABEL_66;
      }
      __writecr8(v11);
      LOBYTE(v12) = v11;
      v38 = KiInvokeInterruptServiceRoutine(v13, v12, v42);
      v6 = 2;
      if ( a1 )
      {
        KiAcquireSecondaryInterruptConnectLock(SpinLock);
        v11 = v37;
      }
      else
      {
        v11 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 <= 0xFu )
        {
          v26 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v11 == 15 )
            v27 = 0x8000;
          else
            v27 = (-1LL << (v11 + 1)) & 0xFFFC;
          v26[5] |= v27;
        }
        v37 = v11;
      }
      v15 = v46;
      --*((_WORD *)v13 + 51);
      v16 = v13[1];
      KiProcessPendingDisconnect(a1, v13, v15);
      v12 = 1LL;
      goto LABEL_20;
    }
    v16 = v13[1];
LABEL_20:
    v13 = (_QWORD *)(v16 - 8);
    if ( v45 )
    {
      if ( v38 )
        v8 = 1;
      if ( v13 == (_QWORD *)v10 )
      {
        if ( !v8 || v14 <= 1 )
        {
          v8 = 1;
          goto LABEL_27;
        }
        v14 = 0;
        v8 = 0;
        v38 = 0;
      }
    }
    else if ( v38 || v13 == (_QWORD *)v10 )
    {
      goto LABEL_42;
    }
  }
  v39 = 1;
  if ( v6 != 2 )
    v6 = 1;
  v43 = *((_DWORD *)v13 + 22);
LABEL_42:
  v8 = v38;
LABEL_27:
  --v10[51];
  v7 = v46;
  KiProcessPendingDisconnect(a1, v10, v46);
LABEL_28:
  if ( a1 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)SpinLock);
    if ( KiIrqlFlags )
    {
      v33 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v11 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v11 = v37;
        v36 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v32 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v11 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v11 = v37;
        v31 = ~(unsigned __int16)(-1LL << (v37 + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v11);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  if ( v39 )
    IoProcessPassiveInterrupts(v43);
  if ( (unsigned __int8)CurrentIrql < 2u )
    KiProcessDisconnectList(v7);
  if ( v48 )
    *v48 = v6;
  return v8;
}
