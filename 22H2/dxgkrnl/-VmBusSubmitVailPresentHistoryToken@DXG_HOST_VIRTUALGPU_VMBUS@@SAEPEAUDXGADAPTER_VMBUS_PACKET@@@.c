/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0250B60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DF24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     Feature_Vail_iFLIP__private_ReportDeviceUsage @ 0x1C00280F0 (Feature_Vail_iFLIP__private_ReportDeviceUsage.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040864 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C0040C9C (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00650C4 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C023B34C (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023B6F4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  struct DXGPROCESS *Current; // rsi
  __int64 v14; // r8
  bool v15; // cc
  __int64 v16; // rax
  volatile signed __int32 *v17; // rsi
  unsigned int v18; // r13d
  struct _KTHREAD **v19; // r12
  __int64 v20; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _BYTE v30[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v31; // [rsp+68h] [rbp-18h]
  int v32; // [rsp+70h] [rbp-10h]
  int v33; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+48h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v31);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v32 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v33 = -1073741637;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v3, v2) + 408) < 0x18u )
      goto LABEL_30;
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
    v9 = v7;
    if ( !v7 )
      goto LABEL_31;
    v10 = (unsigned int)v33;
    v11 = *((unsigned int *)a1 + 22) - 1160LL;
    if ( v11 < *(unsigned int *)(v7 + 1152) )
      v10 = 3221225485LL;
    v33 = v10;
    Current = DXGPROCESS::GetCurrent(v10, v11, 3221225485LL, v8);
    if ( v33 != -1073741637 )
    {
LABEL_30:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v33, 4u);
      v5 = 1;
      goto LABEL_31;
    }
    v15 = g_IsVailIFlipEnabled <= 0;
    if ( g_IsVailIFlipEnabled < 0 )
    {
      Feature_Vail_iFLIP__private_ReportDeviceUsage();
      _InterlockedCompareExchange(&g_IsVailIFlipEnabled, 0, -1);
      v15 = g_IsVailIFlipEnabled <= 0;
    }
    if ( v15
      || *(_DWORD *)(v9 + 72) != 2
      || (*((_BYTE *)Current + 347) & 0x20) == 0
      || !*((_BYTE *)Current + 346)
      || !*(_DWORD *)(v9 + 68)
      || !*(_QWORD *)(v9 + 96) )
    {
      goto LABEL_28;
    }
    v16 = *((_QWORD *)a1 + 7);
    v17 = 0LL;
    v18 = *(_DWORD *)(v9 + 96);
    v34 = 0;
    v19 = *(struct _KTHREAD ***)(v16 + 496);
    *(_DWORD *)(v9 + 132) &= ~0x2000000u;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_QWORD *)(v9 + 136) = 0LL;
    *(_QWORD *)(v9 + 120) = 0LL;
    *(_QWORD *)(v9 + 144) = 0LL;
    v20 = *(unsigned int *)(v9 + 1152);
    if ( (_DWORD)v20 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v20, v12, v14);
      v17 = (volatile signed __int32 *)RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *((_DWORD *)RefCountedBuffer + 2) = *(_DWORD *)(v9 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *((_DWORD *)RefCountedBuffer + 3) = 1;
        memmove((char *)RefCountedBuffer + 16, (const void *)(v9 + 1160), *(unsigned int *)(v9 + 1152));
      }
    }
    if ( *(_DWORD *)(v9 + 1152) && !v17 )
    {
LABEL_28:
      if ( v33 == -1073741637 )
        v33 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
                *(_DWORD *)(v9 + 24),
                *(_QWORD *)(v9 + 56),
                *(_QWORD *)(v9 + 32),
                *(_QWORD *)(v9 + 40),
                0LL,
                *(_QWORD *)(v9 + 48),
                *(_DWORD *)(v9 + 64),
                0,
                0LL,
                0xFFFFFFFF);
      goto LABEL_30;
    }
    v33 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v19,
            v18,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v9 + 72),
            &v34);
    if ( v33 >= 0 )
    {
      v33 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
              *(_DWORD *)(v9 + 24),
              *(_QWORD *)(v9 + 56),
              *(_QWORD *)(v9 + 32),
              *(_QWORD *)(v9 + 40),
              (void *)(v9 + 72),
              *(_QWORD *)(v9 + 48),
              *(_DWORD *)(v9 + 64),
              *(_DWORD *)(v9 + 68),
              v17,
              v34);
      if ( v33 >= 0 )
        goto LABEL_26;
      v27 = WdLogNewEntry5_WdError(v26, v25);
      *(_QWORD *)(v27 + 24) = v33;
      WdLogEvent5_WdError(v27);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v9 + 72), v28);
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v24 + 24) = v33;
      WdLogEvent5_WdError(v24);
    }
    v33 = -1073741637;
LABEL_26:
    if ( v17 )
      CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v17);
    goto LABEL_28;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 5435LL;
  WdLogEvent5_WdError(v6);
LABEL_31:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  return v5;
}
