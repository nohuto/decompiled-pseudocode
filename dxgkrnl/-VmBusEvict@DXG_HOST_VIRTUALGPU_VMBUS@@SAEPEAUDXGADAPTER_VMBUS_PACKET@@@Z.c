char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEvict(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  char v4; // di
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  int v7; // eax
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v9; // rbx
  char v11[8]; // [rsp+58h] [rbp+17h] BYREF
  DXGPUSHLOCK *v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+68h] [rbp+27h]
  _D3DKMT_EVICT v14; // [rsp+70h] [rbp+2Fh] BYREF
  UINT64 NumBytesToTrim; // [rsp+A8h] [rbp+67h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v13 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 4981LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4981LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_10:
    v3 = 0;
    goto LABEL_11;
  }
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v5 )
    goto LABEL_10;
  v6 = *(unsigned int *)(v5 + 32);
  if ( !(_DWORD)v6 || ((unsigned __int64)*((unsigned int *)a1 + 36) - 36) / v6 < 4 )
  {
    WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid packet size 0x%I64x",
      *((unsigned int *)a1 + 36),
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_10;
  }
  *(_QWORD *)(&v14.Flags + 1) = 0LL;
  HIDWORD(v14.NumBytesToTrim) = 0;
  v14.Flags.Value = *(_DWORD *)(v5 + 28);
  v14.AllocationList = (const D3DKMT_HANDLE *)(v5 + 36);
  v14.NumAllocations = *(_DWORD *)(v5 + 32);
  v14.hDevice = *(_DWORD *)(v5 + 24);
  v7 = DxgkEvictInternal(&v14, 0, 0LL);
  if ( v7 >= 0 )
  {
    v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
    NumBytesToTrim = v14.NumBytesToTrim;
    VmBusCompletePacket(v8, &NumBytesToTrim, 8u);
LABEL_11:
    v4 = v3;
    goto LABEL_12;
  }
  v9 = v7;
  WdLogSingleEntry1(2LL, v7);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DxgkEvictInternal failed: 0x%I64x", v9, 0LL, 0LL, 0LL, 0LL);
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v4;
}
