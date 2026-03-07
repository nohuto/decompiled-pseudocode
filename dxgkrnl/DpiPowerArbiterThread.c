void __fastcall DpiPowerArbiterThread(_QWORD *StartContext)
{
  __int64 v1; // rdi
  char v2; // r14
  NTSTATUS v3; // r15d
  bool v4; // zf
  void *v5; // rax
  NTSTATUS v6; // eax
  __int64 v7; // r9
  struct _LIST_ENTRY *v8; // rsi
  int Blink; // edx
  char v10; // r13
  __int64 Blink_low; // r8
  bool v12; // r12
  bool v13; // bl
  __int64 v14; // r8
  int v15; // eax
  DXGADAPTER **v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r9
  struct _KEVENT *v20; // r13
  int v21; // eax
  char started; // al
  __int64 v23; // r8
  DXGADAPTER *v24; // r14
  DXGADAPTER *v25; // rcx
  struct DXGGLOBAL *v26; // rax
  PERESOURCE **v27; // rax
  PERESOURCE **v28; // rcx
  PERESOURCE **v29; // rcx
  int v30; // eax
  unsigned int v31; // ebx
  PERESOURCE *v32; // rcx
  int v33; // esi
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // edx
  DXGADAPTER *v38; // rsi
  struct DXGGLOBAL *v39; // rax
  PERESOURCE **v40; // rax
  PERESOURCE **v41; // rcx
  PERESOURCE **v42; // rcx
  int v43; // eax
  unsigned int v44; // ebx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rbx
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // esi
  int v57; // eax
  DXGADAPTER *v58; // rcx
  unsigned int v59; // edx
  DXGADAPTER *v60; // rcx
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v62; // rbx
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // rcx
  struct DXGGLOBAL *v65; // rax
  PERESOURCE **v66; // rax
  PERESOURCE **v67; // rcx
  PERESOURCE **v68; // rcx
  unsigned int v69; // ebx
  struct DXGGLOBAL *v70; // rax
  PERESOURCE **v71; // rax
  PERESOURCE **v72; // rcx
  PERESOURCE **v73; // rcx
  unsigned int v74; // ebx
  unsigned int v75; // edx
  __int64 v76; // [rsp+58h] [rbp-69h] BYREF
  __int128 v77; // [rsp+60h] [rbp-61h]
  __int64 v78; // [rsp+70h] [rbp-51h]
  struct _TDR_RECOVERY_CONTEXT *v79; // [rsp+78h] [rbp-49h]
  __int64 v80; // [rsp+80h] [rbp-41h] BYREF
  __int128 v81; // [rsp+88h] [rbp-39h]
  __int64 v82; // [rsp+98h] [rbp-29h]
  struct _TDR_RECOVERY_CONTEXT *v83; // [rsp+A0h] [rbp-21h]
  __int64 v84; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v85; // [rsp+B0h] [rbp-11h]
  __int64 v86; // [rsp+C0h] [rbp-1h]
  struct _TDR_RECOVERY_CONTEXT *v87; // [rsp+C8h] [rbp+7h]
  __int64 v88; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v89; // [rsp+D8h] [rbp+17h]
  __int64 v90; // [rsp+E8h] [rbp+27h]
  struct _TDR_RECOVERY_CONTEXT *v91; // [rsp+F0h] [rbp+2Fh]
  struct _LIST_ENTRY *PowerActionQueueEntry; // [rsp+128h] [rbp+67h]

  v1 = StartContext[8];
  v2 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 4000) == 7;
  *(_QWORD *)(v1 + 3976) = KeGetCurrentThread();
  if ( !v4 )
  {
    v5 = (void *)(v1 + 3952);
    do
    {
      v6 = KeWaitForSingleObject(v5, Executive, 0, 0, 0LL);
      v3 = v6;
      if ( v6 )
      {
        WdLogSingleEntry1(2LL, v6);
      }
      else
      {
        PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
        v8 = PowerActionQueueEntry;
        if ( PowerActionQueueEntry )
        {
          while ( 1 )
          {
            Blink = (int)v8[2].Blink;
            v10 = 0;
            Blink_low = LODWORD(v8[1].Blink);
            v3 = 0;
            v12 = Blink != 64;
            v13 = Blink != 64;
            if ( LODWORD(v8[1].Blink) != 1 )
            {
              switch ( LODWORD(v8[1].Blink) )
              {
                case 2:
                  if ( *(_DWORD *)(v1 + 4000) == 1 )
                  {
                    v32 = *(PERESOURCE **)(v1 + 3912);
                    *(_DWORD *)(v1 + 4000) = 2;
                    v33 = (int)v8[2].Blink;
                    MonitorAdapterPowerChange(v32, 0LL, (__int64)PowerActionQueueEntry[5].Flink, v7);
                    if ( DpiIsPowerRuntimeDStateTransition(v1) )
                    {
                      if ( v33 != 64 )
                      {
                        WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                        LODWORD(PowerActionQueueEntry[4].Blink) = 0;
                        v13 = 0;
                        KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
                        PowerActionQueueEntry = 0LL;
                        if ( *(_BYTE *)(v1 + 5680) )
                          DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3912), PowerDeviceD0, 0);
                      }
                    }
                    v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3912), 5u, v34);
                    if ( DpiIsPowerRuntimeDStateTransition(v1) )
                    {
                      if ( v33 == 64 )
                      {
                        DpiSetDevicePowerTransitionStateAtPassiveLevel(v35, 0, 0);
                        if ( *(_BYTE *)(v1 + 5680) )
                          DxgkNotifySharedPowerGraphicsPowerTransition(*(void **)(v1 + 3912), PowerDeviceD0, 0);
                      }
                      KeSetEvent((PRKEVENT)(v1 + 4112), 0, 0);
                      DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v1);
                    }
                    goto LABEL_47;
                  }
LABEL_48:
                  v2 = 0;
                  goto LABEL_49;
                case 3:
                case 4:
                  if ( *(_DWORD *)(v1 + 4000) == 3 || !*(_QWORD *)(v1 + 3912) )
                  {
                    *(_DWORD *)(v1 + 4000) = 3;
                  }
                  else
                  {
                    if ( (_DWORD)Blink_low == 4 )
                    {
                      KeClearEvent((PRKEVENT)(v1 + 4136));
                      v13 = 0;
                      LODWORD(PowerActionQueueEntry[4].Blink) = 0;
                      KeSetEvent((PRKEVENT)&PowerActionQueueEntry[3], 0, 0);
                      PowerActionQueueEntry = 0LL;
                    }
                    v58 = *(DXGADAPTER **)(v1 + 3912);
                    if ( v58 )
                    {
                      DXGADAPTER::PrepareToRemove(v58);
                      v58 = *(DXGADAPTER **)(v1 + 3912);
                    }
                    if ( *(_QWORD *)(v1 + 488) )
                    {
                      KeSetEvent((PRKEVENT)(v1 + 4112), 0, 0);
                      PoFxUnregisterDevice(*(_QWORD *)(v1 + 488));
                      *(_QWORD *)(*(_QWORD *)(v1 + 3912) + 3032LL) = 0LL;
                      *(_QWORD *)(v1 + 488) = 0LL;
                      v58 = *(DXGADAPTER **)(v1 + 3912);
                    }
                    if ( *(_DWORD *)(v1 + 4000) == 1 )
                    {
                      v59 = 5;
                      if ( (*(_BYTE *)(v1 + 3920) & 0x18) == 0 && *(_BYTE *)(v1 + 1161) )
                        v59 = 2;
                      v3 = DxgkReleaseAdapterCoreSync((__int64)v58, v59, Blink_low);
                    }
                    v60 = *(DXGADAPTER **)(v1 + 3912);
                    if ( v60 && *((_DWORD *)v60 + 50) != 2 && *((_DWORD *)v60 + 50) != 4 )
                      DXGADAPTER::Stop(v60, *(_BYTE *)(v1 + 1161), *(_BYTE *)(v1 + 1162));
                    Global = DXGGLOBAL::GetGlobal();
                    DXGGLOBAL::NotifyAdapterRemoval(Global);
                    *(_DWORD *)(v1 + 4000) = 3;
                    KeSetEvent((PRKEVENT)(v1 + 4136), 0, 0);
                  }
LABEL_47:
                  if ( v3 >= 0 )
                    goto LABEL_48;
                  break;
                case 5:
                  if ( (Blink & 1) != 0 )
                  {
                    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3912), 3, Blink_low);
                    DXGADAPTER::ApplyCoreSyncAction(*(_QWORD *)(v1 + 3912), 1);
                    goto LABEL_100;
                  }
                  if ( (Blink & 2) == 0 )
                  {
                    v54 = DxgkAcquireAdapterCoreSync(*(_QWORD *)(v1 + 3912), 2, Blink_low);
                    v2 = 0;
                    v3 = v54;
                    if ( v54 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v54);
                      goto LABEL_108;
                    }
