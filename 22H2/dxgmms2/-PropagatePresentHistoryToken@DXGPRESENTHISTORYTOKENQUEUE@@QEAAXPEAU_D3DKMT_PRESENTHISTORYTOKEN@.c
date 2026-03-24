/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N11111@Z @ 0x1C0015340
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0015168 (VidSchiPropagatePresentHistoryToken.c)
 * Callees:
 *     McTemplateK0ppqqx_EtwWriteTransfer @ 0x1C002D460 (McTemplateK0ppqqx_EtwWriteTransfer.c)
 */

void __fastcall DXGPRESENTHISTORYTOKENQUEUE::PropagatePresentHistoryToken(
        PKSPIN_LOCK SpinLock,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0ppqqx_EtwWriteTransfer((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v14 = *((unsigned int *)SpinLock + 2);
  if ( (unsigned int)v14 >= 0x800 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11, v13);
    *(_QWORD *)(v18 + 24) = 3473LL;
    WdLogEvent5_WdAssertion(v18);
    v14 = *((unsigned int *)SpinLock + 2);
  }
  SpinLock[v14 + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = a3 | *((_BYTE *)SpinLock
                                                                        + *((unsigned int *)SpinLock + 2)
                                                                        + 16464) & 0xFE;
  v16 = *((unsigned int *)SpinLock + 2);
  *((_BYTE *)SpinLock + v16 + 16464) = (2 * a4) | *((_BYTE *)SpinLock + v16 + 16464) & 0xFD;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (4 * a5) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFB;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (8 * a6) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xF7;
  v15 = *((unsigned int *)SpinLock + 2);
  LOBYTE(v16) = (16 * a7) | *((_BYTE *)SpinLock + v15 + 16464) & 0xEF;
  *((_BYTE *)SpinLock + v15 + 16464) = v16;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x20u;
  v17 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v17;
  if ( v17 == *((_DWORD *)SpinLock + 3) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v16, v15, v13);
    *(_QWORD *)(v19 + 24) = 3490LL;
    WdLogEvent5_WdAssertion(v19);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
