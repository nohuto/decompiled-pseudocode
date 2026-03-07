char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-60h]
  _BYTE v14[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v16 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v5 = v4;
    if ( !v4 )
      goto LABEL_16;
    v6 = 4LL * *(unsigned int *)(v4 + 392);
    if ( v6 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(2LL, 5188LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid history buffer array", 5188LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v7 = *((unsigned int *)a1 + 36);
      if ( v7 - 408 >= (unsigned __int64)(unsigned int)v6 )
      {
        v8 = v7 - (unsigned int)v6 - 408;
        if ( v8 >= *(unsigned int *)(v5 + 320) )
        {
          *(_QWORD *)(v5 + 400) = v5 + 408;
          *(_QWORD *)(v5 + 312) = (unsigned int)v6 + v5 + 408;
          Current = DXGPROCESS::GetCurrent(v8);
          v11 = DxgkSubmitCommandInternal((const struct _D3DKMT_SUBMITCOMMAND *)(v5 + 24), Current, v10);
          v17 = v11;
          if ( v11 >= 0 )
          {
LABEL_15:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v17, 4u);
            v3 = 1;
            goto LABEL_16;
          }
LABEL_14:
          HandleAsyncCommandError((__int64 *)a1, v11, *(_DWORD *)(v5 + 52), 1);
          goto LABEL_15;
        }
        WdLogSingleEntry2(2LL, v7, 5200LL);
        v13 = 5200LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v13 = 0LL;
      }
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size 0x%I64x",
        *((unsigned int *)a1 + 36),
        v13,
        0LL,
        0LL,
        0LL);
    }
    v11 = -1073741811;
    v17 = -1073741811;
    goto LABEL_14;
  }
  WdLogSingleEntry1(2LL, 5179LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5179LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v3;
}
