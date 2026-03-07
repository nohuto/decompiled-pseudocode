char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  void *v11; // rsi
  struct _KTHREAD **v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // ecx
  __int64 RefCountedBuffer; // rax
  int v16; // eax
  int v17; // eax
  _BYTE v19[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h]
  unsigned int v24; // [rsp+D0h] [rbp+50h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v21 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v22 = -1073741637;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x18u )
      goto LABEL_30;
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
    v5 = v4;
    if ( !v4 )
      goto LABEL_31;
    v6 = (unsigned int)v22;
    if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 1160 < *(unsigned int *)(v4 + 1152) )
      v6 = 3221225485LL;
    v22 = v6;
    Current = DXGPROCESS::GetCurrent(v6);
    if ( v22 != -1073741637 )
    {
LABEL_30:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v22, 4u);
      v3 = 1;
      goto LABEL_31;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled() )
      goto LABEL_27;
    if ( !CIFlipPresentHistoryToken::IsIFlipSupported((const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 72)) )
      goto LABEL_27;
    v9 = *((_DWORD *)Current + 106);
    if ( (v9 & 0x100) == 0 || (v9 & 4) == 0 || !*(_DWORD *)(v5 + 68) || !*(_QWORD *)(v5 + 96) )
      goto LABEL_27;
    v10 = *((_QWORD *)a1 + 12);
    v24 = 0;
    v11 = 0LL;
    v12 = *(struct _KTHREAD ***)(v10 + 608);
    v13 = *(_DWORD *)(v5 + 96);
    *(_DWORD *)(v5 + 132) &= ~0x2000000u;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_QWORD *)(v5 + 136) = 0LL;
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_QWORD *)(v5 + 144) = 0LL;
    *(_DWORD *)(v5 + 892) = 0;
    *(_OWORD *)(v5 + 172) = 0LL;
    v14 = *(_DWORD *)(v5 + 1152);
    v23 = v13;
    if ( v14 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v14, v8, 64LL);
      v11 = (void *)RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *(_DWORD *)(RefCountedBuffer + 8) = *(_DWORD *)(v5 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *(_DWORD *)(RefCountedBuffer + 12) = 1;
        memmove((void *)(RefCountedBuffer + 16), (const void *)(v5 + 1160), *(unsigned int *)(v5 + 1152));
      }
      v13 = v23;
    }
    if ( *(_DWORD *)(v5 + 1152) && !v11 )
      goto LABEL_27;
    v16 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v12,
            v13,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 72),
            &v24);
    v22 = v16;
    if ( v16 >= 0 )
    {
      v17 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
              *(_DWORD *)(v5 + 24),
              *(_QWORD *)(v5 + 56),
              *(_QWORD *)(v5 + 32),
              *(_QWORD *)(v5 + 40),
              (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 72),
              *(_QWORD *)(v5 + 48),
              *(_DWORD *)(v5 + 64),
              *(_DWORD *)(v5 + 68),
              v11,
              v24);
      v22 = v17;
      if ( v17 >= 0 )
      {
LABEL_25:
        if ( !v11 )
          goto LABEL_28;
        CRefCountedBuffer::RefCountedBufferRelease(v11);
LABEL_27:
        v17 = v22;
LABEL_28:
        if ( v17 == -1073741637 )
          v22 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                  *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
                  *(_DWORD *)(v5 + 24),
                  *(_QWORD *)(v5 + 56),
                  *(_QWORD *)(v5 + 32),
                  *(_QWORD *)(v5 + 40),
                  0LL,
                  *(_QWORD *)(v5 + 48),
                  *(_DWORD *)(v5 + 64),
                  0,
                  0LL,
                  0xFFFFFFFF);
        goto LABEL_30;
      }
      WdLogSingleEntry1(2LL, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubmitPresentHistoryTokenFromVm failed",
        v22,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v5 + 72));
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v5 + 80), v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QuerySwapChainBindingStatusFromVm failed. BindId = 0x%I64x, Status = 0x%I64x",
        *(_QWORD *)(v5 + 80),
        v22,
        0LL,
        0LL,
        0LL);
    }
    v17 = -1073741637;
    v22 = -1073741637;
    goto LABEL_25;
  }
  WdLogSingleEntry1(2LL, 6071LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    6071LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_31:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v3;
}
