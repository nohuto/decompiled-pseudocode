/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C0010A20
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00157C0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C00128D0 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhSetResumePending @ 0x1C001EC44 (UsbhSetResumePending.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00347B8 (UsbhRemoveQueuedSuspend.c)
 *     UsbhSetPcqEventStatus @ 0x1C00348C0 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0034A70 (UsbhUnlockPcqWithTag.c)
 *     UsbhiSignalResumeEvent @ 0x1C0035BCC (UsbhiSignalResumeEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0035C0C (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rdx
  _QWORD *v6; // r15
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  KIRQL v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  KSPIN_LOCK *v26; // rdi
  KIRQL v27; // al
  __int64 v28; // r9
  KIRQL v29; // si
  int v30; // r8d
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _KEVENT *v41; // rbx
  __int64 Signalling; // r8
  unsigned __int8 v43; // cl
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  KIRQL v57; // al
  KIRQL v58; // di
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // ecx
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // r8
  unsigned __int8 v76; // cl
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  _QWORD *v80; // r8
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rdx
  unsigned int v85; // esi
  __int64 v86; // rax
  __int64 v87; // r9
  int v88; // r8d
  __int64 v89; // rax
  __int64 v90; // rax
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-48h]
  __int64 Timeouta; // [rsp+20h] [rbp-48h]
  __int64 Timeoutb; // [rsp+20h] [rbp-48h]
  __int64 v95; // [rsp+88h] [rbp+20h] BYREF

  v95 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    goto LABEL_98;
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = v8;
  v10 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 3LL;
      *(_QWORD *)(v12 + 24) = v8;
      v9 = *(_WORD *)(a2 + 4);
    }
  }
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
      *(_QWORD *)(v15 + 24) = v9;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
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
  if ( (_DWORD)v18 == 1 )
  {
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 862991199;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = 1LL;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
    v25 = *(_QWORD *)(a1 + 64);
    if ( v25 )
    {
      if ( *(_DWORD *)v25 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v26 = (KSPIN_LOCK *)(v25 + 4944);
      v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 4944));
      v28 = *(int *)(a2 + 696);
      v29 = v27;
      v30 = *(_DWORD *)(a2 + 696);
      v31 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 1397909875;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v28;
          *(_QWORD *)(v33 + 24) = v31;
          v30 = *(_DWORD *)(a2 + 696);
        }
      }
      if ( v30 == 3 )
      {
        Log(a1, 16, 1936282232, 3LL, *(unsigned __int16 *)(a2 + 4));
        *(_DWORD *)(a2 + 696) = 0;
        KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
        KeReleaseSpinLock(v26, v29);
        UsbhSetPcqEventStatus(a1, a2, 1LL);
      }
      else
      {
        KeReleaseSpinLock(v26, v27);
      }
      v34 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v34 + a2 + 1384) = 1;
      v35 = *(int *)(a2 + 12);
      v36 = *(_DWORD *)(a2 + 12);
      v37 = *(unsigned __int16 *)(a2 + 4);
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
          *(_QWORD *)(v39 + 16) = v35;
          *(_QWORD *)(v39 + 24) = v37;
          v36 = *(_DWORD *)(a2 + 12);
        }
      }
      v40 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v40 + a2 + 1384) = v36;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      v41 = *(struct _KEVENT **)(a1 + 64);
      if ( v41 )
      {
        if ( v41->Header.LockNV != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        v41[142].Header.Type = 1;
        KeWaitForSingleObject(&v41[139], Executive, 0, 0, 0LL);
        Signalling = v41[142].Header.Signalling;
        v43 = v41[142].Header.Signalling;
        if ( (UsbhLogMask & 0x10000) != 0 )
        {
          v44 = *(_QWORD *)(a1 + 64);
          if ( v44 )
          {
            v45 = *(_QWORD *)(v44 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
            *(_DWORD *)v45 = 1667581000;
            *(_QWORD *)(v45 + 8) = 0LL;
            *(_QWORD *)(v45 + 16) = v6;
            *(_QWORD *)(v45 + 24) = Signalling;
            v43 = v41[142].Header.Signalling;
          }
        }
        if ( !v43 )
          return KeSetEvent(v41 + 139, 0, 0);
        if ( v6 != (_QWORD *)1936941672 )
        {
          if ( !v6 )
            return KeSetEvent(v41 + 139, 0, 0);
          v46 = v6[1];
          v47 = v6 + 1;
          if ( *(_QWORD **)(v46 + 8) == v6 + 1 )
          {
            v48 = (_QWORD *)v6[2];
            if ( (_QWORD *)*v48 == v47 )
            {
              *v48 = v46;
              *(_QWORD *)(v46 + 8) = v48;
LABEL_38:
              v47[1] = v47;
              *v47 = v47;
              ExFreePoolWithTag(v6, 0);
              return KeSetEvent(v41 + 139, 0, 0);
            }
          }
          goto LABEL_97;
        }
        goto LABEL_92;
      }
    }
    goto LABEL_98;
  }
  if ( (_DWORD)v18 == 6 )
  {
    v50 = *(unsigned __int16 *)(a2 + 4);
    LODWORD(v95) = 0x100000;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v51 = *(_QWORD *)(a1 + 64);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
        *(_DWORD *)v52 = 846213983;
        *(_QWORD *)(v52 + 8) = 0LL;
        *(_QWORD *)(v52 + 16) = 6LL;
        *(_QWORD *)(v52 + 24) = v50;
      }
    }
    v53 = *(_QWORD *)(a1 + 64);
    if ( v53 )
    {
      if ( *(_DWORD *)v53 != 541218120 )
        UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
      v54 = *(unsigned __int16 *)(a2 + 4);
      v55 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v56 = *(_QWORD *)(v53 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
        *(_DWORD *)v56 = 1986359664;
        *(_QWORD *)(v56 + 8) = 0LL;
        *(_QWORD *)(v56 + 16) = v55;
        *(_QWORD *)(v56 + 24) = v54;
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v53 + 4944));
      *(_BYTE *)(a2 + 2838) = 0;
      v58 = v57;
      *(_DWORD *)(a2 + 696) = 3;
      KeResetEvent((PRKEVENT)(a2 + 712));
      KeReleaseSpinLock((PKSPIN_LOCK)(v53 + 4944), v58);
      v59 = *(unsigned __int16 *)(a2 + 4);
      v60 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v61 = *(_QWORD *)(a1 + 64);
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v61 + 880)) & *(_DWORD *)(v61 + 884));
          *(_DWORD *)v62 = 1986359664;
          *(_QWORD *)(v62 + 8) = 0LL;
          *(_QWORD *)(v62 + 16) = v60;
          *(_QWORD *)(v62 + 24) = v59;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
      v63 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(v63 + a2 + 1384) = 1;
      v64 = *(unsigned __int16 *)(a2 + 4);
      v65 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v66 = *(_QWORD *)(a1 + 64);
        if ( v66 )
        {
          v67 = *(_QWORD *)(v66 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v66 + 880)) & *(_DWORD *)(v66 + 884));
          *(_DWORD *)v67 = 1986359664;
          *(_QWORD *)(v67 + 8) = 0LL;
          *(_QWORD *)(v67 + 16) = v65;
          *(_QWORD *)(v67 + 24) = v64;
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v95, 0, 0LL);
      v68 = *(int *)(a2 + 12);
      v69 = *(_DWORD *)(a2 + 12);
      v70 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v71 = *(_QWORD *)(a1 + 64);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v71 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v71 + 880)) & *(_DWORD *)(v71 + 884));
          *(_DWORD *)v72 = 757952880;
          *(_QWORD *)(v72 + 8) = 0LL;
          *(_QWORD *)(v72 + 16) = v68;
          *(_QWORD *)(v72 + 24) = v70;
          v69 = *(_DWORD *)(a2 + 12);
        }
      }
      v73 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      v74 = 32 * (v73 + 43);
      *(_DWORD *)(v74 + a2 + 8) = v69;
      *(_DWORD *)(v74 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      v41 = *(struct _KEVENT **)(a1 + 64);
      if ( v41 )
      {
        if ( v41->Header.LockNV != 541218120 )
          UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
        v41[142].Header.Type = 1;
        KeWaitForSingleObject(&v41[139], Executive, 0, 0, 0LL);
        v75 = v41[142].Header.Signalling;
        v76 = v41[142].Header.Signalling;
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
            *(_QWORD *)(v78 + 24) = v75;
            v76 = v41[142].Header.Signalling;
          }
        }
        if ( !v76 )
          return KeSetEvent(v41 + 139, 0, 0);
        if ( v6 != (_QWORD *)1936941672 )
        {
          if ( !v6 )
            return KeSetEvent(v41 + 139, 0, 0);
          v79 = v6[1];
          v47 = v6 + 1;
          if ( *(_QWORD **)(v79 + 8) == v6 + 1 )
          {
            v80 = (_QWORD *)v6[2];
            if ( (_QWORD *)*v80 == v47 )
            {
              *v80 = v79;
              *(_QWORD *)(v79 + 8) = v80;
              goto LABEL_38;
            }
          }
LABEL_97:
          __fastfail(3u);
        }
