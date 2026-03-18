/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x1C0015F80
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002DFC0 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00347B8 (UsbhRemoveQueuedSuspend.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0035C0C (UsbhiSignalSuspendEvent.c)
 */

_QWORD *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r8
  KIRQL v12; // r11
  unsigned __int16 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 *v22; // r14
  _QWORD *v23; // r15
  int v24; // r13d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  KIRQL v35; // dl
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  int v40; // ecx
  int v41; // edx
  __int64 v42; // r10
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // r8d
  __int64 v50; // r10
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  KIRQL v65; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
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
  v65 = v10;
  v13 = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
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
      *(_QWORD *)(v15 + 16) = 16LL;
      *(_QWORD *)(v15 + 24) = v11;
      v13 = *(_WORD *)(a2 + 4);
    }
  }
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
      *(_QWORD *)(v18 + 24) = v13;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 16;
  v21 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v20 + 12) = 0LL;
  *(_QWORD *)(v20 + 20) = 0LL;
  *(_DWORD *)(v20 + 28) = 0;
  v22 = (__int64 *)(a2 + 456);
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = -1;
  v23 = *(_QWORD **)(a2 + 456);
  v24 = *(_DWORD *)(a2 + 12);
  if ( v23 == (_QWORD *)(a2 + 456) )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    if ( v24 == 3 )
    {
LABEL_40:
      v47 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v47 + a2 + 1384) = 3;
      v48 = *(int *)(a2 + 12);
      v49 = *(_DWORD *)(a2 + 12);
      v50 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 757952880;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = v48;
          *(_QWORD *)(v52 + 24) = v50;
          v49 = *(_DWORD *)(a2 + 12);
        }
      }
      v35 = v65;
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v53 + a2 + 1384) = v49;
      goto LABEL_25;
    }
    switch ( v24 )
    {
      case 8:
      case 10:
        v63 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v63 + a2 + 1384) = 8;
        break;
      case 12:
      case 17:
        break;
      case 13:
        v62 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v62 + a2 + 1384) = 12;
        break;
      case 14:
        goto LABEL_40;
      default:
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v64 + a2 + 1384) = 19;
        break;
    }
    v55 = v65;
    goto LABEL_71;
  }
  if ( v24 != 12 )
  {
    switch ( v24 )
    {
      case 3:
      case 8:
      case 10:
        goto LABEL_75;
      case 13:
        goto LABEL_17;
      case 14:
LABEL_75:
        if ( (__int64 *)v23[1] == v22 )
        {
          v37 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) == v23 )
          {
            *v22 = v37;
            v6 = v23;
            *(_QWORD *)(v37 + 8) = v22;
            if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (*(_DWORD *)(v23 - 1) & 1) != 0 )
            {
              UsbhRemoveQueuedSuspend(a1, a2);
              UsbhiSignalSuspendEvent(a1, a2);
              v60 = *v22;
              if ( *(__int64 **)(*v22 + 8) != v22 )
                break;
              v12 = v65;
              *v23 = v60;
              v23[1] = v22;
              *(_QWORD *)(v60 + 8) = v23;
              *v22 = (__int64)v23;
              v6 = 0LL;
              v61 = 32LL * *(unsigned int *)(a2 + 2400);
              *(_BYTE *)(a2 + 2839) = 1;
              *(_DWORD *)(a2 + 12) = 14;
              *(_DWORD *)(v61 + a2 + 1384) = 14;
            }
            else if ( v24 != 3 && (v24 == 8 || v24 == 10) )
            {
              v54 = 32LL * *(unsigned int *)(a2 + 2400);
              *(_DWORD *)(a2 + 12) = 8;
              *(_DWORD *)(v54 + a2 + 1384) = 8;
            }
            else
            {
              v38 = 32LL * *(unsigned int *)(a2 + 2400);
              *(_DWORD *)(a2 + 12) = 3;
              *(_DWORD *)(v38 + a2 + 1384) = 3;
            }
            v39 = *(int *)(a2 + 12);
            v40 = *(_DWORD *)(a2 + 12);
            v41 = *((_DWORD *)v23 - 2);
            v42 = *(unsigned __int16 *)(a2 + 4);
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
                *(_QWORD *)(v44 + 16) = v39;
                *(_QWORD *)(v44 + 24) = v42;
                v40 = *(_DWORD *)(a2 + 12);
              }
            }
            v45 = *(unsigned int *)(a2 + 2400) + 43LL;
            *(_DWORD *)(a2 + 448) = 0;
            v46 = 32 * v45;
            *(_DWORD *)(v46 + a2 + 8) = v40;
            if ( v41 )
              *(_DWORD *)(v46 + a2 + 12) = v41;
            v35 = v12;
            goto LABEL_25;
          }
        }
        break;
      case 17:
        v6 = *(_QWORD **)(a2 + 456);
        if ( (__int64 *)v23[1] == v22 )
        {
          v57 = *v23;
          if ( *(_QWORD **)(*v23 + 8LL) == v23 )
          {
            *v22 = v57;
            v55 = v12;
            *(_QWORD *)(v57 + 8) = v22;
            v58 = *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(32 * v58 + a2 + 1384) = 17;
            v59 = *((unsigned int *)v23 - 2);
LABEL_72:
            UsbhUnlockPcqWithTag(a1, a2, v55, v59);
            return v6;
          }
        }
        break;
      default:
        v55 = v12;
        v56 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v56 + a2 + 1384) = 19;
LABEL_71:
        v59 = 0LL;
        goto LABEL_72;
    }
LABEL_65:
    __fastfail(3u);
  }
LABEL_17:
  v6 = *(_QWORD **)(a2 + 456);
  if ( (__int64 *)v23[1] != v22 )
    goto LABEL_65;
  v25 = *v23;
  if ( *(_QWORD **)(*v23 + 8LL) != v23 )
    goto LABEL_65;
  *v22 = v25;
  *(_QWORD *)(v25 + 8) = v22;
  v26 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 12;
  *(_DWORD *)(32 * v26 + a2 + 1384) = 12;
  v27 = *(int *)(a2 + 12);
  v28 = *(_DWORD *)(a2 + 12);
  v29 = *((_DWORD *)v23 - 2);
  v30 = *(unsigned __int16 *)(a2 + 4);
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
      *(_QWORD *)(v32 + 16) = v27;
      *(_QWORD *)(v32 + 24) = v30;
      v28 = *(_DWORD *)(a2 + 12);
    }
  }
  v33 = *(unsigned int *)(a2 + 2400) + 43LL;
  *(_DWORD *)(a2 + 448) = 0;
  v34 = 32 * v33;
  *(_DWORD *)(v34 + a2 + 8) = v28;
  if ( v29 )
    *(_DWORD *)(v34 + a2 + 12) = v29;
  v35 = v12;
LABEL_25:
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v35);
  return v6;
}