LABEL_100:
                    v2 = 1;
                  }
                  if ( ((__int64)v8[2].Blink & 1) == 0 )
                  {
                    v53 = DxgkSuspendMemorySegments(*(_QWORD *)(v1 + 3912));
                    v3 = v53;
                    if ( v53 < 0 )
                    {
                      WdLogSingleEntry1(3LL, v53);
                      v13 = v12;
                      goto LABEL_116;
                    }
                    v10 = 1;
                  }
                  if ( ((__int64)v8[2].Blink & 4) == 0
                    || (v55 = (*(__int64 (__fastcall **)(_QWORD))(v1 + 2920))(*(_QWORD *)(v1 + 2896)), v3 = v55, v55 >= 0) )
                  {
                    *(_DWORD *)(v1 + 4000) = 5;
                    *(_DWORD *)(v1 + 4004) |= LODWORD(v8[2].Blink);
                    goto LABEL_120;
                  }
                  WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 2920), v55);
                  v13 = v12;
                  break;
                case 6:
                  v45 = *(_DWORD *)(v1 + 4004);
                  if ( (v45 & 4) != 0 )
                  {
                    v46 = *(_QWORD *)(v1 + 2896);
                    *(_DWORD *)(v1 + 4004) = v45 & 0xFFFFFFFB;
                    v47 = (*(__int64 (__fastcall **)(__int64))(v1 + 2928))(v46);
                    if ( v47 < 0 )
                      WdLogSingleEntry4(0LL, 275LL, 21LL, *(_QWORD *)(v1 + 2928), v47);
                  }
                  v48 = *(_DWORD *)(v1 + 4004);
                  v49 = *(_QWORD *)(v1 + 3912);
                  if ( (v48 & 1) != 0 )
                  {
                    *(_DWORD *)(v1 + 4004) = v48 & 0xFFFFFFFE;
                    v50 = DxgkReleaseAdapterCoreSync(v49, 5u, Blink_low);
                    v3 = v50;
                    if ( v50 < 0 )
                      WdLogSingleEntry3(0LL, 275LL, 21LL, v50);
                  }
                  else
                  {
                    v51 = DxgkResumeMemorySegments(v49);
                    v3 = v51;
                    v52 = v51;
                    if ( v51 < 0 )
                      WdLogSingleEntry1(2LL, v51);
                    if ( (*(_DWORD *)(v1 + 4004) & 2) == 0
                      && (int)DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3912), 2u, Blink_low) < 0 )
                    {
                      WdLogSingleEntry3(0LL, 275LL, 21LL, v52);
                    }
                    *(_DWORD *)(v1 + 4004) &= ~2u;
                  }
                  *(_DWORD *)(v1 + 4000) = 6;
