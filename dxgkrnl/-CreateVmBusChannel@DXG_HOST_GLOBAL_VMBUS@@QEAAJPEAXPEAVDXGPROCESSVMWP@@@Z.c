__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        __int64 a2,
        struct DXGPROCESSVMWP *a3)
{
  struct DXGGLOBAL *Global; // rax
  void *v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  unsigned int v11; // [rsp+48h] [rbp-51h]
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v19; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v21; // [rsp+C0h] [rbp+27h] BYREF
  int v22; // [rsp+D0h] [rbp+37h]

  if ( *this )
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXG_GUEST_VIRTUALGPU_VMBUS *)this);
  v22 = *(_DWORD *)L"t";
  v12.Buffer = (wchar_t *)&v21;
  v14 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v18 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v21 = *(_OWORD *)L"DXGK_Host";
  *(_QWORD *)&v12.Length = 1310738LL;
  v13[0] = 1;
  v13[1] = 48;
  Global = DXGGLOBAL::GetGlobal();
  v7 = (void *)*((_QWORD *)a3 + 76);
  v11 = *((_QWORD *)Global + 220) >> 20;
  v19 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v20 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         v7,
         (struct _DEVICE_OBJECT *)g_pDeviceObject,
         &v20,
         &v19,
         &v12,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v13,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         v11,
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
    this[11] = a3;
  }
  return (unsigned int)v9;
}
