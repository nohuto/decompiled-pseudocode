/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C0005C60
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetResumePending @ 0x1C000200C (UsbhSetResumePending.c)
 *     UsbhDecHubBusy @ 0x1C0003DB0 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0007050 (UsbhIncHubBusy.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C0011240 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C003518C (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035294 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036604 (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036644 (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rdx
  _QWORD *v6; // r15
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  KIRQL v33; // al
  KIRQL v34; // bl
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rcx
  struct _KEVENT *v50; // rbx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  volatile int Lock; // eax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // r8
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  KSPIN_LOCK *v63; // rbx
  KIRQL v64; // di
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  __int64 Signalling; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  int v81; // edi
  __int64 v82; // rax
  __int64 v83; // r9
  int v84; // r8d
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 Timeout; // [rsp+20h] [rbp-48h]
  __int64 Timeouta; // [rsp+20h] [rbp-48h]
  __int64 Timeoutb; // [rsp+20h] [rbp-48h]
  __int64 v90; // [rsp+88h] [rbp+20h] BYREF

  v90 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
LABEL_89:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
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
      *(_QWORD *)(v11 + 16) = 3LL;
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
  *(_DWORD *)v17 = 3;
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
      *(_DWORD *)v21 = 812659551;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
    }
  }
  switch ( (int)v18 )
  {
    case 1:
      v59 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v60 = *(_QWORD *)(a1 + 64);
        if ( v60 )
        {
          v61 = *(_QWORD *)(v60 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v60 + 880)) & *(_DWORD *)(v60 + 884));
          *(_DWORD *)v61 = 862991199;
          *(_QWORD *)(v61 + 8) = 0LL;
          *(_QWORD *)(v61 + 16) = v18;
          *(_QWORD *)(v61 + 24) = v59;
        }
      }
      v62 = *(_QWORD *)(a1 + 64);
      if ( !v62 )
        goto LABEL_89;
      if ( *(_DWORD *)v62 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v63 = (KSPIN_LOCK *)(v62 + 4944);
      v64 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v62 + 4944));
      v65 = *(unsigned __int16 *)(a2 + 4);
      v66 = *(int *)(a2 + 696);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v67 = *(_QWORD *)(a1 + 64);
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
          *(_DWORD *)v68 = 1397909875;
          *(_QWORD *)(v68 + 8) = 0LL;
          *(_QWORD *)(v68 + 16) = v66;
          *(_QWORD *)(v68 + 24) = v65;
        }
      }
      if ( *(_DWORD *)(a2 + 696) == 3 )
      {
        Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        KeReleaseSpinLock(v63, v64);
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      }
      else
      {
        KeReleaseSpinLock(v63, v64);
      }
      v69 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v69 + a2 + 1384) = 1;
      v70 = *(unsigned __int16 *)(a2 + 4);
      v71 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v72 = *(_QWORD *)(a1 + 64);
        if ( v72 )
        {
          v73 = *(_QWORD *)(v72 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
          *(_DWORD *)v73 = 757952880;
          *(_QWORD *)(v73 + 8) = 0LL;
          *(_QWORD *)(v73 + 16) = v71;
          *(_QWORD *)(v73 + 24) = v70;
        }
      }
      v74 = *(_DWORD *)(a2 + 12);
      v75 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v75 + a2 + 1384) = v74;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      v50 = *(struct _KEVENT **)(a1 + 64);
      if ( !v50 )
        goto LABEL_89;
      if ( v50->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v50[142].Header.Type = 1;
      KeWaitForSingleObject(&v50[139], Executive, 0, 0, 0LL);
      Signalling = v50[142].Header.Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v77 = *(_QWORD *)(a1 + 64);
        if ( v77 )
        {
          v78 = *(_QWORD *)(v77 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v77 + 880)) & *(_DWORD *)(v77 + 884));
          *(_DWORD *)v78 = 1667581000;
          *(_QWORD *)(v78 + 8) = 0LL;
          *(_QWORD *)(v78 + 16) = v6;
          *(_QWORD *)(v78 + 24) = Signalling;
        }
      }
      if ( !v50[142].Header.Signalling )
        return KeSetEvent(v50 + 139, 0, 0);
      if ( v6 == (_QWORD *)1936941672 )
        goto LABEL_38;
      if ( !v6 )
        return KeSetEvent(v50 + 139, 0, 0);
      v79 = v6[1];
      v56 = v6 + 1;
      if ( *(_QWORD **)(v79 + 8) != v6 + 1 )
        goto LABEL_71;
      v80 = (_QWORD *)v6[2];
      if ( (_QWORD *)*v80 != v56 )
        goto LABEL_71;
      *v80 = v79;
      *(_QWORD *)(v79 + 8) = v80;
      goto LABEL_44;
    case 2:
    case 3:
    case 4:
    case 14:
      UsbhiSignalResumeEvent(a1, a2);
      v84 = 1597206581;
      goto LABEL_87;
    case 5:
    case 12:
    case 13:
      Timeoutb = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v90) = 0x100000;
      Log(a1, 512, 1597206583, v18, Timeoutb);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL);
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v90, 0, 0LL);
      v83 = 0x100000LL;
      goto LABEL_80;
    case 6:
      v26 = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v90) = 0x100000;
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 846213983;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = v18;
          *(_QWORD *)(v28 + 24) = v26;
        }
      }
      v29 = *(_QWORD *)(a1 + 64);
      if ( !v29 )
        goto LABEL_89;
      if ( *(_DWORD *)v29 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v30 = *(unsigned __int16 *)(a2 + 4);
      v31 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v32 = 1986359664;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v31;
        *(_QWORD *)(v32 + 24) = v30;
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
      v33 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v29 + 4944));
      *(_BYTE *)(a2 + 2838) = 0;
      v34 = v33;
      *(_DWORD *)(a2 + 696) = 3;
      KeResetEvent((PRKEVENT)(a2 + 712));
      KeReleaseSpinLock((PKSPIN_LOCK)(v29 + 4944), v34);
      v35 = *(unsigned __int16 *)(a2 + 4);
      v36 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v37 = *(_QWORD *)(a1 + 64);
        if ( v37 )
        {
          v38 = *(_QWORD *)(v37 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
          *(_DWORD *)v38 = 1986359664;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = v36;
          *(_QWORD *)(v38 + 24) = v35;
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 10;
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v39 + a2 + 1384) = 1;
      v40 = *(unsigned __int16 *)(a2 + 4);
      v41 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v42 = *(_QWORD *)(a1 + 64);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
          *(_DWORD *)v43 = 1986359664;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = v41;
          *(_QWORD *)(v43 + 24) = v40;
        }
      }
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v90, 0, 0LL);
      v44 = *(unsigned __int16 *)(a2 + 4);
      v45 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v46 = *(_QWORD *)(a1 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 757952880;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = v45;
          *(_QWORD *)(v47 + 24) = v44;
        }
      }
      v48 = *(_DWORD *)(a2 + 12);
      v49 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v49 + a2 + 8) = v48;
      *(_DWORD *)(v49 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      v50 = *(struct _KEVENT **)(a1 + 64);
      if ( !v50 )
        goto LABEL_89;
      if ( v50->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v50[142].Header.Type = 1;
      KeWaitForSingleObject(&v50[139], Executive, 0, 0, 0LL);
      v51 = v50[142].Header.Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v52 = *(_QWORD *)(a1 + 64);
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
          *(_DWORD *)v53 = 1667581000;
          *(_QWORD *)(v53 + 8) = 0LL;
          *(_QWORD *)(v53 + 16) = v6;
          *(_QWORD *)(v53 + 24) = v51;
        }
      }
      if ( !v50[142].Header.Signalling )
        return KeSetEvent(v50 + 139, 0, 0);
      if ( v6 == (_QWORD *)1936941672 )
      {
LABEL_38:
        Lock = v50[130].Header.Lock;
        if ( Lock )
          v50[130].Header.LockNV = Lock - 1;
      }
      else if ( v6 )
      {
        v55 = v6[1];
        v56 = v6 + 1;
        if ( *(_QWORD **)(v55 + 8) != v6 + 1 || (v57 = (_QWORD *)v6[2], (_QWORD *)*v57 != v56) )
LABEL_71:
          __fastfail(3u);
        *v57 = v55;
        *(_QWORD *)(v55 + 8) = v57;
LABEL_44:
        v56[1] = v56;
        *v56 = v56;
        ExFreePoolWithTag(v6, 0);
      }
      return KeSetEvent(v50 + 139, 0, 0);
    case 7:
    case 11:
      Timeout = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v90) = 0x100000;
      Log(a1, 512, 1597206577, v18, Timeout);
      UsbhSetResumePending(a1, a2);
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v22 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v90, 0, 0LL);
      Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1400) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v23 = *(_DWORD *)(a2 + 12);
      v24 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v24 + a2 + 8) = v23;
      *(_DWORD *)(v24 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
      return UsbhDecHubBusy(a1, v25, v6);
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v18 == 9 )
      {
        v81 = 4;
      }
      else
      {
        v81 = 14;
        if ( (_DWORD)v18 == 8 )
          v81 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2, 0x1C0000000uLL, v13);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597206580, v81, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        Timeouta = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v90) = 0x100000;
        Log(a1, 512, 1597206610, v18, Timeouta);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v90, 0, 0LL);
      }
      v82 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v81;
      *(_DWORD *)(v82 + a2 + 1384) = v81;
      goto LABEL_79;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v84 = 1597206582;
      goto LABEL_87;
    case 18:
      v84 = 1597206584;
LABEL_87:
      Log(a1, 512, v84, v18, *(unsigned __int16 *)(a2 + 4));
      v85 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v18;
      *(_DWORD *)(v85 + a2 + 1384) = v18;
      goto LABEL_79;
    default:
      Log(a1, 512, 1597206616, v18, *(unsigned __int16 *)(a2 + 4));
      v86 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v86 + a2 + 1384) = 19;
LABEL_79:
      v83 = 0LL;
LABEL_80:
      UsbhUnlockPcqWithTag(a1, a2, v9, v83);
      return UsbhDecHubBusy(a1, v25, v6);
  }
}