LABEL_120:
                  v13 = v12;
                  goto LABEL_47;
                case 7:
                  if ( *(_DWORD *)(v1 + 4000) == 1 )
                    v3 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3912), 5u, Blink_low);
                  *(_DWORD *)(v1 + 4000) = 7;
                  goto LABEL_47;
                default:
                  goto LABEL_48;
              }
              if ( v10 == 1 )
              {
                v56 = DxgkResumeMemorySegments(*(_QWORD *)(v1 + 3912));
                if ( v56 < 0 )
                {
                  WdLogSingleEntry1(2LL, v3);
                  v3 = v56;
                }
              }
LABEL_116:
              if ( v2 == 1 )
              {
                v57 = DxgkReleaseAdapterCoreSync(*(_QWORD *)(v1 + 3912), 5u, Blink_low);
                v2 = 0;
                if ( v57 < 0 )
                  WdLogSingleEntry3(0LL, 275LL, 21LL, v57);
                goto LABEL_49;
              }
              goto LABEL_48;
            }
            if ( ((*(_DWORD *)(v1 + 4000) - 1) & 0xFFFFFFFD) == 0 )
            {
              v2 = 0;
              if ( DpiIsPowerRuntimeDStateTransition(v1) )
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v36, 5, 0);
              goto LABEL_49;
            }
            DxgkShutdownBootGraphics(0LL, 0);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3808), 1u);
            ExReleaseResourceLite((PERESOURCE)(v1 + 3808));
            KeLeaveCriticalRegion();
            v15 = (int)v8[2].Blink;
            v16 = (DXGADAPTER **)(v1 + 3912);
            v17 = *(_QWORD *)(v1 + 3912);
            if ( (v15 & 0x40) != 0 )
            {
              DxgkAcquireAdapterCoreSync(v17, 4, v14);
              v2 = 0;
              if ( !DxgkIsAdapterCoreSyncAcquired(*v16, 2) )
              {
                WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                v3 = -1073741823;
LABEL_108:
                v13 = v12;
LABEL_49:
                v20 = (struct _KEVENT *)PowerActionQueueEntry;
                goto LABEL_50;
              }
              WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
            }
            else
            {
              v37 = 6;
              if ( (v15 & 0x98) == 0 )
                v37 = 3;
              DxgkAcquireAdapterCoreSync(v17, v37, v14);
              v2 = 0;
            }
            v20 = (struct _KEVENT *)PowerActionQueueEntry;
            if ( *(_DWORD *)(v1 + 284) == 1 )
            {
              LOBYTE(v18) = 1;
              MonitorAdapterPowerChange((PERESOURCE *)*v16, v18, (__int64)PowerActionQueueEntry[5].Flink, v19);
              DmmAdapterPowerChange((PERESOURCE *)*v16, 1);
            }
            DmmResetModeState((PERESOURCE *)*v16, -1);
            v21 = (int)PowerActionQueueEntry[2].Blink;
            if ( (v21 & 0x20) != 0 )
            {
              v62 = *v16;
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)*v16) )
              {
                WdLogSingleEntry1(1LL, 3712LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"IsCoreResourceExclusiveOwner()",
                  3712LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v63 = DXGGLOBAL::GetGlobal();
              WdLogSingleEntry3(9LL, v62, 4LL, *((unsigned __int8 *)v63 + 304400));
              v64 = *((_QWORD *)v62 + 366);
              if ( v64 )
                ADAPTER_RENDER::FlushScheduler(v64, 6u, 0xFFFFFFFF, 0);
              goto LABEL_36;
            }
            if ( (v21 & 0x10) != 0 )
              break;
            if ( (v21 & 8) != 0 )
            {
              v38 = *v16;
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v38) )
              {
                WdLogSingleEntry1(1LL, 3712LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"IsCoreResourceExclusiveOwner()",
                  3712LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v65 = DXGGLOBAL::GetGlobal();
              WdLogSingleEntry3(9LL, v38, 2LL, *((unsigned __int8 *)v65 + 304400));
              v66 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              if ( v66 )
              {
                ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 8u, 0xFFFFFFFF, 0);
                v66 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              }
              v67 = (PERESOURCE **)*((_QWORD *)v38 + 365);
              if ( v67 )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v67, v66);
              v68 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              if ( !v68 )
                goto LABEL_75;
              ADAPTER_RENDER::DisablePinnedHardware(v68);
              v69 = *((_BYTE *)v38 + 207) != 0 ? 67 : 3;
              if ( *((_BYTE *)v38 + 4784) )
              {
                v69 |= 0x80u;
                *((_BYTE *)v38 + 4784) = 0;
              }
              ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 9u, 0xFFFFFFFF, 0);
              WdLogSingleEntry2(9LL, v38, *((unsigned __int8 *)v38 + 2870));
              ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v69, 0LL);
              WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3804LL);
              if ( !DXGADAPTER::IsDxgmms2(v38) )
                goto LABEL_75;
              if ( !*((_BYTE *)v38 + 2870) )
                goto LABEL_75;
              v83 = g_TdrRecoveryInProgress;
              v81 = 0LL;
              v80 = 0LL;
              v82 = 0LL;
              *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
              TdrResetFromTimeoutWorkItem(&v80);
              WdLogSingleEntry1(9LL, v38);
              ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v69, 0LL);
              WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3829LL);
              if ( !*((_BYTE *)v38 + 2870) )
                goto LABEL_75;
              goto LABEL_171;
            }
            if ( (v21 & 0x80u) != 0 )
            {
              v38 = *v16;
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v38) )
              {
                WdLogSingleEntry1(1LL, 3712LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"IsCoreResourceExclusiveOwner()",
                  3712LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v70 = DXGGLOBAL::GetGlobal();
              WdLogSingleEntry3(9LL, v38, 5LL, *((unsigned __int8 *)v70 + 304400));
              v71 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              if ( v71 )
              {
                ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 8u, 0xFFFFFFFF, 0);
                v71 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              }
              v72 = (PERESOURCE **)*((_QWORD *)v38 + 365);
              if ( v72 )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v72, v71);
              v73 = (PERESOURCE **)*((_QWORD *)v38 + 366);
              if ( v73 )
              {
                ADAPTER_RENDER::DisablePinnedHardware(v73);
                v74 = *((_BYTE *)v38 + 207) != 0 ? 97 : 33;
                if ( *((_BYTE *)v38 + 4784) )
                {
                  v74 |= 0x80u;
                  *((_BYTE *)v38 + 4784) = 0;
                }
                ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 9u, 0xFFFFFFFF, 0);
                WdLogSingleEntry2(9LL, v38, *((unsigned __int8 *)v38 + 2870));
                ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v74, 0LL);
                WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3804LL);
                if ( DXGADAPTER::IsDxgmms2(v38) )
                {
                  if ( *((_BYTE *)v38 + 2870) )
                  {
                    v87 = g_TdrRecoveryInProgress;
                    v85 = 0LL;
                    v84 = 0LL;
                    v86 = 0LL;
                    *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
                    TdrResetFromTimeoutWorkItem(&v84);
                    WdLogSingleEntry1(9LL, v38);
                    ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v74, 0LL);
                    WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3829LL);
                    if ( *((_BYTE *)v38 + 2870) )
                      goto LABEL_171;
                  }
                }
              }
