/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C0014530
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0013CC0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      a3,
      33,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v11 = 724267376;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 5LL;
      *(_QWORD *)(v11 + 24) = v8;
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 24) = v12;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 5;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 12) = 0LL;
  *(_QWORD *)(v17 + 20) = 0LL;
  *(_DWORD *)(v17 + 28) = 0;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 812660063;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
    }
  }
  switch ( (int)v18 )
  {
    case 3:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v22 + a2 + 1384) = 14;
      goto LABEL_41;
    case 4:
      v25 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 862991711;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v18;
          *(_QWORD *)(v27 + 24) = v25;
        }
      }
      v28 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v28 + a2 + 1384) = 3;
      v29 = *(unsigned __int16 *)(a2 + 4);
      v30 = *(int *)(a2 + 12);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 757952880;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = v30;
          *(_QWORD *)(v32 + 24) = v29;
        }
      }
      v33 = *(_DWORD *)(a2 + 12);
      v34 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v34 + a2 + 1384) = v33;
      goto LABEL_36;
    case 5:
      v37 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v38 = *(_QWORD *)(a1 + 64);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
          *(_DWORD *)v39 = 896546143;
          *(_QWORD *)(v39 + 8) = 0LL;
          *(_QWORD *)(v39 + 16) = v18;
          *(_QWORD *)(v39 + 24) = v37;
        }
      }
      v40 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v40 + a2 + 1384) = 12;
      v41 = *(unsigned __int16 *)(a2 + 4);
      v42 = *(int *)(a2 + 12);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v43 = *(_QWORD *)(a1 + 64);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
          *(_DWORD *)v44 = 757952880;
          *(_QWORD *)(v44 + 8) = 0LL;
          *(_QWORD *)(v44 + 16) = v42;
          *(_QWORD *)(v44 + 24) = v41;
        }
      }
      goto LABEL_35;
    case 6:
    case 20:
      KeResetEvent((PRKEVENT)(a2 + 496));
      goto LABEL_45;
    case 8:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v23 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v23 + a2 + 1384) = 10;
      goto LABEL_41;
    case 9:
      Log(a1, 512, 1597337652, v18, *(unsigned __int16 *)(a2 + 4));
      v35 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v35 + a2 + 1384) = 8;
      v36 = *(int *)(a2 + 12);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      Log(a1, 16, 1886465325, v36, *(unsigned __int16 *)(a2 + 4));
LABEL_35:
      v45 = *(_DWORD *)(a2 + 12);
      v46 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v46 + a2 + 1384) = v45;
LABEL_36:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      UsbhHubRunPortChangeQueue(a1, a2, a3, v47);
      return;
    case 10:
    case 14:
      Log(a1, 512, 1597337649, v18, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_41;
    case 12:
      Log(a1, 512, 1597337650, v18, *(unsigned __int16 *)(a2 + 4));
      v24 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v24 + a2 + 1384) = 13;
      goto LABEL_41;
    case 16:
      Log(a1, 512, 1597337655, v18, *(unsigned __int16 *)(a2 + 4));
      v49 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v49 + a2 + 1384) = 17;
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      UsbhUnlockPcqWithTag(a1, a2, v9, 0LL);
      UsbhHubRunPortChangeQueue(a1, a2, a3, v50);
      return;
    case 17:
      Log(a1, 512, 1597337654, v18, *(unsigned __int16 *)(a2 + 4));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v48 + a2 + 1384) = 17;
      goto LABEL_41;
    case 19:
      KeResetEvent((PRKEVENT)(a2 + 496));
      v51 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v51 + a2 + 1384) = 19;
LABEL_41:
      UsbhUnlockPcqWithTag(a1, a2, v9, 0LL);
      break;
    default:
      v52 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v53 = *(_QWORD *)(a1 + 64);
        if ( v53 )
        {
          v54 = *(_QWORD *)(v53 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
          *(_DWORD *)v54 = 946877791;
          *(_QWORD *)(v54 + 8) = 0LL;
          *(_QWORD *)(v54 + 16) = v18;
          *(_QWORD *)(v54 + 24) = v52;
        }
      }
LABEL_45:
      v55 = *(int *)(a2 + 12);
      v56 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v57 = *(_QWORD *)(a1 + 64);
        if ( v57 )
        {
          v58 = *(_QWORD *)(v57 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
          *(_DWORD *)v58 = 757952880;
          *(_QWORD *)(v58 + 24) = v56;
          *(_QWORD *)(v58 + 16) = v55;
          *(_QWORD *)(v58 + 8) = 0LL;
        }
      }
      v59 = *(_DWORD *)(a2 + 12);
      v60 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v60 + a2 + 1384) = v59;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      break;
  }
}
