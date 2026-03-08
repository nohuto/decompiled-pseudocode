/*
 * XREFs of ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C036E2F8
 * Callers:
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0371044 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C036DC84 (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C036EC5C (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(struct VMBCHANNEL__ **this, struct _DEVICE_OBJECT *a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  struct _KEVENT *v4; // rcx
  struct VMBCHANNEL__ *v5; // rax
  int v7; // eax
  __int64 v8; // rdi
  struct VMBCHANNEL__ *v9; // rcx
  NTSTATUS v10; // eax
  struct DXGGLOBAL *Global; // rax
  void (*v12)(struct VMBCHANNEL__ *, unsigned int); // [rsp+40h] [rbp-61h]
  char v13[8]; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING v14; // [rsp+60h] [rbp-41h] BYREF
  union _LARGE_INTEGER Timeout[2]; // [rsp+78h] [rbp-29h] BYREF
  _DWORD v16[2]; // [rsp+88h] [rbp-19h] BYREF
  __int64 (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-11h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-9h]
  void (__fastcall *v19)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-1h]
  void (__fastcall *v20)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp+7h]
  void (__fastcall *v21)(struct VMBCHANNEL__ *); // [rsp+B0h] [rbp+Fh]
  struct _GUID v22; // [rsp+B8h] [rbp+17h] BYREF
  _OWORD v23[2]; // [rsp+C8h] [rbp+27h] BYREF
  wchar_t v24; // [rsp+E8h] [rbp+47h]

  v2 = (struct _DEVICE_OBJECT *)g_pDeviceObject;
  v4 = (struct _KEVENT *)this[7];
  if ( v4 )
  {
    KeClearEvent(v4);
  }
  else
  {
    v5 = (struct VMBCHANNEL__ *)operator new[](0x18uLL, 0x4B677844u, 64LL);
    this[7] = v5;
    if ( !v5 )
      return 3221225495LL;
    KeInitializeEvent((PRKEVENT)v5, NotificationEvent, 0);
  }
  v24 = aDxgkGlobalgues[16];
  v14.Buffer = (wchar_t *)v23;
  v17 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelOpened;
  *(_QWORD *)&v14.Length = 2228256LL;
  v18 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelClosed;
  v16[0] = 1;
  v19 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v20 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelStarted;
  v21 = DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v23[0] = *(_OWORD *)L"DXGK_GlobalGuest";
  v16[1] = 48;
  v23[1] = *(_OWORD *)L"balGuest";
  *(_OWORD *)&Timeout[0].LowPart = DxgkPerVmVmBusChanelInstanceId;
  v22 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v7 = CreateClientVmBusChannel(
         (__int64)this,
         v2,
         &v22,
         (struct _GUID *)Timeout,
         &v14,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v16,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_GUEST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         v12,
         this);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create the guest VM bus channel. Status: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_12:
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
    return (unsigned int)v8;
  }
  v9 = this[7];
  Timeout[0].QuadPart = -80000000LL;
  v10 = KeWaitForSingleObject(v9, Executive, 0, 0, Timeout);
  v8 = v10;
  if ( v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed waiting for VM bus channel to start: 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = -1073741823;
  }
  if ( (int)v8 < 0 )
    goto LABEL_12;
  this[1] = *this;
  *((_BYTE *)this + 68) = 1;
  v13[0] = 1;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))GlobalVmBusStatChangeCallback,
    (__int64)v13,
    1);
  return (unsigned int)v8;
}
