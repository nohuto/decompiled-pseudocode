/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C0004220
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetResumePending @ 0x1C0001CB0 (UsbhSetResumePending.c)
 *     UsbhDecHubBusy @ 0x1C0003610 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0004060 (UsbhIncHubBusy.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000B870 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002EAB8 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C0035B1C (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C0035C24 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035D2C (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0036E88 (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036EC8 (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  _DWORD *v6; // rdx
  _QWORD *v7; // r15
  KIRQL v8; // al
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  KIRQL v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  KSPIN_LOCK *v27; // rdi
  KIRQL v28; // al
  __int64 v29; // r9
  KIRQL v30; // r13
  int v31; // r8d
  __int64 v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _KEVENT *v42; // rbx
  __int64 Signalling; // r8
  unsigned __int8 v44; // cl
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rcx
  KIRQL v58; // al
  KIRQL v59; // di
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // ecx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  unsigned __int8 v77; // cl
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  _QWORD *v81; // r8
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rdx
  __int64 v85; // rdx
  int v86; // esi
  __int64 v87; // rax
  __int64 v88; // r9
  int v89; // r8d
  __int64 v90; // rax
  __int64 v91; // rax
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-58h]
  __int64 Timeouta; // [rsp+20h] [rbp-58h]
  __int64 Timeoutb; // [rsp+20h] [rbp-58h]
  _QWORD v96[2]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v97; // [rsp+80h] [rbp+8h]

  v3 = 0;
  v96[0] = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_98;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v9;
  v97 = v8;
  v11 = v8;
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
      *(_QWORD *)(v13 + 16) = 3LL;
      *(_QWORD *)(v13 + 24) = v9;
      v10 = *(_WORD *)(a2 + 4);
    }
  }
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 24) = v10;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v14;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 3;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 812659551;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v19;
      *(_QWORD *)(v22 + 24) = v20;
    }
  }
  if ( (_DWORD)v19 == 1 )
  {
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 862991199;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 1LL;
        *(_QWORD *)(v25 + 24) = v23;
      }
    }
    v26 = *(_QWORD *)(a1 + 64);
    if ( v26 )
    {
      if ( *(_DWORD *)v26 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v27 = (KSPIN_LOCK *)(v26 + 4944);
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
      v29 = *(int *)(a2 + 696);
      v30 = v28;
      v31 = *(_DWORD *)(a2 + 696);
      v32 = *(unsigned __int16 *)(a2 + 4);
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
          *(_QWORD *)(v34 + 16) = v29;
          *(_QWORD *)(v34 + 24) = v32;
          v31 = *(_DWORD *)(a2 + 696);
        }
      }
      if ( v31 == 3 )
      {
        Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        v3 = 1;
      }
      KeReleaseSpinLock(v27, v30);
      if ( v3 )
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      v35 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v35 + a2 + 1384) = 1;
      v36 = *(int *)(a2 + 12);
      v37 = *(_DWORD *)(a2 + 12);
      v38 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v39 = *(_QWORD *)(a1 + 64);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
          *(_DWORD *)v40 = 757952880;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = v36;
          *(_QWORD *)(v40 + 24) = v38;
          v37 = *(_DWORD *)(a2 + 12);
        }
      }
      v41 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v41 + a2 + 1384) = v37;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v97);
      v42 = *(struct _KEVENT **)(a1 + 64);
      if ( v42 )
      {
        if ( v42->Header.LockNV != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        v42[142].Header.Type = 1;
        KeWaitForSingleObject(&v42[139], Executive, 0, 0, 0LL);
        Signalling = v42[142].Header.Signalling;
        v44 = v42[142].Header.Signalling;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          v45 = *(_QWORD *)(a1 + 64);
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
            *(_DWORD *)v46 = 1667581000;
            *(_QWORD *)(v46 + 8) = 0LL;
            *(_QWORD *)(v46 + 16) = v7;
            *(_QWORD *)(v46 + 24) = Signalling;
            v44 = v42[142].Header.Signalling;
          }
        }
        if ( !v44 )
          return KeSetEvent(v42 + 139, 0, 0);
        if ( v7 != (_QWORD *)1936941672 )
        {
          if ( !v7 )
            return KeSetEvent(v42 + 139, 0, 0);
          v47 = v7[1];
          v48 = v7 + 1;
          if ( *(_QWORD **)(v47 + 8) == v7 + 1 )
          {
            v49 = (_QWORD *)v7[2];
            if ( (_QWORD *)*v49 == v48 )
            {
              *v49 = v47;
              *(_QWORD *)(v47 + 8) = v49;
LABEL_40:
              v48[1] = v48;
              *v48 = v48;
              ExFreePoolWithTag(v7, 0);
              return KeSetEvent(v42 + 139, 0, 0);
            }
          }
          goto LABEL_97;
        }
        goto LABEL_93;
      }
    }
    goto LABEL_98;
  }
  if ( (_DWORD)v19 == 6 )
  {
    v51 = *(unsigned __int16 *)(a2 + 4);
    LODWORD(v96[0]) = 0x100000;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v52 = *(_QWORD *)(a1 + 64);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
        *(_DWORD *)v53 = 846213983;
        *(_QWORD *)(v53 + 8) = 0LL;
        *(_QWORD *)(v53 + 16) = 6LL;
        *(_QWORD *)(v53 + 24) = v51;
      }
    }
    v54 = *(_QWORD *)(a1 + 64);
    if ( v54 )
    {
      if ( *(_DWORD *)v54 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v55 = *(unsigned __int16 *)(a2 + 4);
      v56 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v57 = *(_QWORD *)(v54 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884));
        *(_DWORD *)v57 = 1986359664;
        *(_QWORD *)(v57 + 8) = 0LL;
        *(_QWORD *)(v57 + 16) = v56;
        *(_QWORD *)(v57 + 24) = v55;
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 4944));
      *(_BYTE *)(a2 + 2838) = 0;
      v59 = v58;
      *(_DWORD *)(a2 + 696) = 3;
      KeResetEvent((PRKEVENT)(a2 + 712));
      KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 4944), v59);
      v60 = *(unsigned __int16 *)(a2 + 4);
      v61 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v62 = *(_QWORD *)(a1 + 64);
        if ( v62 )
        {
          v63 = *(_QWORD *)(v62 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
          *(_DWORD *)v63 = 1986359664;
          *(_QWORD *)(v63 + 8) = 0LL;
          *(_QWORD *)(v63 + 16) = v61;
          *(_QWORD *)(v63 + 24) = v60;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v64 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v64 + a2 + 1384) = 1;
      v65 = *(unsigned __int16 *)(a2 + 4);
      v66 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v67 = *(_QWORD *)(a1 + 64);
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
          *(_DWORD *)v68 = 1986359664;
          *(_QWORD *)(v68 + 8) = 0LL;
          *(_QWORD *)(v68 + 16) = v66;
          *(_QWORD *)(v68 + 24) = v65;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v96, 0, 0LL);
      v69 = *(int *)(a2 + 12);
      v70 = *(_DWORD *)(a2 + 12);
      v71 = *(unsigned __int16 *)(a2 + 4);
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
          *(_QWORD *)(v73 + 16) = v69;
          *(_QWORD *)(v73 + 24) = v71;
          v70 = *(_DWORD *)(a2 + 12);
        }
      }
      v74 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      v75 = 32 * (v74 + 43);
      *(_DWORD *)(v75 + a2 + 8) = v70;
      *(_DWORD *)(v75 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
      v42 = *(struct _KEVENT **)(a1 + 64);
      if ( v42 )
      {
        if ( v42->Header.LockNV != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        v42[142].Header.Type = 1;
        KeWaitForSingleObject(&v42[139], Executive, 0, 0, 0LL);
        v76 = v42[142].Header.Signalling;
        v77 = v42[142].Header.Signalling;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          v78 = *(_QWORD *)(a1 + 64);
          if ( v78 )
          {
            v79 = *(_QWORD *)(v78 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v78 + 880)) & *(_DWORD *)(v78 + 884));
            *(_DWORD *)v79 = 1667581000;
            *(_QWORD *)(v79 + 8) = 0LL;
            *(_QWORD *)(v79 + 16) = v7;
            *(_QWORD *)(v79 + 24) = v76;
            v77 = v42[142].Header.Signalling;
          }
        }
        if ( !v77 )
          return KeSetEvent(v42 + 139, 0, 0);
        if ( v7 != (_QWORD *)1936941672 )
        {
          if ( !v7 )
            return KeSetEvent(v42 + 139, 0, 0);
          v80 = v7[1];
          v48 = v7 + 1;
          if ( *(_QWORD **)(v80 + 8) == v7 + 1 )
          {
            v81 = (_QWORD *)v7[2];
            if ( (_QWORD *)*v81 == v48 )
            {
              *v81 = v80;
              *(_QWORD *)(v80 + 8) = v81;
              goto LABEL_40;
            }
          }
LABEL_97:
          __fastfail(3u);
        }
