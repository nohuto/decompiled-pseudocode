char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  char v11; // al
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // eax
  DXGDEVICE *v16; // rbx
  struct VMBPACKETCOMPLETION__ *v17; // rcx
  __int64 v18; // rbx
  struct DXGADAPTER **v19; // rdx
  int v20; // eax
  struct VMBPACKETCOMPLETION__ *v21; // rcx
  __int64 v22; // rbx
  __int64 v24; // [rsp+40h] [rbp-C0h]
  D3DKMT_HANDLE hDevice; // [rsp+60h] [rbp-A0h] BYREF
  struct DXG_SET_GUEST_DATA *v26; // [rsp+68h] [rbp-98h] BYREF
  DXGDEVICE *v27; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  _D3DKMT_CREATEDEVICE v31; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[144]; // [rsp+D0h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v29);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v30 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 1024LL;
    WdLogSingleEntry1(2LL, 1024LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_21:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_22;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v6 )
  {
LABEL_22:
    v3 = 0;
    goto LABEL_23;
  }
  v7 = *((_QWORD *)a1 + 10);
  hDevice = 0;
  v8 = *(_QWORD *)(v7 + 104) + 160LL;
  v9 = operator new[](0x10uLL, 0x4B677844u, 64LL);
  if ( !v9 )
  {
    v4 = 1036LL;
    WdLogSingleEntry1(2LL, 1036LL);
    v5 = L"Failed to allocate DXG_SET_GUEST_DATA";
    goto LABEL_21;
  }
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(v6 + 32);
  *(_QWORD *)v9 = v8;
  v10 = *((_QWORD *)a1 + 11);
  v26 = (struct DXG_SET_GUEST_DATA *)v9;
  v11 = *(_BYTE *)(v10 + 424);
  if ( *(_BYTE *)(v6 + 28) )
  {
    if ( (v11 & 1) == 0 )
    {
      WdLogSingleEntry1(2LL, 1044LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CDD device must be created in CSRSS process context",
        1044LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_19:
      operator delete(v26);
      goto LABEL_22;
    }
    v12 = v10 + 216;
    v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL) + 2928LL);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    v14 = v13 + 48;
    *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13 + 48, 0LL);
    *(_QWORD *)(v13 + 56) = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v32,
      *(struct DXGADAPTER *const *)(*((_QWORD *)a1 + 10) + 16LL),
      0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL) >= 0
      && (*(_DWORD *)(*((_QWORD *)a1 + 12) + 424LL) & 0x800) == 0 )
    {
      v24 = *((_QWORD *)a1 + 10);
      v27 = 0LL;
      v15 = ADAPTER_RENDER::CreateDevice((DXGADAPTER **)v13, &v27, 0, 2, 0LL, 0, 0, 1, v24, (__int64)&v26, 0);
      if ( v15 >= 0 )
      {
        v16 = v27;
        DXGDEVICE::SetVirtualGpu(v27, *((struct DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
        v17 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
        hDevice = *((_DWORD *)v16 + 117);
        VmBusCompletePacket(v17, &hDevice, 4u);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
        *(_QWORD *)(v14 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
        KeLeaveCriticalRegion();
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_23;
      }
      v18 = v15;
      WdLogSingleEntry2(2LL, v15, 1083LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD device: 0x%I64x",
        v18,
        1083LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v12 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  if ( (v11 & 1) != 0 )
  {
    WdLogSingleEntry1(2LL, 1089LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CSRSS process context can only create CDD devices",
      1089LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  memset(&v31, 0, sizeof(v31));
  v19 = (struct DXGADAPTER **)*((_QWORD *)a1 + 10);
  v31.Flags = *(D3DKMT_CREATEDEVICEFLAGS *)(v6 + 24);
  v20 = DxgkCreateDeviceImpl(&v31, v19, &v26, 0);
  if ( v20 < 0 )
  {
    v22 = v20;
    WdLogSingleEntry2(2LL, v20, 1105LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create device: 0x%I64x",
      v22,
      1105LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  v21 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
  hDevice = v31.hDevice;
  VmBusCompletePacket(v21, &hDevice, 4u);
LABEL_23:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  return v3;
}
