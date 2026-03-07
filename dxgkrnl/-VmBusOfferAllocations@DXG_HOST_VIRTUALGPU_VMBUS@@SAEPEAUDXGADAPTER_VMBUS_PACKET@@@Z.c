char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOfferAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  _BYTE v8[8]; // [rsp+50h] [rbp+17h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+60h] [rbp+27h]
  _D3DKMT_OFFERALLOCATIONS v11; // [rsp+68h] [rbp+2Fh] BYREF
  int v12; // [rsp+A0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v9);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v10 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( v4 )
    {
      v12 = -1073741811;
      v5 = *(unsigned int *)(v4 + 28);
      *((_DWORD *)&v11.Flags + 1) = 0;
      memset(&v11.hDevice + 1, 0, 20);
      if ( (_DWORD)v5
        && (v6 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) % v5,
            ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 >= 4) )
      {
        v11.hDevice = *(_DWORD *)(v4 + 24);
        v11.Flags.Value = *(_DWORD *)(v4 + 36);
        v11.Priority = *(_DWORD *)(v4 + 32);
        v11.NumAllocations = v5;
        if ( *(_BYTE *)(v4 + 40) )
          v11.pResources = (D3DKMT_HANDLE *)(v4 + 44);
        else
          v11.HandleList = (const D3DKMT_HANDLE *)(v4 + 44);
        v12 = DxgkOfferAllocations(&v11, v6, v4);
      }
      else
      {
        WdLogSingleEntry1(2LL, 1593LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 1593LL, 0LL, 0LL, 0LL, 0LL);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v12, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 1583LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1583LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return v3;
}
