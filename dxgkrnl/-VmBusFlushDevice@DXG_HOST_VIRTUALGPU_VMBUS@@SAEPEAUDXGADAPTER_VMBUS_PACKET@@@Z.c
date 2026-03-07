char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushDevice(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD **v6; // r8
  unsigned int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rax
  const wchar_t *v10; // r9
  int v11; // ecx
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v17; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v18; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v20[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  _BYTE v23[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v25[88]; // [rsp+D8h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v21);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v22 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3247LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3247LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_23;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v6 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v16 = -1073741811;
  v7 = *(_DWORD *)(v4 + 24);
  v17 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v7, v6, &v17);
  if ( v17 )
  {
    v11 = *(_DWORD *)(v5 + 28);
    if ( (unsigned int)(v11 - 1) <= 6 )
    {
      if ( v11 == 4 )
      {
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v17, 0, v8, 0);
        v12 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
        v16 = v12;
        if ( v12 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v17, 4u, 0xFFFFFFFD, 0);
        }
        else
        {
          WdLogSingleEntry1(2LL, v12);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Device was removed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
      }
      else
      {
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19, v17);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v23, (__int64)v17, 0, v13, 0);
        v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v23, 0LL);
        v16 = v14;
        if ( v14 >= 0 )
        {
          DXGDEVICE::FlushScheduler(v17, *(_DWORD *)(v5 + 28), 0xFFFFFFFD, 0);
        }
        else
        {
          WdLogSingleEntry1(2LL, v14);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Device was removed: 0x%I64x", v16, 0LL, 0LL, 0LL, 0LL);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        if ( v19[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
      }
      goto LABEL_20;
    }
    WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
    v9 = *(int *)(v5 + 28);
    v10 = L"Invalid device flush reason: 0x%I64x";
  }
  else
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
    v9 = *(unsigned int *)(v5 + 24);
    v10 = L"Invalid device handle: 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
LABEL_20:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
  if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
LABEL_23:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v3;
}
