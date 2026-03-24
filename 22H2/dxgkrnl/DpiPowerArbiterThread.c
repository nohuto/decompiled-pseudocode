/*
 * XREFs of DpiPowerArbiterThread @ 0x1C019C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0005430 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 *     ?DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z @ 0x1C0020148 (-DpiGetPowerActionQueueEntry@@YAPEAU_LIST_ENTRY@@PEAU_FDO_CONTEXT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     DpiSetDevicePowerTransitionStateAtPassiveLevel @ 0x1C0051CEC (DpiSetDevicePowerTransitionStateAtPassiveLevel.c)
 *     ?DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C0051F9C (-DpiFinishSuspendAdapter@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     ?DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z @ 0x1C00520B8 (-DpiStartSuspendingAdapter@@YAEPEAU_FDO_CONTEXT@@@Z.c)
 *     DxgkShutdownBootGraphics @ 0x1C00E4820 (DxgkShutdownBootGraphics.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012E1AC (DxgkReleaseAdapterCoreSync.c)
 *     DpiIsPowerRuntimeDStateTransition @ 0x1C012E4DC (DpiIsPowerRuntimeDStateTransition.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C012E510 (DxgkAcquireAdapterCoreSync.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01764A4 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0177BFC (-DmmResetModeState@@YAJQEAXK@Z.c)
 *     MonitorAdapterPowerChange @ 0x1C0177CC0 (MonitorAdapterPowerChange.c)
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C020ECFC (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0210244 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C0217F3C (DxgkIsAdapterCoreSyncAcquired.c)
 *     DxgkResumeMemorySegments @ 0x1C02182C8 (DxgkResumeMemorySegments.c)
 *     DxgkSuspendMemorySegments @ 0x1C021833C (DxgkSuspendMemorySegments.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C026A6B4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C026C9E4 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C02DC3BC (-DmmAdapterPowerChange@@YAJQEAXE@Z.c)
 */

