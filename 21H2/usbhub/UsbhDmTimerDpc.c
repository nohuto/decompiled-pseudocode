/*
 * XREFs of UsbhDmTimerDpc @ 0x1C000E2D0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhDmTimerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v5; // r13
  __int64 v6; // r15
  __int64 ****v7; // rdi
  KIRQL v8; // r9
  __int64 v9; // r11
  __int64 ***v10; // rbx
  __int64 **v11; // rax
  __int64 ***v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG TimeIncrement; // eax
  __int64 *v24; // rax
  __int64 *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 **v34; // rax
  __int64 *v35; // r10
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  ULONG v39; // eax
  __int64 v40; // r8
  __int64 v41; // rdx
  KIRQL v42; // r14
  __int64 v43; // rdi
  _QWORD *v44; // rbx
  _QWORD *v45; // rcx
  _QWORD *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  int v55; // ecx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  KIRQL v60; // al
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // [rsp+50h] [rbp-61h]
  KIRQL v67; // [rsp+6Ch] [rbp-45h]
  __int64 *v68; // [rsp+88h] [rbp-29h] BYREF
  __int64 **v69; // [rsp+90h] [rbp-21h]
  int v70; // [rsp+98h] [rbp-19h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-11h] BYREF
  int v72; // [rsp+A8h] [rbp-9h]
  __int128 v73; // [rsp+B0h] [rbp-1h] BYREF
  __int128 v74; // [rsp+C0h] [rbp+Fh]
  int v75; // [rsp+D0h] [rbp+1Fh]

  v5 = 1;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = DeferredContext[8];
  if ( !v6 )
    goto LABEL_110;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v67 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v7 = (__int64 ****)(v6 + 3744);
  v8 = v67;
  v69 = &v68;
  v68 = (__int64 *)&v68;
LABEL_5:
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 == (__int64 ***)v7 )
      break;
    if ( v10[1] != (__int64 **)v7 )
      goto LABEL_104;
    v11 = *v10;
    if ( (*v10)[1] != (__int64 *)v10 )
      goto LABEL_104;
    *v7 = (__int64 ***)v11;
    v12 = v10 - 7;
    v11[1] = (__int64 *)v7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v13 = DeferredContext[8];
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 827616612;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v10;
      }
    }
    v15 = *((_DWORD *)v10 - 13) == 1;
    v10[1] = 0LL;
    *v10 = 0LL;
    if ( v15 )
    {
      v16 = *((int *)v10 - 11);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v17 = DeferredContext[8];
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v18 = 826633572;
          *(_QWORD *)(v18 + 8) = 0LL;
          *(_QWORD *)(v18 + 16) = v12;
          *(_QWORD *)(v18 + 24) = v16;
        }
      }
      *((_DWORD *)v10 - 13) = 2;
      v19 = v69;
      if ( *v69 != (__int64 *)&v68 )
        goto LABEL_104;
      v10[1] = v69;
      *v10 = &v68;
      *v19 = v10;
      v69 = (__int64 **)v10;
      v20 = *((int *)v10 - 11);
      if ( (int)v20 > 0 )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v21 = DeferredContext[8];
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
            *(_DWORD *)v22 = 843410788;
            *(_QWORD *)(v22 + 8) = 0LL;
            *(_QWORD *)(v22 + 16) = v12;
            *(_QWORD *)(v22 + 24) = v20;
          }
        }
        TimeIncrement = KeQueryTimeIncrement();
        v8 = v67;
        *((_DWORD *)v10 - 11) += -15 - (TimeIncrement - 1) / 0x2710;
        *((_DWORD *)v10 - 9) = 1;
        goto LABEL_5;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v51 = DeferredContext[8];
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 860188004;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = v12;
          *(_QWORD *)(v52 + 24) = 0LL;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
      v53 = *((unsigned int *)v10 - 8);
      v70 = *((_DWORD *)v10 - 8);
      v71 = 0LL;
      v72 = 0;
      v73 = 0LL;
      v75 = 0;
      v74 = 0LL;
      if ( dword_1C006A690 )
      {
        v54 = DeferredContext[8];
        if ( !v54 )
          UsbhTrapFatal_Dbg(DeferredContext, 0LL);
        if ( *(_DWORD *)v54 != 541218120 )
          UsbhTrapFatal_Dbg(DeferredContext, v54);
        LODWORD(v71) = *(_DWORD *)(v54 + 5192);
        WORD2(v71) = *(_WORD *)(v54 + 5196);
        HIWORD(v71) = *(_DWORD *)(v54 + 5200);
        v72 = *(_DWORD *)(v54 + 5228);
        *(_QWORD *)&v73 = *(unsigned int *)(v54 + 2548);
        DWORD2(v73) = *(unsigned __int16 *)(v54 + 5208);
        v55 = *(_WORD *)(v54 + 5208) != 0;
        DWORD1(v73) = v55;
        HIDWORD(v73) = *(unsigned __int16 *)(v54 + 5210);
        if ( HIDWORD(v73) )
          DWORD1(v73) = ++v55;
        LODWORD(v74) = *(unsigned __int16 *)(v54 + 5212);
        if ( (_DWORD)v74 )
          DWORD1(v73) = ++v55;
        DWORD1(v74) = *(unsigned __int16 *)(v54 + 5214);
        if ( DWORD1(v74) )
          DWORD1(v73) = ++v55;
        DWORD2(v74) = *(unsigned __int16 *)(v54 + 5216);
        if ( DWORD2(v74) )
          DWORD1(v73) = ++v55;
        HIDWORD(v74) = *(unsigned __int16 *)(v54 + 5218);
        if ( HIDWORD(v74) )
          DWORD1(v73) = v55 + 1;
        LODWORD(v66) = 4;
        v75 = *(_DWORD *)(v54 + 2536);
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK, 0LL, &v71, 12LL, &v73, 36LL, &v70, 4LL, v10 + 2, v66, 0LL);
        v53 = *((unsigned int *)v10 - 8);
      }
      v56 = ((unsigned int (__fastcall *)(__int64 ***, _QWORD *, __int64, _QWORD, _DWORD, _DWORD))*(v10 - 1))(
              v10 - 7,
              DeferredContext,
              v53,
              *(v10 - 2),
              *((_DWORD *)v10 - 7),
              *((_DWORD *)v10 - 6));
      v57 = *((_DWORD *)v10 - 10);
      *((_DWORD *)v10 - 9) = v56;
      *((_DWORD *)v10 - 11) = v57;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v58 = DeferredContext[8];
        if ( v58 )
        {
          v59 = *(_QWORD *)(v58 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
          *(_DWORD *)v59 = 1381133668;
          *(_QWORD *)(v59 + 8) = 0LL;
          *(_QWORD *)(v59 + 16) = v12;
          *(_QWORD *)(v59 + 24) = v56;
        }
      }
      v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
      v9 = 0LL;
      v8 = v60;
      v67 = v60;
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v61 = DeferredContext[8];
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v61 + 880)) & *(_DWORD *)(v61 + 884));
          *(_DWORD *)v62 = 876965220;
          *(_QWORD *)(v62 + 8) = 0LL;
          *(_QWORD *)(v62 + 16) = v12;
          *(_QWORD *)(v62 + 24) = 0LL;
        }
      }
    }
  }
  while ( 1 )
  {
    v35 = v68;
    if ( v68 == (__int64 *)&v68 )
      break;
    if ( (__int64 **)v68[1] != &v68 )
      goto LABEL_104;
    v24 = (__int64 *)*v68;
    if ( *(__int64 **)(*v68 + 8) != v68 )
      goto LABEL_104;
    v68 = (__int64 *)*v68;
    v24[1] = (__int64)&v68;
    v25 = v35 - 7;
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v26 = DeferredContext[8];
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 827485540;
        *(_QWORD *)(v27 + 8) = v9;
        *(_QWORD *)(v27 + 16) = v25;
        *(_QWORD *)(v27 + 24) = v35;
      }
    }
    v28 = *((_DWORD *)v25 + 1);
    if ( v28 == 2 )
    {
      v29 = *((int *)v25 + 3);
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v30 = DeferredContext[8];
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1112698212;
          *(_QWORD *)(v31 + 8) = v9;
          *(_QWORD *)(v31 + 16) = v25;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
      if ( *((_DWORD *)v25 + 5) )
      {
        if ( (UsbhLogMask & 0x2000) != 0 )
        {
          v32 = DeferredContext[8];
          if ( v32 )
          {
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = 844262756;
            *(_QWORD *)(v33 + 8) = v9;
            *(_QWORD *)(v33 + 16) = v25;
            *(_QWORD *)(v33 + 24) = v9;
          }
        }
        *((_DWORD *)v25 + 1) = 1;
        goto LABEL_36;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v63 = DeferredContext[8];
        if ( v63 )
        {
          v64 = *(_QWORD *)(v63 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v63 + 880)) & *(_DWORD *)(v63 + 884));
          *(_DWORD *)v64 = 861039972;
          *(_QWORD *)(v64 + 8) = v9;
          *(_QWORD *)(v64 + 16) = v25;
          *(_QWORD *)(v64 + 24) = v9;
        }
      }
      *((_DWORD *)v25 + 1) = v9;
    }
    else
    {
      if ( v28 != 1 )
        continue;
      Log((__int64)DeferredContext, 0x2000, 1684886068, (__int64)v25, v9);
LABEL_36:
      v34 = *(__int64 ***)(v6 + 3752);
      if ( *v34 != (__int64 *)v7 )
        goto LABEL_104;
      *v35 = (__int64)v7;
      v35[1] = (__int64)v34;
      *v34 = v35;
      *(_QWORD *)(v6 + 3752) = v35;
    }
  }
  v36 = *(int *)(v6 + 3736);
  if ( !(_DWORD)v36 )
  {
    Log((__int64)DeferredContext, 0x2000, 1680948785, 0LL, v9);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_45;
  }
  if ( *v7 == (__int64 ***)v7 )
  {
    if ( (UsbhLogMask & 0x2000) == 0
      || (v47 = DeferredContext[8]) == 0
      || (v48 = *(_QWORD *)(v47 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884)),
          *(_DWORD *)v48 = 1414360420,
          *(_QWORD *)(v48 + 8) = v9,
          *(_QWORD *)(v48 + 16) = v9,
          *(_QWORD *)(v48 + 24) = v9,
          *(_DWORD *)(v6 + 3736)) )
    {
      *(_DWORD *)(v6 + 3736) = 2;
    }
  }
  else
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v37 = DeferredContext[8];
      if ( v37 )
      {
        v38 = *(_QWORD *)(v37 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
        *(_DWORD *)v38 = 1414807140;
        *(_QWORD *)(v38 + 8) = v9;
        *(_QWORD *)(v38 + 16) = v9;
        *(_QWORD *)(v38 + 24) = v36;
      }
    }
    v39 = KeQueryTimeIncrement();
    KeSetTimer((PKTIMER)(v6 + 3848), (LARGE_INTEGER)(int)(-149999 - v39), (PKDPC)(v6 + 3784));
    v5 = 0;
LABEL_45:
    v9 = 0LL;
  }
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    v40 = DeferredContext[8];
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 827878756;
      *(_QWORD *)(v41 + 8) = v9;
      *(_QWORD *)(v41 + 16) = v9;
      *(_QWORD *)(v41 + 24) = v9;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v67);
  if ( !v5 )
    return;
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v43 = DeferredContext[8];
  if ( !v43 )
LABEL_110:
    UsbhTrapFatal_Dbg(DeferredContext, 0LL);
  if ( *(_DWORD *)v43 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v44 = (_QWORD *)(v43 + 2512);
  v45 = *(_QWORD **)(v43 + 2512);
  if ( v45 != (_QWORD *)(v43 + 2512) && v45 )
  {
    while ( 1 )
    {
      if ( v45 == v44 )
        goto LABEL_106;
      v46 = v45 - 3;
      if ( v45 == (_QWORD *)24 || *(_DWORD *)v46 != 1397515890 )
LABEL_105:
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      if ( v46[2] == v6 + 3848 )
        break;
      v45 = (_QWORD *)*v45;
      if ( !v45 )
        goto LABEL_105;
    }
    v49 = (_QWORD *)*v45;
    if ( *(_QWORD **)(*v45 + 8LL) == v45 )
    {
      v50 = (_QWORD *)v45[1];
      if ( (_QWORD *)*v50 == v45 )
      {
        *v50 = v49;
        v49[1] = v50;
        ExFreePoolWithTag(v45 - 3, 0);
        goto LABEL_67;
      }
    }
LABEL_104:
    __fastfail(3u);
  }
LABEL_106:
  v65 = *(_DWORD *)(v43 + 2528);
  if ( v65 )
    *(_DWORD *)(v43 + 2528) = v65 - 1;
LABEL_67:
  if ( (_QWORD *)*v44 == v44 && !*(_DWORD *)(v43 + 2528) )
    KeSetEvent((PRKEVENT)(v43 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42);
}