LABEL_75:
              DXGADAPTER::StopDeadlockTrackers(v38);
              goto LABEL_36;
            }
            if ( (v21 & 0x40) != 0 )
            {
              WdLogSingleEntry3(9LL, v1, 1LL, 0LL);
              if ( *(_BYTE *)(v1 + 5680) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*v16, PowerDeviceD3, 1u);
              started = DpiStartSuspendingAdapter((KSPIN_LOCK *)v1);
              v24 = *v16;
              v25 = *v16;
              if ( !started )
              {
                v75 = 2;
LABEL_176:
                DxgkReleaseAdapterCoreSync((__int64)v25, v75, v23);
                DpiSetDevicePowerTransitionStateAtPassiveLevel(v1, 0, 0);
                v2 = 0;
                if ( *(_BYTE *)(v1 + 5680) )
                  DxgkNotifySharedPowerGraphicsPowerTransition(*v16, PowerDeviceD0, 0);
                goto LABEL_37;
              }
              if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v25) )
              {
                WdLogSingleEntry1(1LL, 3712LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"IsCoreResourceExclusiveOwner()",
                  3712LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v26 = DXGGLOBAL::GetGlobal();
              WdLogSingleEntry3(9LL, v24, 3LL, *((unsigned __int8 *)v26 + 304400));
              v27 = (PERESOURCE **)*((_QWORD *)v24 + 366);
              if ( v27 )
              {
                ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v24 + 366), 8u, 0xFFFFFFFF, 0);
                v27 = (PERESOURCE **)*((_QWORD *)v24 + 366);
              }
              v28 = (PERESOURCE **)*((_QWORD *)v24 + 365);
              if ( v28 )
                ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v28, v27);
              v29 = (PERESOURCE **)*((_QWORD *)v24 + 366);
              if ( v29 )
              {
                ADAPTER_RENDER::DisablePinnedHardware(v29);
                v30 = 32;
                if ( *((_DWORD *)v24 + 40) != 1 )
                  v30 = 4;
                v31 = v30 | (*((_BYTE *)v24 + 207) != 0 ? 65 : 1);
                if ( *((_BYTE *)v24 + 4784) )
                {
                  v31 |= 0x80u;
                  *((_BYTE *)v24 + 4784) = 0;
                }
                ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v24 + 366), 9u, 0xFFFFFFFF, 0);
                WdLogSingleEntry2(9LL, v24, *((unsigned __int8 *)v24 + 2870));
                ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v24 + 366), v31, 0LL);
                WdLogSingleEntry3(9LL, v24, *((unsigned __int8 *)v24 + 2870), 3804LL);
                if ( DXGADAPTER::IsDxgmms2(v24) )
                {
                  if ( *((_BYTE *)v24 + 2870) )
                  {
                    v91 = g_TdrRecoveryInProgress;
                    v88 = 0LL;
                    v90 = 0LL;
                    v89 = 0LL;
                    *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
                    TdrResetFromTimeoutWorkItem(&v88);
                    WdLogSingleEntry1(9LL, v24);
                    ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v24 + 366), v31, 0LL);
                    WdLogSingleEntry3(9LL, v24, *((unsigned __int8 *)v24 + 2870), 3829LL);
                    if ( *((_BYTE *)v24 + 2870) )
                    {
                      WdLogSingleEntry1(1LL, 3830LL);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        262146,
                        -1,
                        (__int64)L"!IsTdrPending()",
                        3830LL,
                        0LL,
                        0LL,
                        0LL,
                        0LL);
                    }
                  }
                }
              }
              DXGADAPTER::StopDeadlockTrackers(v24);
              DpiFinishSuspendAdapter((struct _FDO_CONTEXT *)v1);
              if ( *(_DWORD *)(v1 + 4000) != 1 )
              {
                WdLogSingleEntry3(9LL, v1, 0LL, 0LL);
                v25 = *v16;
                v75 = 5;
                goto LABEL_176;
              }
              v2 = 0;
              if ( *(_BYTE *)(v1 + 5680) )
                DxgkNotifySharedPowerGraphicsPowerTransition(*v16, PowerDeviceD3, 0);
            }
            else
            {
              DXGADAPTER::ApplyCoreSyncAction((__int64)*v16, 1);
            }
