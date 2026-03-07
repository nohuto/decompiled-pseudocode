char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r8
  int v8; // ecx
  unsigned int **v10; // r14
  _BYTE v11[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+60h] [rbp-28h]
  _BYTE v14[24]; // [rsp+68h] [rbp-20h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v13 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 4067LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4067LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_14;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, *((struct DXGPROCESS **)a1 + 12));
  v5 = *((_QWORD *)a1 + 12);
  v6 = (*(_DWORD *)(v4 + 24) >> 6) & 0xFFFFFF;
  if ( v6 < *(_DWORD *)(v5 + 296) )
  {
    v7 = *(_QWORD *)(v5 + 280);
    if ( ((*(_DWORD *)(v4 + 24) >> 25) & 0x60) == (*(_BYTE *)(v7 + 16LL * v6 + 8) & 0x60)
      && (*(_DWORD *)(v7 + 16LL * v6 + 8) & 0x2000) == 0 )
    {
      v8 = *(_DWORD *)(v7 + 16LL * v6 + 8) & 0x1F;
      if ( v8 )
      {
        if ( v8 == 13 )
        {
          v10 = *(unsigned int ***)(v7 + 16LL * v6);
          if ( v10 && (*(_DWORD *)v10 == 11 || *(_DWORD *)v10 == 8) )
          {
            DXGSHAREDVMOBJECT::AddReference((DXGSHAREDVMOBJECT *)v10);
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
            v15 = DxgkSignalSynchronizationObjectFromGpuByReference(v10[1], *(_QWORD *)(v4 + 32), *(_DWORD *)(v4 + 28));
            DXGSHAREDVMOBJECT::ReleaseReference((DXGSHAREDVMOBJECT *)v10);
            goto LABEL_11;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid shared object handle: 0x%I64x",
    *(unsigned int *)(v4 + 24),
    0LL,
    0LL,
    0LL,
    0LL);
  v15 = -1073741811;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
LABEL_11:
  if ( v15 < 0 )
    HandleAsyncCommandError((__int64 *)a1, v15, *(_DWORD *)(v4 + 28), 1);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v15, 4u);
  v3 = 1;
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
