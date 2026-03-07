char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusReclaimAllocations(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  __int128 *v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r8
  unsigned int v8; // r12d
  unsigned __int64 v9; // rdx
  int v10; // eax
  _D3DKMT_RECLAIMALLOCATIONS2 v12; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v13[8]; // [rsp+78h] [rbp-1h] BYREF
  DXGPUSHLOCK *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  __int128 v16; // [rsp+90h] [rbp+17h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v15 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( v4 )
    {
      v5 = &v16;
      LODWORD(v6) = -1073741811;
      v16 = 0LL;
      v7 = *(unsigned int *)(v4 + 32);
      v8 = 16;
      memset(&v12, 0, sizeof(v12));
      if ( (_DWORD)v7
        && (v9 = ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) % v7,
            ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v7 >= 4) )
      {
        if ( !*(_BYTE *)(v4 + 37)
          || (unsigned int)v7 <= 1
          || (v8 = 4 * v7 + 12, (v5 = (__int128 *)operator new[](v8, 0x4B677844u, 64LL)) != 0LL) )
        {
          *(_QWORD *)&v12.hPagingQueue = *(_QWORD *)(v4 + 28);
          if ( *(_BYTE *)(v4 + 36) )
            v12.pResources = (D3DKMT_HANDLE *)(v4 + 40);
          else
            v12.HandleList = (const D3DKMT_HANDLE *)(v4 + 40);
          if ( *(_BYTE *)(v4 + 37) )
            v12.pDiscarded = (BOOL *)v5 + 3;
          v10 = DxgkReclaimAllocations2(&v12, v9, v7);
          v6 = v10;
          if ( v10 < 0 )
          {
            WdLogSingleEntry1(2LL, v10);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DxgkReclaimAllocations failed: 0x%I64x",
              v6,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(6LL, 1644LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate memory for reclaim results",
            1644LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v6) = -1073741801;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 1634LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size", 1634LL, 0LL, 0LL, 0LL, 0LL);
      }
      *(_QWORD *)v5 = v12.PagingFenceValue;
      *((_DWORD *)v5 + 2) = v6;
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v5, v8);
      if ( v5 != &v16 )
        operator delete(v5);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 1621LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1621LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v3;
}