LABEL_93:
        Lock = v42[130].Header.Lock;
        if ( Lock )
          v42[130].Header.LockNV = Lock - 1;
        return KeSetEvent(v42 + 139, 0, 0);
      }
    }
LABEL_98:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  switch ( (int)v19 )
  {
    case 2:
    case 3:
    case 4:
    case 14:
      UsbhiSignalResumeEvent(a1, a2);
      v89 = 1597206581;
      goto LABEL_88;
    case 5:
    case 12:
    case 13:
      Timeoutb = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v96[0]) = 0x100000;
      Log(a1, 512, 1597206583, v19, Timeoutb);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL);
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v96, 0, 0LL);
      v88 = 0x100000LL;
      goto LABEL_83;
    case 7:
    case 11:
      Timeout = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v96[0]) = 0x100000;
      Log(a1, 512, 1597206577, v19, Timeout);
      UsbhSetResumePending(a1, a2);
      v82 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v82 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v96, 0, 0LL);
      Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v83 = *(_DWORD *)(a2 + 12);
      v84 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v84 + a2 + 8) = v83;
      *(_DWORD *)(v84 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
      return UsbhDecHubBusy(a1, v85, v7);
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v19 == 9 )
      {
        v86 = 4;
      }
      else
      {
        v86 = 14;
        if ( (_DWORD)v19 == 8 )
          v86 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597206580, v86, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        Timeouta = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v96[0]) = 0x100000;
        Log(a1, 512, 1597206610, v19, Timeouta);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v96, 0, 0LL);
      }
      v87 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v86;
      *(_DWORD *)(v87 + a2 + 1384) = v86;
      break;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v89 = 1597206582;
      goto LABEL_88;
    case 18:
      v89 = 1597206584;
LABEL_88:
      Log(a1, 512, v89, v19, *(unsigned __int16 *)(a2 + 4));
      v90 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v19;
      *(_DWORD *)(v90 + a2 + 1384) = v19;
      break;
    default:
      Log(a1, 512, 1597206616, v19, *(unsigned __int16 *)(a2 + 4));
      v91 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v91 + a2 + 1384) = 19;
      break;
  }
  v88 = 0LL;
LABEL_83:
  UsbhUnlockPcqWithTag(a1, a2, v11, v88);
  return UsbhDecHubBusy(a1, v85, v7);
}
