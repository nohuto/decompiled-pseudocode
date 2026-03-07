char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  UINT v9; // eax
  D3DKMT_HANDLE v10; // r8d
  int v11; // r15d
  __int64 v12; // r12
  unsigned int v13; // r9d
  int v14; // eax
  unsigned int v15; // r15d
  struct _KTHREAD **v16; // r8
  __int64 v17; // r14
  __int64 v18; // r9
  int v19; // eax
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_GETALLOCATIONPRIORITY v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+80h] [rbp-80h] BYREF
  char v24[8]; // [rsp+90h] [rbp-70h] BYREF
  DXGPUSHLOCK *v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  char v27[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v28[64]; // [rsp+B8h] [rbp-48h] BYREF
  char v29[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v25);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v26 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 1741LL;
    WdLogSingleEntry1(2LL, 1741LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_5;
  }
  v7 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v8 = v7;
  if ( !v7 )
    goto LABEL_4;
  v9 = *(_DWORD *)(v7 + 32);
  if ( v9 > 0x20000 )
    goto LABEL_4;
  v10 = *(_DWORD *)(v8 + 28);
  v11 = 4;
  v12 = *(unsigned int *)(v8 + 24);
  v13 = 0;
  v22.AllocationCount = v9;
  v14 = 4 * v9;
  *(&v22.AllocationCount + 1) = 0;
  v22.hDevice = v12;
  if ( !v10 )
    v13 = v14;
  v22.hResource = v10;
  if ( !v10 )
    v11 = v14;
  v15 = v11 + 4;
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 40 < v13 + v15 )
  {
    v4 = 1759LL;
    WdLogSingleEntry1(2LL, 1759LL);
    v5 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v10 )
    v22.phAllocationList = 0LL;
  else
    v22.phAllocationList = (const D3DKMT_HANDLE *)(v8 + 40);
  v16 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v17 = v8 + v13;
  v20 = 0LL;
  v22.pPriorities = (UINT *)(v17 + 44);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v12, v16, &v20);
  if ( v20 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23, v20);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, (__int64)v20, 0, v18, 0);
    v19 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v27, 0LL);
    if ( v19 >= 0 )
    {
      *(_DWORD *)(v17 + 40) = DXGDEVICE::GetAllocationPriority(v20, &v22, 0);
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), (void *)(v17 + 40), v15);
    }
    else
    {
      WdLogSingleEntry2(3LL, v20, v19);
      v3 = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    if ( v23[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v23);
  }
  else
  {
    WdLogSingleEntry2(2LL, v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v3 = 0;
  }
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v3;
}
