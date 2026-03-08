/*
 * XREFs of PnpDeviceActionWorker @ 0x140203020
 * Callers:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 * Callees:
 *     PnpLogActionQueueEvent @ 0x14020368C (PnpLogActionQueueEvent.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140204780 (IoReportTargetDeviceChangeAsynchronous.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1402F2FE8 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x1402FDD5C (PnpDeleteDeviceActionRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PnpCompleteSystemStartProcess @ 0x14039C088 (PnpCompleteSystemStartProcess.c)
 *     PpProcessClearProblem @ 0x1403ABD90 (PpProcessClearProblem.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PiProcessDeviceResetAction @ 0x14055DCD8 (PiProcessDeviceResetAction.c)
 *     PnpProcessRebalance @ 0x140562AF4 (PnpProcessRebalance.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PiProcessReenumeration @ 0x1407854F4 (PiProcessReenumeration.c)
 *     PiProcessRequeryDeviceState @ 0x140851994 (PiProcessRequeryDeviceState.c)
 *     PiProcessStartSystemDevices @ 0x140860040 (PiProcessStartSystemDevices.c)
 *     PiRestartDevice @ 0x1408608D0 (PiRestartDevice.c)
 *     PiQueryPowerRelations @ 0x14086CB24 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086CE8C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PiConfigureDevice @ 0x140956344 (PiConfigureDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140956400 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140956564 (PiProcessResourceRequirementsChanged.c)
 *     PiProcessSetDeviceProblem @ 0x1409566C8 (PiProcessSetDeviceProblem.c)
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x140967F1C (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 */

