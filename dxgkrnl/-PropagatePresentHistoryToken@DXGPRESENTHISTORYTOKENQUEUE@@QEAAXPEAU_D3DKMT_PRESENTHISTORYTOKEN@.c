/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C005B31C
 * Callers:
 *     ?VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESENTHISTORYTOKEN@@@Z @ 0x1C005C368 (-VmBusPropagatePresentHistoryToken@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUDXGKVMB_COMMAND_PROPAGATEPRESE.c)
 * Callees:
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C0029C48 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        __int64 a3,
        __int64 a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8)
{
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
    McTemplateK0ppqqxdqp_EtwWriteTransfer(
      (__int64)SpinLock,
      &EventPropagatePresentHistory,
      a3,
      SpinLock,
      a2,
      0,
      0,
      0LL,
      0,
      0,
      0LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    WdLogSingleEntry1(1LL, 3544LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0LL,
          2,
          -1,
          L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
          3544LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~1u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~2u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~4u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~8u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x10u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (32 * a8) | *((_BYTE *)SpinLock
                                                                               + *((unsigned int *)SpinLock + 2)
                                                                               + 16464) & 0xDF;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) |= 0x40u;
  v13 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v13;
  if ( v13 == *((_DWORD *)SpinLock + 3) )
  {
    WdLogSingleEntry1(1LL, 3562LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0LL,
          2,
          -1,
          L"m_PresentHistoryHead != m_PresentHistoryTail",
          3562LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
