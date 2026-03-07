char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateHwQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  D3DKMT_HANDLE *v5; // rax
  __int64 v6; // r8
  D3DKMT_HANDLE *v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v12; // rbx
  _BYTE v13[8]; // [rsp+58h] [rbp-9h] BYREF
  DXGPUSHLOCK *v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  struct _D3DKMT_CREATEHWQUEUE v16; // [rsp+70h] [rbp+Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v15 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1177LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1177LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  v5 = (D3DKMT_HANDLE *)CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
  v7 = v5;
  if ( !v5 )
    goto LABEL_3;
  v8 = v5[16];
  v9 = *((unsigned int *)a1 + 36);
  if ( v9 - 71 < v8 )
  {
    WdLogSingleEntry2(2LL, v9, 1183LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size: 0x%I64x",
      *((unsigned int *)a1 + 36),
      1183LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_3;
  }
  v10 = v8 + 71;
  memset(&v16, 0, sizeof(v16));
  v16.Flags.Value = v5[15];
  v16.hHwContext = v5[14];
  if ( v5[16] )
  {
    v16.pPrivateDriverData = v5 + 17;
    v16.PrivateDriverDataSize = v5[16];
  }
  v11 = DxgkCreateHwQueueInternal(&v16, 0, v6);
  v7[6] = v11;
  if ( v11 < 0 )
  {
    v12 = v11;
    WdLogSingleEntry2(2LL, v11, 1217LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create HwQueue, returning: 0x%I64x",
      v12,
      1217LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v7[7] = v16.hHwQueue;
    v7[8] = v16.hHwQueueProgressFence;
    *((_QWORD *)v7 + 6) = v16.HwQueueProgressFenceGPUVirtualAddress;
    *((_QWORD *)v7 + 5) = v16.HwQueueProgressFenceCPUVirtualAddress;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v7, v10);
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