void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  bool v3; // zf
  void *v4; // rax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _LIST_ENTRY *PowerActionQueueEntry; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _LIST_ENTRY *v11; // r15
  int Blink; // ecx
  char v13; // r12
  int v14; // eax
  char v15; // r13
  bool v16; // bp
  bool v17; // bl
  PERESOURCE *v18; // rcx
  int v19; // r14d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rbx
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  DXGADAPTER *v61; // rcx
  unsigned int v62; // edx
  int v63; // eax
  DXGGLOBAL *Global; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  _QWORD *v68; // rax
  char started; // al
  __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // ebp
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbp
  _QWORD *v83; // rax

  v1 = StartContext[8];
  LODWORD(v2) = 0;
  v3 = *(_DWORD *)(v1 + 3976) == 7;
  *(_QWORD *)(v1 + 3952) = KeGetCurrentThread();
  if ( !v3 )
  {
    v4 = (void *)(v1 + 3928);
    while ( 1 )
    {
      v5 = KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      v2 = v5;
      if ( !v5 )
        break;
      v29 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v29 + 24) = v2;
      WdLogEvent5_WdError(v29);
LABEL_13:
      v4 = (void *)(v1 + 3928);
      if ( *(_DWORD *)(v1 + 3976) == 7 )
        goto LABEL_119;
    }
    while ( 1 )
    {
      PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
      v11 = PowerActionQueueEntry;
      if ( !PowerActionQueueEntry )
        goto LABEL_13;
      Blink = (int)PowerActionQueueEntry[2].Blink;
      v13 = 0;
      v14 = (int)PowerActionQueueEntry[1].Blink;
      v15 = 0;
      LODWORD(v2) = 0;
      v16 = Blink != 64;
      if ( v14 == 1 )
      {
        if ( ((*(_DWORD *)(v1 + 3976) - 1) & 0xFFFFFFFD) != 0 )
        {
          DxgkShutdownBootGraphics(0LL, 0LL);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3792), 1u);
          ExReleaseResourceLite((PERESOURCE)(v1 + 3792));
          KeLeaveCriticalRegion();
          v23 = (int)v11[2].Blink;
          v24 = *(_QWORD *)(v1 + 3896);
          if ( (v23 & 0x40) != 0 )
          {
            DxgkAcquireAdapterCoreSync(v24, 4, v22);
            if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)(v1 + 3896), 2LL) )
            {
              v67 = WdLogNewEntry5_WdPower();
              *(_QWORD *)(v67 + 24) = v1;
              *(_OWORD *)(v67 + 32) = 0LL;
              WdLogEvent5_WdPower(v67);
              goto LABEL_20;
            }
            v66 = WdLogNewEntry5_WdPower();
            *(_QWORD *)(v66 + 24) = v1;
            *(_OWORD *)(v66 + 32) = 0LL;
            WdLogEvent5_WdPower(v66);
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
            LODWORD(v2) = -1073741823;
          }
          else
          {
            v25 = 6;
            if ( (v23 & 0x98) == 0 )
              v25 = 3;
            DxgkAcquireAdapterCoreSync(v24, v25, v22);
LABEL_20:
            if ( *(_DWORD *)(v1 + 284) == 1 )
            {
              LOBYTE(v26) = 1;
              MonitorAdapterPowerChange(*(PERESOURCE **)(v1 + 3896), v26, (__int64)v11[5].Flink);
              DmmAdapterPowerChange(*(void *const *)(v1 + 3896), 1u);
            }
            DmmResetModeState(*(PERESOURCE **)(v1 + 3896), 0xFFFFFFFFLL);
            v27 = (int)v11[2].Blink;
            if ( (v27 & 0x20) != 0 )
            {
              v28 = 4;
              goto LABEL_25;
            }
            if ( (v27 & 0x10) != 0 )
            {
              v28 = 3;
              goto LABEL_25;
            }
            if ( (v27 & 8) != 0 )
            {
              v28 = 2;
              goto LABEL_25;
            }
            if ( (v27 & 0x80u) != 0 )
            {
              v28 = 5;
              goto LABEL_25;
            }
            if ( (v27 & 0x40) != 0 )
            {
              v68 = (_QWORD *)WdLogNewEntry5_WdPower();
              v68[5] = 0LL;
              v68[3] = v1;
              v68[4] = 1LL;
              WdLogEvent5_WdPower(v68);
              if ( *(_BYTE *)(v1 + 5736) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 1u);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v71 = *(_QWORD *)(v1 + 3896);
              if ( started )
              {
                DXGADAPTER::ApplyCoreSyncAction(v71, 3);
                DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
                if ( *(_DWORD *)(v1 + 3976) == 1 )
                {
                  if ( *(_BYTE *)(v1 + 5736) )
                    DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD3, 0);
                  goto LABEL_26;
                }
                v72 = WdLogNewEntry5_WdPower();
                *(_QWORD *)(v72 + 24) = v1;
                *(_OWORD *)(v72 + 32) = 0LL;
                WdLogEvent5_WdPower(v72);
                v71 = *(_QWORD *)(v1 + 3896);
                v73 = 5;
              }
              else
              {
                v73 = 2;
              }
              DxgkReleaseAdapterCoreSync(v71, v73, v70);
              DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
              if ( *(_BYTE *)(v1 + 5736) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
            }
            else
            {
              v28 = 1;
LABEL_25:
              DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), v28);
