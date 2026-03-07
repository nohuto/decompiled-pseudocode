char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAdapterInfo(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  char v4; // r15
  __int64 v5; // r14
  _DWORD *v6; // rdi
  unsigned __int64 v7; // rcx
  UINT v8; // r12d
  __int64 v9; // rax
  int v10; // eax
  UINT PrivateDriverDataSize; // r8d
  void *pPrivateDriverData; // rdx
  struct _D3DKMT_QUERYADAPTERINFO v14; // [rsp+50h] [rbp-30h] BYREF
  char v15[8]; // [rsp+68h] [rbp-18h] BYREF
  DXGPUSHLOCK *v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+78h] [rbp-8h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v17 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = 0;
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
    if ( !v5 )
      goto LABEL_20;
    memset(&v14, 0, sizeof(v14));
    v6 = 0LL;
    v14.Type = *(_DWORD *)(v5 + 24);
    v7 = *(unsigned int *)(v5 + 28);
    v8 = v7 + 4;
    if ( (_DWORD)v7 )
    {
      if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 32 < v7 || (unsigned int)v7 > 0x20000 )
      {
        WdLogSingleEntry1(2LL, (unsigned int)v7);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid OutputBufferSize",
          *(unsigned int *)(v5 + 28),
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_19:
        v3 = v4;
        goto LABEL_20;
      }
      v14.PrivateDriverDataSize = *(_DWORD *)(v5 + 28);
      v9 = operator new[](v8, 0x4B677844u, 64LL);
      v6 = (_DWORD *)v9;
      if ( !v9 )
      {
        WdLogSingleEntry1(6LL, 4803LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate pPrivateDriverDate",
          4803LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_19;
      }
      v14.pPrivateDriverData = (void *)(v9 + 4);
      memmove((void *)(v9 + 4), (const void *)(v5 + 32), *(unsigned int *)(v5 + 28));
    }
    v10 = DxgkQueryAdapterInfoImpl(&v14, 0, *(struct DXGADAPTER **)(*((_QWORD *)a1 + 10) + 16LL));
    if ( *((_DWORD *)a1 + 38) < 0x27u )
    {
      if ( v10 < 0 )
        goto LABEL_17;
      PrivateDriverDataSize = v14.PrivateDriverDataSize;
      pPrivateDriverData = v14.pPrivateDriverData;
    }
    else
    {
      *v6 = v10;
      PrivateDriverDataSize = v8;
      pPrivateDriverData = v6;
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), pPrivateDriverData, PrivateDriverDataSize);
    v4 = 1;
LABEL_17:
    if ( v6 )
      operator delete(v6);
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, 4779LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4779LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_20:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
