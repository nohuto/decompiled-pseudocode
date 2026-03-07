char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetDeviceState(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  unsigned int v4; // r14d
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  _BYTE v9[8]; // [rsp+50h] [rbp-19h] BYREF
  DXGPUSHLOCK *v10; // [rsp+58h] [rbp-11h]
  int v11; // [rsp+60h] [rbp-9h]
  _OWORD v12[4]; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v13; // [rsp+D0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v10);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v11 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 608LL) + 392LL);
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    if ( !v5 )
      goto LABEL_11;
    memset(v12, 0, sizeof(v12));
    v12[0] = *(_OWORD *)(v5 + 24);
    v12[1] = *(_OWORD *)(v5 + 40);
    v12[2] = *(_OWORD *)(v5 + 56);
    *(_QWORD *)&v12[3] = *(_QWORD *)(v5 + 72);
    if ( v4 >= 0x20 && *(_DWORD *)(v5 + 28) == 4 && (*(_BYTE *)(v5 + 80) & 1) != 0 )
    {
      v6 = *(_DWORD *)(v5 + 32);
      v7 = *(unsigned int *)(v5 + 24);
      v13 = 0;
      DWORD2(v12[3]) = DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(v7, v6, &v13);
      if ( SDWORD2(v12[3]) < 0 )
      {
        WdLogSingleEntry1(2LL, 4371LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Fail to locate VidPnSourceId",
          4371LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_10;
      }
      DWORD2(v12[0]) = v13;
    }
    DWORD2(v12[3]) = DxgkGetDeviceState((__int64)v12);
LABEL_10:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v12, 0x40u);
    v3 = 1;
    goto LABEL_11;
  }
  WdLogSingleEntry1(2LL, 4349LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4349LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return v3;
}
