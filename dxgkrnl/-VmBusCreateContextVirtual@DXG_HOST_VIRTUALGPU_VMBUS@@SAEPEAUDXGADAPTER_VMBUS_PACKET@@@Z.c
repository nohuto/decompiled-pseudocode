char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  char v4; // di
  __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r15d
  int v12; // eax
  __int64 v13; // rbx
  char v14[8]; // [rsp+58h] [rbp+7h] BYREF
  DXGPUSHLOCK *v15; // [rsp+60h] [rbp+Fh]
  int v16; // [rsp+68h] [rbp+17h]
  _D3DKMT_CREATECONTEXTVIRTUAL v17; // [rsp+70h] [rbp+1Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v16 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1121LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1121LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_3:
    v3 = 0;
    goto LABEL_4;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v8 = (_DWORD *)v6;
  if ( !v6 )
    goto LABEL_3;
  v9 = *(unsigned int *)(v6 + 48);
  v10 = *((unsigned int *)a1 + 36);
  if ( v10 - 55 < v9 )
  {
    WdLogSingleEntry2(2LL, v10, 1127LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size: 0x%I64x",
      *((unsigned int *)a1 + 36),
      1127LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_3;
  }
  v11 = v9 + 55;
  v17.Flags.Value = *(_DWORD *)(v6 + 40);
  v17.hDevice = *(_DWORD *)(v6 + 28);
  v17.ClientHint = *(_DWORD *)(v6 + 44);
  v17.NodeOrdinal = *(_DWORD *)(v6 + 32);
  v17.EngineAffinity = *(_DWORD *)(v6 + 36);
  v17.pPrivateDriverData = 0LL;
  v17.PrivateDriverDataSize = 0;
  *(_QWORD *)&v17.hContext = 0LL;
  if ( (_DWORD)v9 )
  {
    v17.PrivateDriverDataSize = v9;
    v17.pPrivateDriverData = (void *)(v6 + 52);
  }
  *(_DWORD *)(v6 + 24) = 0;
  v12 = DxgkCreateContextVirtualImpl(&v17, 0, v7);
  if ( v12 < 0 )
  {
    v13 = v12;
    WdLogSingleEntry2(2LL, v12, 1154LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create context: 0x%I64x",
      v13,
      1154LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_5;
  }
  v8[6] = v17.hContext;
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v8, v11);
LABEL_4:
  v4 = v3;
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return v4;
}
