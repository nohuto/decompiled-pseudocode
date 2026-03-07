__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDeviceState(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_GETDEVICESTATE *a4)
{
  unsigned int v8; // r14d
  __int64 v9; // rsi
  int v10; // ebx
  int HostProcess; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  unsigned int *v26; // [rsp+20h] [rbp-E0h]
  unsigned int *v27; // [rsp+28h] [rbp-D8h]
  unsigned int v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+90h] [rbp-70h]
  _OWORD v35[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v8 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 442);
  v33 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v34 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v33, this, 0x58u, 0LL, 0LL, 0LL);
  v9 = v33;
  if ( (_QWORD)v33 )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v9 + 12) = 0;
    *(_DWORD *)(v9 + 12) &= 0x1FFu;
    *(_DWORD *)(v9 + 8) = HostProcess;
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 16) = 28LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    v29[0] = 64;
    *(_OWORD *)(v9 + 24) = *(_OWORD *)&a4->hDevice;
    *(_OWORD *)(v9 + 40) = *(_OWORD *)(&a4->PresentQueueState + 1);
    *(_OWORD *)(v9 + 56) = *(_OWORD *)(&a4->PresentQueueState + 3);
    *(_QWORD *)(v9 + 72) = *((_QWORD *)&a4->PresentQueueState + 5);
    *(_DWORD *)(v9 + 24) = *((_DWORD *)a3 + 118);
    if ( v8 >= 0x20 && *(_DWORD *)(v9 + 28) == 4 )
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( (int)REMOTEMONITORMAPPING::FindMappingFromGuestVidPnSourceId(
                  (struct _KTHREAD **)Global + 38104,
                  *(_DWORD *)(v9 + 32),
                  (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)&v30) >= 0
        && v30 == *(_QWORD *)(*((_QWORD *)this + 9) + 4572LL) )
      {
        if ( v8 >= 0x23 )
        {
          if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 218) )
          {
            if ( *(_DWORD *)(v9 + 32) < 0x10u )
            {
              v13 = DXGGLOBAL::GetGlobal();
              v14 = 32LL * *(unsigned int *)(v9 + 32);
              v15 = *((_QWORD *)v13 + 218);
              do
              {
                _InterlockedExchange((volatile __int32 *)&v28, *(_DWORD *)(v14 + v15 + 8));
                v16 = v28;
                _InterlockedExchange64(&v32, *(_QWORD *)(v14 + v15 + 16));
                _InterlockedExchange((volatile __int32 *)&v28, *(_DWORD *)(v14 + v15 + 8));
              }
              while ( v28 != v16 );
              if ( v32 )
              {
                memset(v35, 0, sizeof(v35));
                v10 = 0;
                v20 = *(_OWORD *)(&a4->PresentQueueState + 1);
                v35[0] = *(_OWORD *)&a4->hDevice;
                v21 = *(_OWORD *)(&a4->PresentQueueState + 3);
                v35[1] = v20;
                *(_QWORD *)&v20 = *((_QWORD *)&a4->PresentQueueState + 5);
                *(_QWORD *)&v35[2] = __PAIR64__(DWORD1(v21), v28);
                *(_QWORD *)((char *)&v35[3] + 4) = DWORD1(v20);
                *((_QWORD *)&v35[2] + 1) = v32;
                v35[1] = 0uLL;
                LODWORD(v35[3]) = 0;
                goto LABEL_18;
              }
            }
          }
        }
        v22 = v31;
        *(_QWORD *)(v9 + 80) |= 1uLL;
        *(_DWORD *)(v9 + 32) = v22;
      }
    }
    v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v33, v35, v29);
    if ( v10 < 0 )
      goto LABEL_31;
    v10 = -1073741823;
    if ( v29[0] < 0x40 )
      goto LABEL_31;
    v10 = DWORD2(v35[3]);
LABEL_18:
    v23 = v35[1];
    *(_OWORD *)&a4->hDevice = v35[0];
    v24 = v35[2];
    *(_OWORD *)(&a4->PresentQueueState + 1) = v23;
    *(_QWORD *)&v23 = *(_QWORD *)&v35[3];
    *(_OWORD *)(&a4->PresentQueueState + 3) = v24;
    *((_QWORD *)&a4->PresentQueueState + 5) = v23;
    if ( v8 < 0x20 || *(_DWORD *)(v9 + 28) != 4 )
      goto LABEL_30;
    *(_QWORD *)v29 = 0LL;
    if ( v10 >= 0 )
    {
      if ( !*((_QWORD *)&v35[2] + 1) )
      {
LABEL_24:
        v18 = *((_QWORD *)&v35[1] + 1);
        if ( *((_QWORD *)&v35[1] + 1) )
        {
          v10 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v35[1] + 1), -1LL, v29);
          if ( v10 >= 0 )
            a4->PresentStateDWM.PresentStatsDWM.PresentQPCTime.QuadPart = *(_QWORD *)v29;
        }
        goto LABEL_27;
      }
      v10 = RtlConvertHostPerfCounterToPerfCounter(*((_QWORD *)&v35[2] + 1), -1LL, v29);
      if ( v10 >= 0 )
      {
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart = *(_QWORD *)v29;
        goto LABEL_24;
      }
    }
LABEL_27:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      LODWORD(v27) = a4->PresentState.PresentStats.SyncQPCTime.LowPart;
      LODWORD(v26) = v31;
      McTemplateK0xqqxx_EtwWriteTransfer(
        v18,
        v17,
        v19,
        v30,
        v26,
        v27,
        a4->PresentState.PresentStats.SyncGPUTime.QuadPart,
        *((_QWORD *)&v35[2] + 1));
    }
LABEL_30:
    if ( v10 >= 0 )
      goto LABEL_32;
LABEL_31:
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendGetDeviceState failed: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    a4->PresentState.VidPnSourceId = 4;
    v10 = 0;
    goto LABEL_32;
  }
  v10 = -1073741801;
LABEL_32:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v33);
  return (unsigned int)v10;
}
