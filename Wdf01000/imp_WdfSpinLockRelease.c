void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  __int64 Offset; // rcx
  unsigned __int64 v4; // rbx
  _FX_DRIVER_GLOBALS *v5; // rsi
  __int16 v6; // cx
  struct _KTHREAD **v7; // rdx
  struct _KTHREAD *_a3; // r8
  struct _KTHREAD *_a2; // rdx
  unsigned __int64 v10; // rdi
  const void *v11; // rax
  const void *v12; // rax
  FxSpinLock *pLock; // [rsp+58h] [rbp+10h] BYREF

  pLock = 0LL;
  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  LOWORD(Offset) = 0;
  v4 = ~SpinLock & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v4;
    v4 -= Offset;
  }
  if ( *(_WORD *)(v4 + 8) == 4132 )
  {
    pLock = (FxSpinLock *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v4 = (unsigned __int64)pLock;
  }
  v5 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( *(_BYTE *)(v4 + 121) )
  {
    WPP_IFR_SF_q(v5, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    v6 = *(_WORD *)(v4 + 10);
    if ( v6 != 128 )
    {
      v7 = (struct _KTHREAD **)(v4 + 128);
      if ( v4 != -128LL )
      {
        _a3 = *v7;
        if ( *v7 != KeGetCurrentThread() )
        {
          _a2 = KeGetCurrentThread();
          if ( _a3 )
          {
            v12 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v12 = 0LL;
            WPP_IFR_SF_qqq(v5, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v12, _a2, _a3);
            v10 = v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
          }
          else
          {
            v10 = (unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL;
            v11 = (const void *)((unsigned __int64)pLock ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v6 )
              v11 = 0LL;
            WPP_IFR_SF_qq(v5, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v11, _a2);
          }
          if ( !*(_WORD *)(v4 + 10) )
            v10 = 0LL;
          FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v4 + 16), WDF_INVALID_LOCK_OPERATION, v10, 1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(v4 + 136) + 16LL) = MEMORY[0xFFFFF78000000320]
                                                  - *(_QWORD *)(*(_QWORD *)(v4 + 136) + 8LL);
        *(_QWORD *)(v4 + 136) += 24LL;
        if ( *(_QWORD *)(v4 + 136) >= v4 + 384 )
          *(_QWORD *)(v4 + 136) = v4 + 144;
        *v7 = 0LL;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 112), *(_BYTE *)(v4 + 120));
  }
}
