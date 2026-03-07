char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetQueuedLimit(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int128 *v7; // rbx
  int v8; // eax
  struct VMBPACKETCOMPLETION__ *v9; // rcx
  _BYTE v11[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+68h] [rbp-30h] BYREF
  int v15; // [rsp+78h] [rbp-20h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v13 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v4 )
    {
      v14 = 0uLL;
      v7 = (__int128 *)(v4 + 24);
      v8 = DxgkSetQueuedLimit(v4 + 24, v5, v6);
      v9 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v15 = v8;
      v14 = *v7;
      VmBusCompletePacket(v9, &v14, 0x14u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 4335LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4335LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
