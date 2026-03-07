char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetContextSchedulingPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int ContextInProcessSchedulingPriority; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  _BYTE v10[8]; // [rsp+50h] [rbp-20h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+10h] BYREF
  int v14; // [rsp+84h] [rbp+14h]
  __int64 v15; // [rsp+88h] [rbp+18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( v4 )
    {
      v15 = *(unsigned int *)(v4 + 24);
      if ( *(_BYTE *)(v4 + 28) )
        ContextInProcessSchedulingPriority = DxgkGetContextInProcessSchedulingPriority((__int64)&v15, v5, v6);
      else
        ContextInProcessSchedulingPriority = DxgkGetContextSchedulingPriority((__int64)&v15, v5, v6);
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v13 = ContextInProcessSchedulingPriority;
      v14 = HIDWORD(v15);
      VmBusCompletePacket(v8, &v13, 8u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3201LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3201LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
