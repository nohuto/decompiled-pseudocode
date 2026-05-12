/*
 * XREFs of RaidAdapterStartDevice @ 0x1C002F9D4
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C002FF90 (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C00327F0 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0013D84 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C0019480 (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C001AC88 (RaidGetD3ColdInterface.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     McTemplateK0pqtqqt_EtwWriteTransfer @ 0x1C001D66C (McTemplateK0pqtqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterCompleteInitialization @ 0x1C002BBDC (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C002BE0C (RaidAdapterConfigureResources.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C002CCCC (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C002CCEC (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterInitializeWmi @ 0x1C002D26C (RaidAdapterInitializeWmi.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D620 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C002DD28 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterRegisterNonPoFxMiniportInterface @ 0x1C002DDA0 (RaidAdapterRegisterNonPoFxMiniportInterface.c)
 *     RaidAdapterRegisterRpmbInterface @ 0x1C002DE04 (RaidAdapterRegisterRpmbInterface.c)
 *     RaidAdapterStartMiniport @ 0x1C00300D8 (RaidAdapterStartMiniport.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8 (RaidResumeAndRestartAdapterQueues.c)
 *     WPP_SF_qD @ 0x1C003363C (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0033760 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 *     RaidGetResetInterface @ 0x1C0045440 (RaidGetResetInterface.c)
 *     RaInitializeConfiguration @ 0x1C007AE08 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDevice(char *Context, __int64 a2)
{
  int v4; // ebx
  int started; // esi
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // rcx
  int (__fastcall *v10)(_QWORD, __int64, _DWORD *); // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v12; // r8
  _QWORD *v13; // r9
  int *v14; // rax
  int v15; // ecx
  __int64 v16; // rdx
  void **v17; // rbx
  __int64 v18; // rdx
  NTSTATUS v19; // r8d
  int v20; // r8d
  void *v21; // rcx
  KIRQL v22; // bl
  __int64 v23; // rax
  PVOID *Handle; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+28h] [rbp-80h]
  _DWORD v26[4]; // [rsp+50h] [rbp-58h] BYREF
  int SystemPowerHint; // [rsp+60h] [rbp-48h]
  int SystemPowerResumeLatency; // [rsp+64h] [rbp-44h]

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids, Context, a2);
  }
  v4 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v4 != 2 && v4 != 8 )
    return 0LL;
  started = RaInitializeConfiguration(
              (int)Context + 328,
              *((_QWORD *)Context + 69),
              *((_DWORD *)Context + 196),
              *((_DWORD *)Context + 197),
              (Context[110] & 2) != 0);
  if ( started >= 0 )
  {
    v7 = *((_QWORD *)Context + 69);
    if ( !v7 )
    {
      started = -1073741810;
      goto LABEL_57;
    }
    started = RaidAdapterConfigureResources((__int64)Context);
    if ( started < 0 )
      goto LABEL_57;
    if ( *((_DWORD *)Context + 84) == 5 )
      (*((void (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 86))(
        *((_QWORD *)Context + 80),
        4LL,
        Context + 4880,
        0LL,
        64);
    *((_DWORD *)Context + 538) = 64;
    KeInitializeSpinLock((PKSPIN_LOCK)Context + 272);
    *((_QWORD *)Context + 273) = 0LL;
    *((_QWORD *)Context + 271) = Context + 2160;
    v8 = (__int64 *)(Context + 5496);
    *((_QWORD *)Context + 270) = Context + 2160;
    *((_DWORD *)Context + 552) = 1;
    RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 687);
    RaidGetResetInterface(*((PDEVICE_OBJECT *)Context + 1));
    started = RaidAdapterStartMiniport(Context, v7);
    if ( started < 0 )
      goto LABEL_57;
    if ( v4 == 8 )
    {
      v22 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(Context);
      KeLowerIrql(v22);
    }
    else
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( *((_QWORD *)Context + 636) )
        {
          v26[0] = 0;
          v10 = *(int (__fastcall **)(_QWORD, __int64, _DWORD *))(v9 + 40);
          if ( v10 )
          {
            if ( v10(*(_QWORD *)(v9 + 8), 1LL, v26) >= 0 && (unsigned int)(v26[0] - 4) <= 1 )
            {
              *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) |= 0x80u;
              WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 1));
              *((_QWORD *)Context + 724) = WorkItem;
              if ( !WorkItem )
              {
                started = -1073741670;
                goto LABEL_57;
              }
            }
          }
        }
      }
      started = RaidAdapterCompleteInitialization((__int64)Context);
      if ( started >= 0 )
      {
        if ( StorEtwLoggingEnabled )
        {
          v13 = (_QWORD *)*((_QWORD *)Context + 636);
          if ( v13 )
          {
            v14 = (int *)v13[1];
            v15 = *v14;
            if ( *v14 == 1 )
            {
              v16 = (__int64)(v14 + 6);
            }
            else
            {
              v16 = (__int64)(v14 + 8);
              if ( v15 != 2 && v15 != 3 )
                v16 = 8LL;
            }
            if ( (byte_1C0069841 & 1) != 0 )
            {
              v25 = ((unsigned __int8)Context[108] >> 3) & 1;
              LODWORD(Handle) = *((_DWORD *)Context + 14);
              McTemplateK0pqtqqt_EtwWriteTransfer(
                v25,
                v16,
                v12,
                *v13,
                Handle,
                v25,
                *((_DWORD *)Context + 1276),
                *(_DWORD *)v16,
                (unsigned __int8)Context[110] >> 7);
            }
          }
        }
        RaidAdapterInitializeWmi((__int64)Context);
        RaidAdapterRegisterDeviceInterface((__int64)Context);
        RaidAdapterRegisterRpmbInterface((__int64)Context);
        if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
          goto LABEL_51;
        v17 = (void **)(Context + 5096);
        v19 = PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &GUID_LOW_POWER_EPOCH,
                RaidPowerSettingCallback,
                Context,
                (PVOID *)Context + 637);
        if ( v19 < 0 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              18LL,
              &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
              Context,
              v19);
          }
        }
        else
        {
          LOBYTE(v18) = 1;
          v20 = PoRegisterCoalescingCallback(RaidCoalescingCallback, v18, Context + 5112, Context);
          if ( v20 >= 0 )
          {
            Context[108] &= ~0x80u;
            Context[109] &= ~1u;
            v26[2] = 1;
            v26[3] = 16;
            SystemPowerHint = RaidAdapterGetSystemPowerHint((__int64)Context);
            SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
            RaCallMiniportAdapterControl((__int64)(Context + 320));
            goto LABEL_48;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            WPP_SF_qD(
              WPP_GLOBAL_Control->AttachedDevice,
              17LL,
              &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
              Context,
              v20);
          }
          v21 = *v17;
          *((_QWORD *)Context + 639) = 0LL;
          PoUnregisterPowerSettingCallback(v21);
        }
        *v17 = 0LL;
LABEL_48:
        started = PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 739);
        if ( started < 0 )
        {
          *((_QWORD *)Context + 739) = 0LL;
          started = 0;
        }
        else
        {
          Context[111] &= ~1u;
        }
LABEL_51:
        if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
        {
          PoRegisterPowerSettingCallback(
            *((PDEVICE_OBJECT *)Context + 1),
            &GUID_DISK_MAX_POWER,
            RaidPowerSettingCallback,
            Context,
            (PVOID *)Context + 640);
          started = IoRegisterDeviceInterface(
                      *((PDEVICE_OBJECT *)Context + 4),
                      &GUID_DEVINTERFACE_THERMAL_COOLING,
                      0LL,
                      (PUNICODE_STRING)(Context + 5128));
          if ( started >= 0 )
          {
            Context[109] |= 8u;
            IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5128), 1u);
          }
        }
        if ( !*((_QWORD *)Context + 636) )
          RaidAdapterRegisterNonPoFxMiniportInterface((__int64)Context);
      }
    }
  }
LABEL_57:
  v23 = *((_QWORD *)Context + 636);
  if ( v23 && (*(_DWORD *)(v23 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~4u;
  }
  *((_QWORD *)Context + 721) = 0LL;
  *((_DWORD *)Context + 1444) = 0;
  if ( started < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids,
      Context,
      a2,
      started);
  }
  return (unsigned int)started;
}
