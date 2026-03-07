char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rdx
  int v5; // eax
  struct VMBPACKETCOMPLETION__ *v6; // rcx
  _BYTE v8[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v10 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_PRESENTHISTORYTOKEN>((__int64)a1);
    if ( v4 )
    {
      v5 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
             *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
             *(_DWORD *)(v4 + 24),
             *(_QWORD *)(v4 + 56),
             *(_QWORD *)(v4 + 32),
             *(_QWORD *)(v4 + 40),
             0LL,
             *(_QWORD *)(v4 + 48),
             *(_DWORD *)(v4 + 64),
             0,
             0LL,
             0xFFFFFFFF);
      v6 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v11 = v5;
      VmBusCompletePacket(v6, &v11, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3742LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3742LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return v3;
}
