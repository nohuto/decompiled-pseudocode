char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushHeapTransitions(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rbx
  char v3; // di
  __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v8; // [rsp+58h] [rbp-30h]
  char v9; // [rsp+60h] [rbp-28h]
  _BYTE v10[8]; // [rsp+68h] [rbp-20h] BYREF
  DXGPUSHLOCK *v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+78h] [rbp-10h]
  int v13; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v13 = 0;
    v4 = *(_QWORD *)(v2 + 16);
    v8 = v4;
    v9 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
    if ( *(_DWORD *)(v4 + 200) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 2928);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 760) + 8LL) + 1088LL))(*(_QWORD *)(v5 + 768));
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v13, 4u);
    if ( v9 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  }
  else
  {
    WdLogSingleEntry1(2LL, 5080LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      5080LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v3 = 0;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  return v3;
}
