/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1C001B150
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhFlushPortChangeQueue @ 0x1C00041C0 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLogSignalResumeEvent @ 0x1C001B7B8 (UsbhLogSignalResumeEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  KSPIN_LOCK *v29; // r14
  KIRQL v30; // r15
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // r8d
  __int64 v43; // rax
  int v44; // r10d
  __int64 v45; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
LABEL_40:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 724267376;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 9LL;
      *(_QWORD *)(v9 + 24) = v6;
    }
  }
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 24) = v10;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 9;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812661040;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  switch ( (int)v16 )
  {
    case 1:
      Log(a1, 512, 809070642, v16, *(unsigned __int16 *)(a2 + 4));
      v23 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v24;
      *(_DWORD *)(v23 + a2 + 1384) = v24;
      UsbhFlushPortChangeQueue(a1, a2);
      goto LABEL_39;
    case 2:
    case 3:
    case 4:
    case 14:
      v42 = 809070644;
      goto LABEL_37;
    case 6:
      v25 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 862992688;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v16;
          *(_QWORD *)(v27 + 24) = v25;
        }
      }
      v28 = *(_QWORD *)(a1 + 64);
      if ( !v28 )
        goto LABEL_40;
      if ( *(_DWORD *)v28 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v29 = (KSPIN_LOCK *)(v28 + 4944);
      v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 4944));
      v31 = *(unsigned __int16 *)(a2 + 4);
      v32 = *(int *)(a2 + 696);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v33 = *(_QWORD *)(a1 + 64);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
          *(_DWORD *)v34 = 1397909875;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = v32;
          *(_QWORD *)(v34 + 24) = v31;
        }
      }
      if ( *(_DWORD *)(a2 + 696) == 3 )
      {
        Log(a1, 16, 1936282232, 3LL, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        KeReleaseSpinLock(v29, v30);
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      }
      else
      {
        KeReleaseSpinLock(v29, v30);
      }
      v35 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v35 + a2 + 1384) = 1;
      v36 = *(unsigned __int16 *)(a2 + 4);
      v37 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 64);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
          *(_DWORD *)v39 = 757952880;
          *(_QWORD *)(v39 + 8) = 0LL;
          *(_QWORD *)(v39 + 16) = v37;
          *(_QWORD *)(v39 + 24) = v36;
        }
      }
      v40 = *(_DWORD *)(a2 + 12);
      v41 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v41 + a2 + 1384) = v40;
LABEL_33:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
      return;
    case 7:
    case 11:
      Log(a1, 512, 809070641, v16, *(unsigned __int16 *)(a2 + 4));
      if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      v20 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v20 + a2 + 1384) = 1;
      Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v21 = *(_DWORD *)(a2 + 12);
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v22 + a2 + 1384) = v21;
      goto LABEL_33;
    case 15:
    case 16:
    case 17:
      v42 = 809070645;
LABEL_37:
      Log(a1, 512, v42, v16, *(unsigned __int16 *)(a2 + 4));
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v44;
      *(_DWORD *)(v43 + a2 + 1384) = v44;
      goto LABEL_39;
    default:
      Log(a1, 512, 809070680, v16, *(unsigned __int16 *)(a2 + 4));
      v45 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v45 + a2 + 1384) = 19;
LABEL_39:
      UsbhUnlockPcqWithTag(a1, a2, v7, 0LL);
      return;
  }
}