LABEL_92:
        Lock = v41[130].Header.Lock;
        if ( Lock )
          v41[130].Header.LockNV = Lock - 1;
        return KeSetEvent(v41 + 139, 0, 0);
      }
    }
LABEL_98:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
  switch ( (int)v18 )
  {
    case 2:
    case 3:
    case 4:
    case 14:
      UsbhiSignalResumeEvent(a1, a2);
      v88 = 1597206581;
      goto LABEL_87;
    case 5:
    case 12:
    case 13:
      Timeoutb = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v95) = 0x100000;
      Log(a1, 512, 1597206583, v18, Timeoutb);
      UsbhSetResumePending(a1, a2);
      UsbhSetPcqEventStatus(a1, a2, 1LL);
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v95, 0, 0LL);
      v87 = 0x100000LL;
      goto LABEL_82;
    case 7:
    case 11:
      Timeout = *(unsigned __int16 *)(a2 + 4);
      LODWORD(v95) = 0x100000;
      Log(a1, 512, 1597206577, v18, Timeout);
      UsbhSetResumePending(a1, a2);
      v81 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 18;
      *(_DWORD *)(v81 + a2 + 1384) = 18;
      UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v95, 0, 0LL);
      Log(a1, 16, 1886479734, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
      KeResetEvent((PRKEVENT)(a2 + 472));
      Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v82 = *(_DWORD *)(a2 + 12);
      v83 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v83 + a2 + 8) = v82;
      *(_DWORD *)(v83 + a2 + 12) = 0x100000;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      return UsbhDecHubBusy(a1, v84, v6);
    case 8:
    case 9:
    case 10:
      if ( (_DWORD)v18 == 9 )
      {
        v85 = 4;
      }
      else
      {
        v85 = 14;
        if ( (_DWORD)v18 == 8 )
          v85 = 3;
      }
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597206580, v85, *(unsigned __int16 *)(a2 + 4));
      if ( *(_DWORD *)(a2 + 400) == 5 )
      {
        Timeouta = *(unsigned __int16 *)(a2 + 4);
        LODWORD(v95) = 0x100000;
        Log(a1, 512, 1597206610, v18, Timeouta);
        UsbhSetResumePending(a1, a2);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)&v95, 0, 0LL);
      }
      v86 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v85;
      *(_DWORD *)(v86 + a2 + 1384) = v85;
      break;
    case 15:
    case 16:
    case 17:
    case 20:
      UsbhiSignalResumeEvent(a1, a2);
      v88 = 1597206582;
      goto LABEL_87;
    case 18:
      v88 = 1597206584;
LABEL_87:
      Log(a1, 512, v88, v18, *(unsigned __int16 *)(a2 + 4));
      v89 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v18;
      *(_DWORD *)(v89 + a2 + 1384) = v18;
      break;
    default:
      Log(a1, 512, 1597206616, v18, *(unsigned __int16 *)(a2 + 4));
      v90 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v90 + a2 + 1384) = 19;
      break;
  }
  v87 = 0LL;
LABEL_82:
  UsbhUnlockPcqWithTag(a1, a2, v10, v87);
  return UsbhDecHubBusy(a1, v84, v6);
}
