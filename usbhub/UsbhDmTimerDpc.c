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
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
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
  __int128 *v66; // [rsp+28h] [rbp-89h]
  __int64 v67; // [rsp+30h] [rbp-81h]
  int *v68; // [rsp+38h] [rbp-79h]
  __int64 v69; // [rsp+40h] [rbp-71h]
  _QWORD *v70; // [rsp+48h] [rbp-69h]
  int v71; // [rsp+50h] [rbp-61h]
  __int64 v72; // [rsp+58h] [rbp-59h]
  KIRQL v73; // [rsp+6Ch] [rbp-45h]
  __int64 *v74; // [rsp+88h] [rbp-29h] BYREF
  __int64 **v75; // [rsp+90h] [rbp-21h]
  int v76; // [rsp+98h] [rbp-19h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-11h]
  int v78; // [rsp+A8h] [rbp-9h]
  __int128 v79; // [rsp+B0h] [rbp-1h] BYREF
  __int128 v80; // [rsp+C0h] [rbp+Fh]
  int v81; // [rsp+D0h] [rbp+1Fh]

  v5 = 1;
  if ( !DeferredContext )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = DeferredContext[8];
  if ( !v6 )
    goto LABEL_111;
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(DeferredContext, DeferredContext[8]);
  v73 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 3728));
  v7 = (__int64 ****)(v6 + 3744);
  v8 = v73;
  v75 = &v74;
  v74 = (__int64 *)&v74;
