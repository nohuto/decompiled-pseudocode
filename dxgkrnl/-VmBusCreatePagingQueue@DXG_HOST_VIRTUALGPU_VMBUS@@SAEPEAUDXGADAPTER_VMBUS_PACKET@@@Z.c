char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rbx
  int PagingQueueInternal; // eax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  _BYTE v12[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  _DWORD v15[2]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v13);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v14 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 4386LL;
    WdLogSingleEntry1(2LL, 4386LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v8 = (_DWORD *)v6;
  if ( v6 )
  {
    PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v6 + 24), 0, v7);
    if ( PagingQueueInternal < 0 )
    {
      v4 = PagingQueueInternal;
      WdLogSingleEntry1(2LL, PagingQueueInternal);
      v5 = L"DxgkCreatePagingQueueInternal failed: 0x%I64x";
      goto LABEL_7;
    }
    v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    v15[0] = v8[8];
    v15[1] = v8[9];
    v17 = (unsigned int)v8[10];
    v16 = *((_QWORD *)v8 + 5);
    VmBusCompletePacket(v10, v15, 0x18u);
    v3 = 1;
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v3;
}
