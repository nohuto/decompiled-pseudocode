_QWORD *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r8
  KIRQL v12; // bp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  int v24; // r15d
  __int64 v25; // rax
  int *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  __int64 v41; // r9
  __int64 v42; // r10
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx

  v3 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 812660273;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
    LODWORD(v8) = *(unsigned __int16 *)(a2 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      43,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 16LL;
      *(_QWORD *)(v14 + 24) = v11;
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 24) = v15;
    }
  }
  v19 = (__int64 *)(a2 + 456);
  v20 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v20;
  v21 = a2 + 32 * (v20 + 43);
  *(_DWORD *)v21 = 16;
  *(_DWORD *)(v21 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v21 + 8) = -1;
  *(_QWORD *)(v21 + 12) = 0LL;
  *(_QWORD *)(v21 + 20) = 0LL;
  *(_DWORD *)(v21 + 28) = 0;
  v22 = *(unsigned int *)(a2 + 12);
  v23 = *(_QWORD **)(a2 + 456);
  v24 = v22 - 3;
  if ( v23 == (_QWORD *)(a2 + 456) )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    switch ( v24 )
    {
      case 0:
      case 11:
        v51 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 3;
        *(_DWORD *)(v51 + a2 + 1384) = 3;
        v52 = *(unsigned __int16 *)(a2 + 4);
        v53 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v54 = *(_QWORD *)(a1 + 64);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
            *(_DWORD *)v55 = 757952880;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)(v55 + 16) = v53;
            *(_QWORD *)(v55 + 24) = v52;
          }
        }
        v56 = *(_DWORD *)(a2 + 12);
        v57 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v57 + a2 + 1384) = v56;
        goto LABEL_51;
      case 5:
      case 7:
        v58 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v58 + a2 + 1384) = 8;
        break;
      case 9:
      case 14:
        break;
      case 10:
        v59 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v59 + a2 + 1384) = 12;
        break;
      default:
        v60 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v60 + a2 + 1384) = 19;
        break;
    }
LABEL_55:
    v49 = 0LL;
LABEL_56:
    UsbhUnlockPcqWithTag(a1, a2, v12, v49);
  }
  else
  {
    switch ( (int)v22 )
    {
      case 3:
      case 8:
      case 10:
      case 14:
        v3 = *(_QWORD **)(a2 + 456);
        if ( (__int64 *)v23[1] != v19 )
          goto LABEL_44;
        v25 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_44;
        *v19 = v25;
        v26 = (int *)(v23 - 1);
        *(_QWORD *)(v25 + 8) = v19;
        if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (*v26 & 1) != 0 )
        {
          UsbhRemoveQueuedSuspend(a1, a2, v22, v16);
          UsbhiSignalSuspendEvent(a1, a2);
          v27 = *v19;
          if ( *(__int64 **)(*v19 + 8) != v19 )
LABEL_44:
            __fastfail(3u);
          *v3 = v27;
          v3[1] = v19;
          *(_QWORD *)(v27 + 8) = v3;
          *v19 = (__int64)v3;
          v3 = 0LL;
          v28 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_BYTE *)(a2 + 2839) = 1;
          *(_DWORD *)(a2 + 12) = 14;
          *(_DWORD *)(v28 + a2 + 1384) = 14;
        }
        else
        {
          if ( (_DWORD)v22 != 3 )
          {
            if ( (((_DWORD)v22 - 8) & 0xFFFFFFFD) == 0 )
            {
              v29 = 32LL * *(unsigned int *)(a2 + 2400);
              *(_DWORD *)(a2 + 12) = 8;
              *(_DWORD *)(v29 + a2 + 1384) = 8;
              goto LABEL_29;
            }
            if ( (_DWORD)v22 != 14 )
            {
              v26 = (int *)(v23 - 1);
              goto LABEL_29;
            }
          }
          v30 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v30 + a2 + 1384) = 3;
        }
LABEL_29:
        v31 = *v26;
        v32 = *(unsigned __int16 *)(a2 + 4);
        v33 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v34 = *(_QWORD *)(a1 + 64);
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
            *(_DWORD *)v35 = 757952880;
            *(_QWORD *)(v35 + 8) = 0LL;
            *(_QWORD *)(v35 + 16) = v33;
            *(_QWORD *)(v35 + 24) = v32;
          }
        }
        v36 = *(_DWORD *)(a2 + 12);
        v37 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v37 + a2 + 8) = v36;
        if ( v31 )
          *(_DWORD *)(v37 + a2 + 12) = v31;
        break;
      case 12:
      case 13:
        v3 = *(_QWORD **)(a2 + 456);
        if ( (__int64 *)v23[1] != v19 )
          goto LABEL_44;
        v38 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_44;
        *v19 = v38;
        *(_QWORD *)(v38 + 8) = v19;
        v39 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(32 * v39 + a2 + 1384) = 12;
        v40 = *((_DWORD *)v23 - 2);
        v41 = *(unsigned __int16 *)(a2 + 4);
        v42 = *(int *)(a2 + 12);
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
        v45 = *(_DWORD *)(a2 + 12);
        v46 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v46 + a2 + 8) = v45;
        if ( v40 )
          *(_DWORD *)(v46 + a2 + 12) = v40;
        break;
      case 17:
        v3 = *(_QWORD **)(a2 + 456);
        if ( (__int64 *)v23[1] != v19 )
          goto LABEL_44;
        v47 = *v23;
        if ( *(_QWORD **)(*v23 + 8LL) != v23 )
          goto LABEL_44;
        *v19 = v47;
        *(_QWORD *)(v47 + 8) = v19;
        v48 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 17;
        *(_DWORD *)(32 * v48 + a2 + 1384) = 17;
        v49 = *((unsigned int *)v23 - 2);
        goto LABEL_56;
      default:
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v50 + a2 + 1384) = 19;
        goto LABEL_55;
    }
LABEL_51:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
  }
  return v3;
}