LABEL_5:
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 == (__int64 ***)v7 )
      break;
    if ( v10[1] != (__int64 **)v7 )
      goto LABEL_105;
    v11 = *v10;
    if ( (*v10)[1] != (__int64 *)v10 )
      goto LABEL_105;
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
      v19 = v75;
      if ( *v75 != (__int64 *)&v74 )
        goto LABEL_105;
      v10[1] = v75;
      *v10 = &v74;
      *v19 = v10;
      v75 = (__int64 **)v10;
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
        v8 = v73;
        *((_DWORD *)v10 - 11) += -15 - (TimeIncrement - 1) / 0x2710;
        *((_DWORD *)v10 - 9) = 1;
        goto LABEL_5;
      }
      if ( (UsbhLogMask & 0x2000) != 0 )
      {
        v52 = DeferredContext[8];
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
          *(_DWORD *)v53 = 860188004;
          *(_QWORD *)(v53 + 8) = 0LL;
          *(_QWORD *)(v53 + 16) = v12;
          *(_QWORD *)(v53 + 24) = 0LL;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v8);
      v76 = *((_DWORD *)v10 - 8);
      v77 = 0LL;
      v78 = 0;
      v79 = 0LL;
      v81 = 0;
      v80 = 0LL;
      if ( dword_1C006B690 )
      {
        v54 = DeferredContext[8];
        if ( !v54 )
          UsbhTrapFatal_Dbg(DeferredContext, 0LL);
        if ( *(_DWORD *)v54 != 541218120 )
          UsbhTrapFatal_Dbg(DeferredContext, v54);
        LODWORD(v77) = *(_DWORD *)(v54 + 5192);
        WORD2(v77) = *(_WORD *)(v54 + 5196);
        HIWORD(v77) = *(_DWORD *)(v54 + 5200);
        v78 = *(_DWORD *)(v54 + 5228);
        *(_QWORD *)&v79 = *(unsigned int *)(v54 + 2548);
        DWORD2(v79) = *(unsigned __int16 *)(v54 + 5208);
        v55 = *(_WORD *)(v54 + 5208) != 0;
        DWORD1(v79) = v55;
        HIDWORD(v79) = *(unsigned __int16 *)(v54 + 5210);
        if ( HIDWORD(v79) )
          DWORD1(v79) = ++v55;
        LODWORD(v80) = *(unsigned __int16 *)(v54 + 5212);
        if ( (_DWORD)v80 )
          DWORD1(v79) = ++v55;
        DWORD1(v80) = *(unsigned __int16 *)(v54 + 5214);
        if ( DWORD1(v80) )
          DWORD1(v79) = ++v55;
        DWORD2(v80) = *(unsigned __int16 *)(v54 + 5216);
        if ( DWORD2(v80) )
          DWORD1(v79) = ++v55;
        HIDWORD(v80) = *(unsigned __int16 *)(v54 + 5218);
        if ( HIDWORD(v80) )
          DWORD1(v79) = v55 + 1;
        v72 = 0LL;
        v71 = 4;
        v81 = *(_DWORD *)(v54 + 2536);
        v70 = v10 + 2;
        v69 = 4LL;
        v68 = &v76;
        HIDWORD(v67) = 0;
        v66 = &v79;
        UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_TIMER_CALLBACK, 0LL);
      }
      LODWORD(v67) = *((_DWORD *)v10 - 6);
      LODWORD(v66) = *((_DWORD *)v10 - 7);
      v56 = ((unsigned int (__fastcall *)(__int64 ***, _QWORD *, _QWORD, _QWORD, __int128 *, __int64, int *, __int64, _QWORD *, int, __int64))*(v10 - 1))(
              v10 - 7,
              DeferredContext,
              *((unsigned int *)v10 - 8),
              *(v10 - 2),
              v66,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
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
      v73 = v60;
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
    v35 = v74;
    if ( v74 == (__int64 *)&v74 )
      break;
    if ( (__int64 **)v74[1] != &v74 )
      goto LABEL_105;
    v24 = (__int64 *)*v74;
    if ( *(__int64 **)(*v74 + 8) != v74 )
      goto LABEL_105;
    v74 = (__int64 *)*v74;
    v24[1] = (__int64)&v74;
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
      Log((_DWORD)DeferredContext, 0x2000, 1684886068, (_DWORD)v25, v9);
LABEL_36:
      v34 = *(__int64 ***)(v6 + 3752);
      if ( *v34 != (__int64 *)v7 )
        goto LABEL_105;
      *v35 = (__int64)v7;
      v35[1] = (__int64)v34;
      *v34 = v35;
      *(_QWORD *)(v6 + 3752) = v35;
    }
  }
  v36 = *(int *)(v6 + 3736);
  if ( !(_DWORD)v36 )
  {
    Log((_DWORD)DeferredContext, 0x2000, 1680948785, 0, v9);
    KeSetEvent((PRKEVENT)(v6 + 3760), 0, 0);
    goto LABEL_45;
  }
  if ( *v7 == (__int64 ***)v7 )
  {
    if ( (UsbhLogMask & 0x2000) != 0 )
    {
      v47 = DeferredContext[8];
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
        *(_DWORD *)v48 = 1414360420;
        *(_QWORD *)(v48 + 8) = v9;
        *(_QWORD *)(v48 + 16) = v9;
        *(_QWORD *)(v48 + 24) = v9;
      }
    }
    if ( *(_DWORD *)(v6 + 3736) )
      *(_DWORD *)(v6 + 3736) = 2;
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
  KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 3728), v73);
  if ( !v5 )
    return;
  v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v43 = DeferredContext[8];
  if ( !v43 )
LABEL_111:
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
        goto LABEL_107;
      v46 = v45 - 3;
      if ( v45 == (_QWORD *)24 || *(_DWORD *)v46 != 1397515890 )
LABEL_106:
        UsbhTrapFatal_Dbg(DeferredContext, DeferredContext);
      if ( v46[2] == v6 + 3848 )
        break;
      v45 = (_QWORD *)*v45;
      if ( !v45 )
        goto LABEL_106;
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
        v51 = (_DWORD *)(v43 + 2528);
        goto LABEL_68;
      }
    }
LABEL_105:
    __fastfail(3u);
  }
LABEL_107:
  v51 = (_DWORD *)(v43 + 2528);
  v65 = *(_DWORD *)(v43 + 2528);
  if ( v65 )
    *v51 = v65 - 1;
LABEL_68:
  if ( (_QWORD *)*v44 == v44 && !*v51 )
    KeSetEvent((PRKEVENT)(v43 + 2488), 0, 0);
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v42);
}
