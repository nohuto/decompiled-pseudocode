/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C036EA18
 * Callers:
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C036AF40 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C036DFEC (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C036ECE8 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGK_VIRTUAL_GPU_PARAV *a3)
{
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // r8
  int v8; // eax
  __int64 v9; // rdi
  struct _UNICODE_STRING v11; // [rsp+60h] [rbp-49h] BYREF
  struct _GUID v12; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v13[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-21h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-19h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-11h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+A0h] [rbp-9h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+A8h] [rbp-1h]
  struct _GUID v19; // [rsp+B0h] [rbp+7h] BYREF
  _OWORD v20[2]; // [rsp+C0h] [rbp+17h] BYREF

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  *(_QWORD *)v12.Data4 = 0LL;
  v11.Buffer = (wchar_t *)v20;
  *(_QWORD *)&v12.Data1 = *(_QWORD *)((char *)a3 + 28);
  v14 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelOpened;
  v15 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelClosed;
  v16 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelSuspend;
  v17 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelStarted;
  v18 = DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted;
  v6 = *((_QWORD *)a3 + 2);
  v20[0] = *(_OWORD *)L"DXGK_VirtualGpu";
  *(_QWORD *)&v11.Length = 2097182LL;
  v20[1] = *(_OWORD *)L"tualGpu";
  v13[0] = 1;
  v13[1] = 48;
  v7 = *(struct _DEVICE_OBJECT **)(v6 + 216);
  v19 = (struct _GUID)DxgkPerVirtualGpuVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         a3,
         v7,
         &v19,
         &v12,
         &v11,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v13,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         0,
         this);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VGPU VM bus channel: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    this[1] = *this;
    *((_BYTE *)this + 68) = 1;
  }
  return (unsigned int)v9;
}