__int64 PnpDeviceActionWorker()
{
  char v0; // r14
  char v1; // r15
  int v2; // r13d
  KIRQL v3; // al
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 CurrentIrql; // rcx
  __int64 v8; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  int v11; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int restarted; // eax
  __int64 v25; // r14
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  int v28; // r12d
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r15
  KIRQL v32; // al
  bool v33; // zf
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r14
  int *v36; // rax
  struct _KEVENT *v37; // rcx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  unsigned __int8 v51; // cl
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  int v65; // ecx
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  unsigned __int8 v70; // cl
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // dl
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r9
  int v84; // eax
  _DWORD *v85; // r8
  char v86; // [rsp+48h] [rbp-19h]
  char v87; // [rsp+49h] [rbp-18h]
  char v88; // [rsp+4Ah] [rbp-17h]
  char v89; // [rsp+4Bh] [rbp-16h]
  char v90; // [rsp+4Ch] [rbp-15h]
  __int64 v91; // [rsp+50h] [rbp-11h] BYREF
  _OWORD NotificationStructure[2]; // [rsp+58h] [rbp-9h] BYREF
  __int64 v93; // [rsp+78h] [rbp+17h]
  __int128 v94; // [rsp+80h] [rbp+1Fh] BYREF

  v91 = 0LL;
  memset(NotificationStructure, 0, sizeof(NotificationStructure));
  v93 = 0LL;
  v0 = 0;
  v86 = 0;
  v87 = 0;
  v94 = 0LL;
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, (__int64)KeGetCurrentThread());
  v1 = 0;
  v88 = 0;
  PpDevNodeLockTree(1LL);
  while ( 1 )
  {
    v90 = 0;
    v2 = 0;
    v89 = 1;
    v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
    v4 = PnpEnumerationRequestList;
    v5 = v3;
    if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
    {
      v6 = *(_QWORD *)PnpEnumerationRequestList;
      if ( *(__int64 **)(PnpEnumerationRequestList + 8) != &PnpEnumerationRequestList
        || *(_QWORD *)(v6 + 8) != PnpEnumerationRequestList )
      {
LABEL_170:
        __fastfail(3u);
      }
      PnpEnumerationRequestList = *(_QWORD *)PnpEnumerationRequestList;
      *(_QWORD *)(v6 + 8) = &PnpEnumerationRequestList;
      *(_BYTE *)(v4 + 76) = 1;
      goto LABEL_6;
    }
    if ( !v0 && !v1 && !v88 )
      break;
    v4 = 0LL;
LABEL_6:
    KxReleaseSpinLock(&PnpSpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)CurrentIrql <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && (unsigned __int8)CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentIrql = (unsigned int)(v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v33 = (v50 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v50;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    if ( v4 )
    {
      v8 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(v4 + 56);
      if ( *(_QWORD *)&NullGuid.Data1 == *(_QWORD *)(v4 + 56) )
        v8 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(v4 + 64);
      if ( v8 )
      {
        v90 = 1;
        v94 = *(_OWORD *)(v4 + 56);
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v94;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 80, 0LL);
      v10 = *(_BYTE *)(v4 + 88);
      ExReleasePushLockEx(v4 + 80, 0LL);
      KeLeaveCriticalRegion();
      v11 = *(_DWORD *)(v4 + 24);
      v12 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
      KxReleaseSpinLock(&qword_140C3EFA8);
      if ( KiIrqlFlags )
      {
        v51 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v51 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v51 >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v33 = (v54 & v53[5]) == 0;
          v53[5] &= v54;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v52);
        }
      }
      __writecr8(v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
      dword_140C38ADC = v11;
      if ( byte_140C38B50 )
        qword_140C38B68 = MEMORY[0xFFFFF78000000008];
      KxReleaseSpinLock(&qword_140C38AD0);
      if ( KiIrqlFlags )
      {
        v55 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v55 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v55 >= 2u )
        {
          v56 = KeGetCurrentPrcb();
          v57 = v56->SchedulerAssist;
          v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v33 = (v58 & v57[5]) == 0;
          v57[5] &= v58;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
      __writecr8(v13);
      *(_QWORD *)(v4 + 8) = v4;
      *(_QWORD *)v4 = v4;
      if ( PnpShutdownEvent.Header.SignalState )
      {
        v2 = -1073741431;
      }
      else if ( v10 )
      {
        v2 = -1073741536;
      }
      else
      {
        v14 = *(_QWORD *)(v4 + 16);
        v15 = v14 + 312;
        if ( v14 )
          v16 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
        else
          v16 = 0LL;
        if ( *(_DWORD *)(v16 + 300) != 790 )
        {
          if ( v14 )
          {
            v17 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
            if ( v17 )
            {
              ObfReferenceObjectWithTag(*(PVOID *)(v4 + 16), 0x65706E50u);
              PnpLogActionQueueEvent(v17, *(unsigned int *)(v4 + 24), 1LL, 0LL);
            }
          }
          else
          {
            v17 = 0LL;
          }
          v18 = *(_DWORD *)(v4 + 24);
          if ( v18 <= 14 )
          {
            if ( v18 == 14 )
              goto LABEL_37;
            if ( v18 > 7 )
            {
              v19 = v18 - 8;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  v21 = v20 - 1;
                  if ( v21 )
                  {
                    v22 = v21 - 1;
                    if ( !v22 )
                    {
                      restarted = PiProcessRequeryDeviceState(v4);
                      goto LABEL_39;
                    }
                    v59 = v22 - 1;
                    if ( v59 )
                    {
                      if ( v59 == 1 )
                      {
                        v2 = PiProcessResourceRequirementsChanged(v4);
                        if ( v2 < 0 )
                        {
                          v86 = 1;
                          v2 = 0;
                        }
                        goto LABEL_40;
                      }
LABEL_136:
                      v2 = -1073741823;
LABEL_40:
                      if ( v17 )
                      {
                        PnpLogActionQueueEvent(v17, *(unsigned int *)(v4 + 24), 2LL, (unsigned int)v2);
                        ObfDereferenceObjectWithTag(*(PVOID *)(v4 + 16), 0x65706E50u);
                      }
                      goto LABEL_42;
                    }
LABEL_90:
                    restarted = PiRestartDevice(v4);
LABEL_39:
                    v2 = restarted;
                    goto LABEL_40;
                  }
                }
              }
LABEL_37:
              restarted = PiProcessReenumeration(v4);
LABEL_38:
              v89 = 0;
              goto LABEL_39;
            }
            if ( v18 == 7 )
            {
              v87 = 1;
              goto LABEL_40;
            }
            if ( !v18 )
            {
              v86 = 1;
              goto LABEL_40;
            }
            v38 = v18 - 1;
            if ( v38 )
            {
              v39 = v38 - 1;
              if ( !v39 )
              {
                restarted = PpProcessClearProblem(v4);
                goto LABEL_39;
              }
              v40 = v39 - 1;
              if ( v40 )
              {
                v41 = v40 - 2;
                if ( v41 )
                {
                  if ( v41 != 1 )
                    goto LABEL_136;
                  restarted = PnpProcessRebalance(v4);
                }
                else
                {
                  v42 = *(_QWORD *)(v4 + 16);
                  if ( v42 )
                    v43 = *(_QWORD *)(*(_QWORD *)(v42 + 312) + 40LL);
                  else
                    v43 = 0LL;
                  restarted = PiQueryPowerRelations(v43, 0LL);
                }
                goto LABEL_39;
              }
            }
LABEL_138:
            restarted = PiProcessClearDeviceProblem(v4);
            goto LABEL_39;
          }
          if ( v18 > 21 )
          {
            v61 = v18 - 22;
            if ( v61 )
            {
              v62 = v61 - 1;
              if ( v62 )
              {
                v63 = v62 - 1;
                if ( v63 )
                {
                  v64 = v63 - 1;
                  if ( v64 )
                  {
                    v65 = v64 - 1;
                    if ( v65 )
                    {
                      if ( v65 != 1 )
                        goto LABEL_136;
                      restarted = PiDmaGuardProcessUpdateConsoleLockStateAction(v4);
                    }
                    else
                    {
                      restarted = PiProcessDeviceResetAction(v4);
                    }
                    goto LABEL_39;
                  }
                  goto LABEL_138;
                }
              }
            }
          }
          else if ( v18 != 21 )
          {
            v44 = v18 - 15;
            if ( !v44 )
            {
              restarted = PiProcessSetDeviceProblem(v4);
              goto LABEL_39;
            }
            v45 = v44 - 1;
            if ( !v45 )
              goto LABEL_90;
            v46 = v45 - 1;
            if ( v46 )
            {
              v47 = v46 - 1;
              if ( v47 )
              {
                v60 = v47 - 1;
                if ( v60 )
                {
                  if ( v60 != 1 )
                    goto LABEL_136;
                }
                else
                {
                  DWORD1(NotificationStructure[1]) = 0;
                  *(GUID *)((char *)NotificationStructure + 4) = GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED;
                  LODWORD(NotificationStructure[0]) = 2359297;
                  *((_QWORD *)&NotificationStructure[1] + 1) = 0LL;
                  v93 = 0xFFFFFFFFLL;
                  IoReportTargetDeviceChangeAsynchronous(*(PDEVICE_OBJECT *)(v4 + 16), NotificationStructure, 0LL, 0LL);
                }
                PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(*(_QWORD *)(v4 + 16));
              }
              else
              {
                v88 = 1;
              }
              goto LABEL_40;
            }
            restarted = PiProcessStartSystemDevices(v4);
            goto LABEL_38;
          }
          restarted = PiConfigureDevice(v4);
          goto LABEL_39;
        }
        v2 = -1073741823;
      }
LABEL_42:
      v25 = *(unsigned int *)(v4 + 24);
      v26 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
      KxReleaseSpinLock(&qword_140C3EFA8);
      if ( KiIrqlFlags )
      {
        v66 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v66 <= 0xFu && (unsigned __int8)v26 <= 0xFu && v66 >= 2u )
        {
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
          v33 = (v69 & v68[5]) == 0;
          v68[5] &= v69;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v67);
        }
      }
      __writecr8(v26);
      v27 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
      if ( byte_140C38B50 )
      {
        *(&PopDirectedDripsDiagSessionContext + v25 + 26) = (char *)*(&PopDirectedDripsDiagSessionContext + v25 + 26)
                                                          + MEMORY[0xFFFFF78000000008]
                                                          - qword_140C38B68;
        qword_140C38B68 = 0LL;
      }
      dword_140C38ADC = 28;
      KxReleaseSpinLock(&qword_140C38AD0);
      if ( KiIrqlFlags )
      {
        v70 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v70 <= 0xFu && (unsigned __int8)v27 <= 0xFu && v70 >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = v71->SchedulerAssist;
          v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
          v33 = (v73 & v72[5]) == 0;
          v72[5] &= v73;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
      __writecr8(v27);
      v28 = 1;
      do
      {
        v29 = *(__int64 **)v4;
        v30 = **(_QWORD **)v4;
        if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *(__int64 **)(v30 + 8) != v29 )
          goto LABEL_170;
        *(_QWORD *)v4 = v30;
        *(_QWORD *)(v30 + 8) = v4;
        v31 = *((unsigned int *)v29 + 6);
        v32 = KeAcquireSpinLockRaiseToDpc(&qword_140C3EFA8);
        v33 = dword_140C3EFB0-- == 1;
        v34 = v32;
        if ( v33 )
          PopDirectedDripsClearDisengageReason(4LL);
        KxReleaseSpinLock(&qword_140C3EFA8);
        if ( KiIrqlFlags )
        {
          v74 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v74 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v74 >= 2u )
          {
            v75 = KeGetCurrentPrcb();
            v76 = v75->SchedulerAssist;
            v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
            v33 = (v77 & v76[5]) == 0;
            v76[5] &= v77;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v75);
          }
        }
        __writecr8(v34);
        v35 = KeAcquireSpinLockRaiseToDpc(&qword_140C38AD0);
        if ( !--dword_140C38AD8 && byte_140C38B50 )
        {
          qword_140C38B58 += MEMORY[0xFFFFF78000000008] - qword_140C38B60;
          qword_140C38B60 = 0LL;
        }
        --*((_DWORD *)&PopDirectedDripsDiagSessionContext + v31 + 16);
        KxReleaseSpinLock(&qword_140C38AD0);
        if ( KiIrqlFlags )
        {
          v78 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v78 <= 0xFu && (unsigned __int8)v35 <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = v79->SchedulerAssist;
            v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v35 + 1));
            v33 = (v81 & v80[5]) == 0;
            v80[5] &= v81;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick(v79);
          }
        }
        __writecr8(v35);
        v36 = (int *)v29[6];
        if ( v36 )
          *v36 = v2;
        v37 = (struct _KEVENT *)v29[5];
        if ( v37 )
          KeSetEvent(v37, 0, 0);
        if ( v29 == (__int64 *)v4 )
        {
          v28 = 0;
          if ( v89 )
            ObfDereferenceObject((PVOID)v29[2]);
        }
        PnpDeleteDeviceActionRequest(v29);
      }
      while ( v28 );
      v0 = v86;
      v1 = v87;
      if ( v90 )
        KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = 0LL;
    }
    else if ( v0 || v1 )
    {
      LODWORD(v91) = 3;
      BYTE4(v91) = PnPBootDriversInitialized;
      ObfReferenceObjectWithTag(*((PVOID *)IopRootDeviceNode + 4), 0x746C6644u);
      PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, 0, (unsigned int)&v91, v1 == 0 ? 3 : 0, v0, 0, 0);
      v0 = 0;
      v86 = 0;
      v1 = 0;
      v87 = 0;
    }
    else
    {
      PnpCompleteSystemStartProcess(CurrentIrql, 1LL);
      v88 = 0;
    }
  }
  PnpEnumerationInProgress = 0;
  KeSetEvent(&PnpEnumerationLock, 0, 0);
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    v82 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v82 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v82 >= 2u )
    {
      v83 = KeGetCurrentPrcb();
      v84 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v85 = v83->SchedulerAssist;
      v33 = (v84 & v85[5]) == 0;
      v85[5] &= v84;
      if ( v33 )
        KiRemoveSystemWorkPriorityKick(v83);
    }
  }
  __writecr8(v5);
  _InterlockedExchange64((volatile __int64 *)&PnpDeviceActionThread, 0LL);
  return PpDevNodeUnlockTree(1LL);
}