LABEL_36:
            *(_DWORD *)(v1 + 4000) = 1;
LABEL_37:
            v13 = v12;
LABEL_50:
            if ( v13 )
            {
              v20[3].Header.LockNV = v3;
              KeSetEvent(v20 + 2, 0, 0);
            }
            PowerActionQueueEntry = DpiGetPowerActionQueueEntry((KSPIN_LOCK *)v1);
            v8 = PowerActionQueueEntry;
            if ( !PowerActionQueueEntry )
              goto LABEL_53;
          }
          v38 = *v16;
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v38) )
          {
            WdLogSingleEntry1(1LL, 3712LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"IsCoreResourceExclusiveOwner()",
              3712LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v39 = DXGGLOBAL::GetGlobal();
          WdLogSingleEntry3(9LL, v38, 3LL, *((unsigned __int8 *)v39 + 304400));
          v40 = (PERESOURCE **)*((_QWORD *)v38 + 366);
          if ( v40 )
          {
            ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 8u, 0xFFFFFFFF, 0);
            v40 = (PERESOURCE **)*((_QWORD *)v38 + 366);
          }
          v41 = (PERESOURCE **)*((_QWORD *)v38 + 365);
          if ( v41 )
            ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(v41, v40);
          v42 = (PERESOURCE **)*((_QWORD *)v38 + 366);
          if ( !v42 )
            goto LABEL_75;
          ADAPTER_RENDER::DisablePinnedHardware(v42);
          v43 = 32;
          if ( *((_DWORD *)v38 + 40) != 1 )
            v43 = 4;
          v44 = v43 | (*((_BYTE *)v38 + 207) != 0 ? 65 : 1);
          if ( *((_BYTE *)v38 + 4784) )
          {
            v44 |= 0x80u;
            *((_BYTE *)v38 + 4784) = 0;
          }
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)v38 + 366), 9u, 0xFFFFFFFF, 0);
          WdLogSingleEntry2(9LL, v38, *((unsigned __int8 *)v38 + 2870));
          ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v44, 0LL);
          WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3804LL);
          if ( !DXGADAPTER::IsDxgmms2(v38) )
            goto LABEL_75;
          if ( !*((_BYTE *)v38 + 2870) )
            goto LABEL_75;
          v79 = g_TdrRecoveryInProgress;
          v77 = 0LL;
          v76 = 0LL;
          v78 = 0LL;
          *((_QWORD *)g_TdrRecoveryInProgress + 363) = KeGetCurrentThread();
          TdrResetFromTimeoutWorkItem(&v76);
          WdLogSingleEntry1(9LL, v38);
          ADAPTER_RENDER::PurgeSegments(*((struct _EX_RUNDOWN_REF **)v38 + 366), v44, 0LL);
          WdLogSingleEntry3(9LL, v38, *((unsigned __int8 *)v38 + 2870), 3829LL);
          if ( !*((_BYTE *)v38 + 2870) )
            goto LABEL_75;
LABEL_171:
          WdLogSingleEntry1(1LL, 3830LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!IsTdrPending()", 3830LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_75;
        }
      }
LABEL_53:
      v5 = (void *)(v1 + 3952);
    }
    while ( *(_DWORD *)(v1 + 4000) != 7 );
  }
  PsTerminateSystemThread(v3);
}
