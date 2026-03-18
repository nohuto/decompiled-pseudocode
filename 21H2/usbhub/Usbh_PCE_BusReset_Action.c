/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1C001B420
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhLogSignalResumeEvent @ 0x1C001B190 (UsbhLogSignalResumeEvent.c)
 *     UsbhFlushPortChangeQueue @ 0x1C001D610 (UsbhFlushPortChangeQueue.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  KIRQL v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  KSPIN_LOCK *v24; // rbp
  KIRQL v25; // al
  __int64 v26; // r9
  KIRQL v27; // r14
  int v28; // edx
  __int64 v29; // r10
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // r10d
  int v44; // r8d
  __int64 v45; // rax
  int v46; // r10d
  __int64 v47; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    goto LABEL_44;
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = v6;
  v8 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 9LL;
      *(_QWORD *)(v10 + 24) = v6;
      v7 = *(_WORD *)(a2 + 4);
    }
  }
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
      *(_QWORD *)(v13 + 24) = v7;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v11;
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
  if ( (_DWORD)v16 == 6 )
  {
    v20 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = 862992688;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = 6LL;
        *(_QWORD *)(v22 + 24) = v20;
      }
    }
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      if ( *(_DWORD *)v23 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v24 = (KSPIN_LOCK *)(v23 + 4944);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4944));
      v26 = *(int *)(a2 + 696);
      v27 = v25;
      v28 = *(_DWORD *)(a2 + 696);
      v29 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v30 = *(_QWORD *)(a1 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1397909875;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = v26;
          *(_QWORD *)(v31 + 24) = v29;
          v28 = *(_DWORD *)(a2 + 696);
        }
      }
      if ( v28 == 3 )
      {
        Log(a1, 16, 1936282232, 3LL, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        KeReleaseSpinLock(v24, v27);
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      }
      else
      {
        KeReleaseSpinLock(v24, v25);
      }
      v32 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v32 + a2 + 1384) = 1;
      v33 = *(int *)(a2 + 12);
      v34 = *(_DWORD *)(a2 + 12);
      v35 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 64);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
          *(_DWORD *)v37 = 757952880;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = v33;
          *(_QWORD *)(v37 + 24) = v35;
          v34 = *(_DWORD *)(a2 + 12);
        }
      }
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v38 + a2 + 1384) = v34;
LABEL_28:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
      return;
    }
LABEL_44:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  if ( (_DWORD)v16 == 11 )
  {
LABEL_30:
    Log(a1, 512, 809070641, v16, *(unsigned __int16 *)(a2 + 4));
    if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
      UsbhSetPcqEventStatus(a1, a2, 1LL);
    v39 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v39 + a2 + 1384) = 1;
    Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v40 = *(_DWORD *)(a2 + 12);
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v41 + a2 + 1384) = v40;
    goto LABEL_28;
  }
  switch ( (int)v16 )
  {
    case 1:
      Log(a1, 512, 809070642, v16, *(unsigned __int16 *)(a2 + 4));
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v43;
      *(_DWORD *)(v42 + a2 + 1384) = v43;
      UsbhFlushPortChangeQueue(a1, a2);
      break;
    case 2:
    case 3:
    case 4:
    case 14:
      v44 = 809070644;
      goto LABEL_39;
    case 7:
      goto LABEL_30;
    case 15:
    case 16:
    case 17:
      v44 = 809070645;
LABEL_39:
      Log(a1, 512, v44, v16, *(unsigned __int16 *)(a2 + 4));
      v45 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v46;
      *(_DWORD *)(v45 + a2 + 1384) = v46;
      break;
    default:
      Log(a1, 512, 809070680, v16, *(unsigned __int16 *)(a2 + 4));
      v47 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v47 + a2 + 1384) = 19;
      break;
  }
  UsbhUnlockPcqWithTag(a1, a2, v8, 0LL);
}
