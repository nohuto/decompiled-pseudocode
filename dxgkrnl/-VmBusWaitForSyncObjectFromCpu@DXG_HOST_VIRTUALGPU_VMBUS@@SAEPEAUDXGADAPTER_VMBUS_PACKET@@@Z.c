char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromCpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 Pool2; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  _BYTE v15[8]; // [rsp+50h] [rbp-9h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-1h]
  int v17; // [rsp+60h] [rbp+7h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v18; // [rsp+68h] [rbp+Fh] BYREF
  int v19; // [rsp+C0h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v17 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
    v5 = v4;
    if ( v4 )
    {
      v19 = -1073741811;
      memset(&v18, 0, sizeof(v18));
      Pool2 = 0LL;
      v7 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v7 && (v8 = (unsigned int)v7, v9 = 4 * v7, v9 <= 0xFFFFFFFF) && (v10 = 8 * v8, v10 <= 0xFFFFFFFF) )
      {
        v11 = v9 + 56;
        if ( v11 < 0x38 )
        {
          WdLogSingleEntry1(3LL, 4129LL);
        }
        else
        {
          v12 = v11 + v10;
          if ( v12 < v11 )
          {
            WdLogSingleEntry1(3LL, 4134LL);
          }
          else if ( *((_DWORD *)a1 + 36) >= v12 )
          {
            if ( *(_QWORD *)(v5 + 40) )
            {
              Pool2 = ExAllocatePool2(64LL, 40LL, 1265072196LL);
              if ( Pool2 )
              {
                v13 = *(_QWORD *)(v5 + 40);
                *(_QWORD *)Pool2 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 104LL) + 160LL;
                *(_QWORD *)(Pool2 + 8) = v13;
                *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(v5 + 48);
                *(_BYTE *)(Pool2 + 19) = (*(_DWORD *)(*((_QWORD *)a1 + 11) + 424LL) & 0x10) != 0;
                DXG_SIGNAL_GUEST_CPU_EVENT::AcquireReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
                v18.ObjectHandleArray = (const D3DKMT_HANDLE *)(v5 + 56);
                v18.FenceValueArray = (const UINT64 *)(v5 + 4 * (*(unsigned int *)(v5 + 28) + 14LL));
                v18.Flags.Value = *(_DWORD *)(v5 + 32);
                v18.hDevice = *(_DWORD *)(v5 + 24);
                v18.ObjectCount = *(_DWORD *)(v5 + 28);
                v18.hAsyncEvent = (HANDLE)Pool2;
                v19 = DxgkWaitForSynchronizationObjectFromCpuInternal(&v18, 0, (struct DXGDEVICE *)Pool2, 0LL);
              }
              else
              {
                WdLogSingleEntry1(6LL, 4155LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262145,
                  -1,
                  (__int64)L"Failed to allocate memory for DXG_SIGNAL_GUEST_CPU_EVENT",
                  4155LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v19 = -1073741801;
              }
            }
            else
            {
              WdLogSingleEntry1(3LL, 4148LL);
            }
          }
          else
          {
            WdLogSingleEntry1(3LL, 4139LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, 4124LL);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v19, 4u);
      if ( v19 < 0 )
      {
        if ( Pool2 )
          DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference((struct DXG_SIGNAL_GUEST_CPU_EVENT *)Pool2);
        WdLogSingleEntry1(3LL, 4188LL);
      }
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 4109LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4109LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
