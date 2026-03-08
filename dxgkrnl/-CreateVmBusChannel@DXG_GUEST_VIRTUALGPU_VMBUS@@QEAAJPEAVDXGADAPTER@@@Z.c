/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C036E57C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x1C001C590 (DpReadDeviceSpace.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C036DC84 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C036ECE8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct DXGADAPTER *a2)
{
  struct _KEVENT *v3; // rcx
  struct VMBCHANNEL__ *v5; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  struct _DEVICE_OBJECT *v10; // rdx
  __int128 v11; // xmm0
  int v12; // eax
  struct VMBCHANNEL__ *v13; // rcx
  NTSTATUS v14; // eax
  void (*v15)(struct VMBCHANNEL__ *, unsigned int); // [rsp+38h] [rbp-71h]
  union _LARGE_INTEGER Timeout[2]; // [rsp+50h] [rbp-59h] BYREF
  struct _UNICODE_STRING v17; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v18[2]; // [rsp+70h] [rbp-39h] BYREF
  __int64 (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-31h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-29h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v22)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v23)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  struct _GUID v24; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v25; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v26[2]; // [rsp+C0h] [rbp+17h] BYREF
  int v27; // [rsp+E0h] [rbp+37h]

  this[9] = a2;
  v3 = (struct _KEVENT *)this[7];
  if ( v3 )
  {
    KeClearEvent(v3);
  }
  else
  {
    v5 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, 64LL);
    this[7] = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v5, NotificationEvent, 0);
  }
  v7 = *((_QWORD *)a2 + 27);
  v27 = *(_DWORD *)L"t";
  *(_QWORD *)&v17.Length = 2359330LL;
  v17.Buffer = (wchar_t *)v26;
  v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v22 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v23 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v26[0] = *(_OWORD *)L"DXGK_AdapterGuest";
  v26[1] = *(_OWORD *)L"pterGuest";
  v18[0] = 1;
  v18[1] = 48;
  v25 = 0LL;
  Timeout[0].LowPart = 0;
  v8 = DpReadDeviceSpace(v7, 0LL, &v25, 0xC0u, 0x10u, (ULONG *)Timeout);
  v9 = v8;
  if ( v8 >= 0 && Timeout[0].LowPart == 16 )
  {
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 27);
    v11 = v25;
    *(_QWORD *)((char *)a2 + 4580) = v25;
    *(_OWORD *)&Timeout[0].LowPart = v11;
    v24 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
    v12 = CreateClientVmBusChannel(
            (__int64)a2,
            v10,
            &v24,
            (struct _GUID *)Timeout,
            &v17,
            (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v18,
            (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))CompositionSurfaceObject::SetPaired,
            v15,
            this);
    v9 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create the guest VM bus channel. Status: 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      v13 = this[7];
      Timeout[0].QuadPart = -80000000LL;
      v14 = KeWaitForSingleObject(v13, Executive, 0, 0, Timeout);
      v9 = v14;
      if ( v14 )
      {
        WdLogSingleEntry1(2LL, v14);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed waiting for VM bus channel to start: 0x%I64x",
          v9,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v9) = -1073741823;
      }
    }
    this[1] = *this;
  }
  else
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VM bus channel instance ID: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v9 >= 0 )
    *((_BYTE *)this + 68) = 1;
  else
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  return (unsigned int)v9;
}