LABEL_26:
              *(_DWORD *)(v1 + 3976) = 1;
            }
          }
          v17 = v16;
          goto LABEL_11;
        }
        v17 = Blink != 64;
        if ( !DpiIsPowerRuntimeDStateTransition(v1) )
          goto LABEL_11;
        DpiSetDevicePowerTransitionStateAtPassiveLevel(v74, 5, 0);
        goto LABEL_10;
      }
      v17 = Blink != 64;
      if ( v14 == 2 )
      {
        if ( *(_DWORD *)(v1 + 3976) != 1 )
          goto LABEL_11;
        v18 = *(PERESOURCE **)(v1 + 3896);
        *(_DWORD *)(v1 + 3976) = 2;
        v19 = (int)v11[2].Blink;
        MonitorAdapterPowerChange(v18, 0LL, (__int64)v11[5].Flink);
        if ( DpiIsPowerRuntimeDStateTransition(v1) )
        {
          if ( v19 != 64 )
          {
            v65 = WdLogNewEntry5_WdPower();
            *(_QWORD *)(v65 + 24) = v1;
            *(_OWORD *)(v65 + 32) = 0LL;
            WdLogEvent5_WdPower(v65);
            LODWORD(v11[4].Blink) = 0;
            v17 = 0;
            KeSetEvent((PRKEVENT)&v11[3], 0, 0);
            v11 = 0LL;
            if ( *(_BYTE *)(v1 + 5736) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
        }
        LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v20);
        if ( DpiIsPowerRuntimeDStateTransition(v1) )
        {
          if ( v19 == 64 )
          {
            DpiSetDevicePowerTransitionStateAtPassiveLevel(v21, 0, 0);
            if ( *(_BYTE *)(v1 + 5736) )
              DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3896), PowerDeviceD0, 0);
          }
          KeSetEvent((PRKEVENT)(v1 + 4088), 0, 0);
          DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
        }
        goto LABEL_10;
      }
      if ( v14 <= 2 )
        goto LABEL_11;
      if ( v14 <= 4 )
      {
        if ( *(_DWORD *)(v1 + 3976) == 3 || (v61 = *(DXGADAPTER **)(v1 + 3896)) == 0LL )
        {
          *(_DWORD *)(v1 + 3976) = 3;
        }
        else
        {
          if ( v14 == 4 )
          {
            KeClearEvent((PRKEVENT)(v1 + 4112));
            LODWORD(v11[4].Blink) = 0;
            v17 = 0;
            KeSetEvent((PRKEVENT)&v11[3], 0, 0);
            v61 = *(DXGADAPTER **)(v1 + 3896);
            v11 = 0LL;
          }
          if ( v61 )
          {
            DXGADAPTER::PrepareToRemove(v61);
            v61 = *(DXGADAPTER **)(v1 + 3896);
          }
          if ( *(_QWORD *)(v1 + 488) )
          {
            KeSetEvent((PRKEVENT)(v1 + 4088), 0, 0);
            PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
            *(_QWORD *)(*(_QWORD *)(v1 + 3896) + 2808LL) = 0LL;
            v61 = *(DXGADAPTER **)(v1 + 3896);
            *(_QWORD *)(v1 + 488) = 0LL;
          }
          if ( *(_DWORD *)(v1 + 3976) == 1 )
          {
            v62 = 5;
            if ( (*(_BYTE *)(v1 + 3904) & 0x18) == 0 && *(_BYTE *)(v1 + 1160) )
              v62 = 2;
            v63 = DxgkReleaseAdapterCoreSync((__int64)v61, v62, v10);
            v61 = *(DXGADAPTER **)(v1 + 3896);
            LODWORD(v2) = v63;
          }
          LOBYTE(v9) = *(_BYTE *)(v1 + 1160);
          if ( v61 && *((_DWORD *)v61 + 50) != 2 && *((_DWORD *)v61 + 50) != 4 )
            DXGADAPTER::Stop(v61, v9, *(_BYTE *)(v1 + 1161));
          Global = DXGGLOBAL::GetGlobal((__int64)v61, v9);
          DXGGLOBAL::NotifyAdapterRemoval(Global);
          *(_DWORD *)(v1 + 3976) = 3;
          KeSetEvent((PRKEVENT)(v1 + 4112), 0, 0);
        }
        goto LABEL_10;
      }
      if ( v14 != 5 )
      {
        if ( v14 == 6 )
        {
          v30 = *(_DWORD *)(v1 + 3980);
          if ( (v30 & 4) != 0 )
          {
            v31 = *(_QWORD *)(v1 + 2880);
            *(_DWORD *)(v1 + 3980) = v30 & 0xFFFFFFFB;
            v32 = (*(__int64 (__fastcall **)(__int64))(v1 + 2912))(v31);
            v35 = v32;
            if ( v32 < 0 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v33);
              v36[3] = 275LL;
              v36[4] = 21LL;
              v36[5] = *(_QWORD *)(v1 + 2912);
              v36[6] = v35;
              WdLogEvent5_WdCriticalError(v36);
            }
          }
          v37 = *(_DWORD *)(v1 + 3980);
          v38 = *(_QWORD *)(v1 + 3896);
          if ( (v37 & 1) != 0 )
          {
            *(_DWORD *)(v1 + 3980) = v37 & 0xFFFFFFFE;
            v39 = DxgkReleaseAdapterCoreSync(v38, 5u, v10);
            v2 = v39;
            if ( v39 < 0 )
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v40);
              v42[3] = 275LL;
              v42[4] = 21LL;
              v42[5] = v2;
              WdLogEvent5_WdCriticalError(v42);
            }
          }
          else
          {
            LODWORD(v2) = DxgkResumeMemorySegments(v38);
            if ( (int)v2 < 0 )
            {
              v45 = WdLogNewEntry5_WdError(v44, v43);
              *(_QWORD *)(v45 + 24) = (int)v2;
              WdLogEvent5_WdError(v45);
            }
            if ( (*(_DWORD *)(v1 + 3980) & 2) == 0
              && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2u, v10) < 0 )
            {
              v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v47, v46);
              v48[3] = 275LL;
              v48[4] = 21LL;
              v48[5] = (int)v2;
              WdLogEvent5_WdCriticalError(v48);
            }
            *(_DWORD *)(v1 + 3980) &= ~2u;
          }
          *(_DWORD *)(v1 + 3976) = 6;
          v17 = v16;
        }
        else
        {
          if ( v14 != 7 )
            goto LABEL_11;
          if ( *(_DWORD *)(v1 + 3976) == 1 )
            LODWORD(v2) = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
          *(_DWORD *)(v1 + 3976) = 7;
        }
        goto LABEL_10;
      }
      if ( (Blink & 1) != 0 )
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 3, v10);
        DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3896), 1);
      }
      else
      {
        if ( (Blink & 2) != 0 )
          goto LABEL_54;
        v54 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3896), 2, v10);
        v2 = v54;
        if ( v54 < 0 )
        {
          v57 = WdLogNewEntry5_WdError(v56, v55);
          *(_QWORD *)(v57 + 24) = v2;
LABEL_61:
          WdLogEvent5_WdError(v57);
          goto LABEL_10;
        }
      }
      v13 = 1;
