__int64 __fastcall UsbhCompletePdoWakeIrps(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rcx
  KIRQL v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r14

  v2 = 1;
  v3 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( !v4 )
LABEL_32:
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v4 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v4);
    if ( v2 > *(unsigned __int8 *)(v4 + 2938) )
      break;
    v5 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v6 = *(_QWORD *)(v4 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
      *(_DWORD *)v6 = 1329877100;
      *(_QWORD *)(v6 + 16) = v2;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 24) = 1885630295LL;
    }
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 16) = v2;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
    if ( !v2 )
      goto LABEL_25;
    v10 = *(_QWORD *)(a1 + 64);
    if ( !v10 )
      goto LABEL_32;
    if ( *(_DWORD *)v10 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v10);
    if ( v2 <= *(unsigned __int8 *)(v10 + 2938) && (v11 = *(_QWORD *)(v10 + 3056)) != 0 )
    {
      v12 = 2928LL * v2 + v11 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1044672615;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v2;
        *(_QWORD *)(v11 + 24) = v12;
      }
      if ( v12 )
      {
        v5 = *(_QWORD *)(v12 + 392);
        if ( v5 )
          v5 = UsbhRefPdo(v11, v5, 0LL, 1885630295LL);
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
      if ( v5 )
      {
        v14 = PdoExt(v5);
        if ( (*(_DWORD *)(v14 + 1420) & 0x2000) != 0
          && (unsigned __int8)UsbhCompletePdoWakeIrp(a1, v5, 0LL)
          && (unsigned int)++v3 > 1 )
        {
          UsbhException(a1, 0, 97, 0, 0, 0, 0, usbfile_fdopwr_c, 3765, 0);
        }
        *(_DWORD *)(v14 + 1420) &= ~0x2000u;
        UsbhUnlatchPdo(a1, v5, 0LL, 1885630295LL);
      }
    }
    else
    {
LABEL_25:
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v7);
    }
    ++v2;
  }
  result = FdoExt(a1);
  *(_DWORD *)(result + 2560) &= ~0x4000000u;
  return result;
}
