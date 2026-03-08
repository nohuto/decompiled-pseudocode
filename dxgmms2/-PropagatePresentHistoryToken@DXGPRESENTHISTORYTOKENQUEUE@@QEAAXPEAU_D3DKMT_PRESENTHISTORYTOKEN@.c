/*
 * XREFs of ?PropagatePresentHistoryToken@DXGPRESENTHISTORYTOKENQUEUE@@QEAAXPEAU_D3DKMT_PRESENTHISTORYTOKEN@@_N111111PEAX@Z @ 0x1C0016A10
 * Callers:
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001665C (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqxdqp_EtwWriteTransfer @ 0x1C0038008 (McTemplateK0ppqqxdqp_EtwWriteTransfer.c)
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
  int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  if ( bTracingEnabled && Microsoft_Windows_DxgKrnlEnableBits < 0 )
    McTemplateK0ppqqxdqp_EtwWriteTransfer((_DWORD)SpinLock, (_DWORD)a2, a3, (_DWORD)SpinLock, (char)a2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  if ( *((_DWORD *)SpinLock + 2) >= 0x800u )
  {
    WdLogSingleEntry1(1LL, 3544LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
      3544LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SpinLock[*((unsigned int *)SpinLock + 2) + 10] = (KSPIN_LOCK)a2;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = a3 | *((_BYTE *)SpinLock
                                                                        + *((unsigned int *)SpinLock + 2)
                                                                        + 16464) & 0xFE;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (2 * a4) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFD;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (4 * a5) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xFB;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (8 * a6) | *((_BYTE *)SpinLock
                                                                              + *((unsigned int *)SpinLock + 2)
                                                                              + 16464) & 0xF7;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) = (16 * a7) | *((_BYTE *)SpinLock
                                                                               + *((unsigned int *)SpinLock + 2)
                                                                               + 16464) & 0xEF;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x20u;
  *((_BYTE *)SpinLock + *((unsigned int *)SpinLock + 2) + 16464) &= ~0x40u;
  v11 = ((unsigned __int16)*((_DWORD *)SpinLock + 2) + 1) & 0x7FF;
  *((_DWORD *)SpinLock + 2) = v11;
  if ( v11 == *((_DWORD *)SpinLock + 3) )
  {
    WdLogSingleEntry1(1LL, 3562LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_PresentHistoryHead != m_PresentHistoryTail",
      3562LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeSetEvent((PRKEVENT)SpinLock[9], 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