LABEL_54:
      v49 = (int)v11[2].Blink;
      if ( (v49 & 1) == 0 )
      {
        v50 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3896));
        v2 = v50;
        if ( v50 < 0 )
        {
          v53 = WdLogNewEntry5_WdWarning(v52, v51, v10);
          *(_QWORD *)(v53 + 24) = v2;
          WdLogEvent5_WdWarning(v53);
          goto LABEL_10;
        }
        v49 = (int)v11[2].Blink;
        v15 = 1;
      }
      if ( (v49 & 4) != 0 )
      {
        v58 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2904))(*(_QWORD *)(v1 + 2880));
        v2 = v58;
        if ( v58 < 0 )
        {
          v57 = WdLogNewEntry5_WdError(v60, v59);
          *(_QWORD *)(v57 + 24) = *(_QWORD *)(v1 + 2904);
          *(_QWORD *)(v57 + 32) = v2;
          goto LABEL_61;
        }
      }
      *(_DWORD *)(v1 + 3976) = 5;
      *(_DWORD *)(v1 + 3980) |= LODWORD(v11[2].Blink);
LABEL_10:
      if ( (int)v2 < 0 )
      {
        if ( v15 == 1 )
        {
          v77 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3896));
          if ( v77 < 0 )
          {
            v78 = WdLogNewEntry5_WdError(v76, v75);
            *(_QWORD *)(v78 + 24) = (int)v2;
            WdLogEvent5_WdError(v78);
            LODWORD(v2) = v77;
          }
        }
        if ( v13 == 1 )
        {
          v79 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3896), 5u, v10);
          v82 = v79;
          if ( v79 < 0 )
          {
            v83 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v81, v80);
            v83[3] = 275LL;
            v83[4] = 21LL;
            v83[5] = v82;
            WdLogEvent5_WdCriticalError(v83);
          }
        }
      }
LABEL_11:
      if ( v17 )
      {
        LODWORD(v11[4].Blink) = v2;
        KeSetEvent((PRKEVENT)&v11[3], 0, 0);
      }
    }
  }
LABEL_119:
  PsTerminateSystemThread(v2);
}
