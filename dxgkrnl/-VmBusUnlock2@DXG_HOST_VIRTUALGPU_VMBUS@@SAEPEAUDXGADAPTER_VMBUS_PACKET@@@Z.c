char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusUnlock2(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  _DWORD v10[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _BYTE v12[8]; // [rsp+60h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v14 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
    if ( v4 )
    {
      if ( *(_BYTE *)(v4 + 32) )
      {
        v10[0] = *(_DWORD *)(v4 + 24);
        v11 = v4 + 28;
        v10[1] = 1;
        v7 = DxgkUnlock((__int64)v10, v5, v6);
      }
      else
      {
        v7 = DxgkUnlock2((unsigned int *)(v4 + 24));
      }
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v15 = v7;
      VmBusCompletePacket(v8, &v15, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 2075LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v3;
}
