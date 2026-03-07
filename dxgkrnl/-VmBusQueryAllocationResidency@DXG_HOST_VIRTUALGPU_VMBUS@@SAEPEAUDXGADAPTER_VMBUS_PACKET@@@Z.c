char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bp
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  int *v15; // rsi
  __int64 v16; // r8
  int AllocationResidency; // eax
  _BYTE v19[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v20; // [rsp+58h] [rbp-30h]
  int v21; // [rsp+60h] [rbp-28h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v20);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v21 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 3109LL;
    WdLogSingleEntry1(2LL, 3109LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_25:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  v7 = v6;
  if ( !v6 )
  {
LABEL_26:
    v3 = 0;
    goto LABEL_27;
  }
  v8 = *(_DWORD *)(v6 + 28);
  if ( v8 )
    v9 = 0LL;
  else
    v9 = *(unsigned int *)(v6 + 40);
  v10 = 4 * v9;
  if ( v10 > 0xFFFFFFFF )
  {
    v4 = 3116LL;
    WdLogSingleEntry1(2LL, 3116LL);
    goto LABEL_24;
  }
  if ( (unsigned int)v10 >= 0xFFFFFFC8 )
  {
    v4 = 3122LL;
    WdLogSingleEntry1(2LL, 3122LL);
    goto LABEL_24;
  }
  if ( (unsigned int)(v10 + 56) > *((_DWORD *)a1 + 36) )
  {
    v4 = 3127LL;
    WdLogSingleEntry1(2LL, 3127LL);
LABEL_24:
    v5 = L"Invalid packet size";
    goto LABEL_25;
  }
  v11 = 1LL;
  if ( !v8 )
    v11 = *(unsigned int *)(v7 + 40);
  v12 = 4 * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    v4 = 3136LL;
    WdLogSingleEntry1(2LL, 3136LL);
    goto LABEL_24;
  }
  v13 = v12 + 4;
  if ( (unsigned int)v12 >= 0xFFFFFFFC )
  {
    v4 = 3141LL;
    WdLogSingleEntry1(2LL, 3141LL);
    goto LABEL_24;
  }
  v15 = (int *)operator new[](v13, 0x4B677844u, 64LL);
  if ( !v15 )
  {
    v4 = 3148LL;
    WdLogSingleEntry1(2LL, 3148LL);
    v5 = L"Memory allocation failed";
    goto LABEL_25;
  }
  *(_QWORD *)(v7 + 32) = v7 + 56;
  *(_QWORD *)(v7 + 48) = v15 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v7 + 24, v14, v16);
  *v15 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    WdLogSingleEntry1(2LL, AllocationResidency);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkQueryAllocationResidency failed: 0x%I64x",
      *v15,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v15, v13);
  operator delete(v15);
LABEL_27:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return v3;
}
