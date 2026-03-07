void __fastcall Usbh_PCE_Enable_Action(__int64 a1, __int64 a2)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  KIRQL v44; // bp
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // r10d
  __int64 v50; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
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
      *(_QWORD *)(v9 + 16) = 1LL;
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
  *(_DWORD *)v15 = 1;
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
      *(_DWORD *)v19 = 812658992;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  switch ( (int)v16 )
  {
    case 1:
    case 18:
      KeResetEvent((PRKEVENT)(a2 + 472));
      v21 = *(unsigned __int16 *)(a2 + 4);
      v22 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v23 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v23 = 1986359664;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v22;
          *(_QWORD *)(v23 + 24) = v21;
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 10;
      if ( *(_QWORD *)(a2 + 456) == a2 + 456 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dq(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            14,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            a2);
        v24 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          v25 = *(_QWORD *)(a1 + 64);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 1414360677;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = 0LL;
            *(_QWORD *)(v26 + 24) = v24;
          }
        }
        v27 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 2;
        *(_DWORD *)(v27 + a2 + 1384) = 2;
        v28 = *(unsigned __int16 *)(a2 + 4);
        v29 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v30 = *(_QWORD *)(a1 + 64);
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
            *(_DWORD *)v31 = 757952880;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 16) = v29;
            *(_QWORD *)(v31 + 24) = v28;
          }
        }
        v32 = *(_DWORD *)(a2 + 12);
        v33 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v33 + a2 + 1384) = v32;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dq(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            v21,
            15,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            a2);
        v34 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 0x200) != 0 )
        {
          v35 = *(_QWORD *)(a1 + 64);
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
            *(_DWORD *)v36 = 1196650085;
            *(_QWORD *)(v36 + 8) = 0LL;
            *(_QWORD *)(v36 + 16) = 0LL;
            *(_QWORD *)(v36 + 24) = v34;
          }
        }
        v37 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v37 + a2 + 1384) = 4;
        v38 = *(unsigned __int16 *)(a2 + 4);
        v39 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v40 = *(_QWORD *)(a1 + 64);
          if ( v40 )
          {
            v41 = *(_QWORD *)(v40 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
            *(_DWORD *)v41 = 757952880;
            *(_QWORD *)(v41 + 8) = 0LL;
            *(_QWORD *)(v41 + 16) = v39;
            *(_QWORD *)(v41 + 24) = v38;
          }
        }
        v42 = *(_DWORD *)(a2 + 12);
        v43 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v43 + a2 + 1384) = v42;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
        v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          *(_DWORD *)(a2 + 2412) = 1;
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v45 = *(_QWORD *)(a2 + 16);
            if ( v45 )
            {
              v46 = *(_QWORD *)(v45 + 64);
              if ( v46 )
              {
                v47 = *(_QWORD *)(v46 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
                *(_DWORD *)v47 = 1464029265;
                *(_QWORD *)(v47 + 8) = 0LL;
                *(_QWORD *)(v47 + 16) = a2;
                *(_QWORD *)(v47 + 24) = 0LL;
              }
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(
            *(PIO_WORKITEM *)(a2 + 2456),
            (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
            DelayedWorkQueue,
            (PVOID)a2);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v44);
      }
      break;
    case 2:
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 14:
    case 15:
    case 16:
    case 17:
    case 20:
      Log(a1, 512, 808546354, v16, *(unsigned __int16 *)(a2 + 4));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v49;
      *(_DWORD *)(v48 + a2 + 1384) = v49;
      goto LABEL_46;
    default:
      Log(a1, 512, 808546392, v16, *(unsigned __int16 *)(a2 + 4));
      v50 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v50 + a2 + 1384) = 19;
LABEL_46:
      UsbhUnlockPcqWithTag(a1, a2, v7, 0LL);
      break;
  }
}
