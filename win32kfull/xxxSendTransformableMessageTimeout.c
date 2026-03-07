__int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 *a7,
        int a8,
        int a9)
{
  __int64 v11; // r14
  __int64 *v13; // rdi
  ULONG_PTR v14; // r9
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  _BOOL8 v19; // rcx
  int v20; // r13d
  int v21; // r12d
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 *ThreadWin32Thread; // rax
  BOOL v26; // ecx
  unsigned __int64 v27; // r13
  __int64 v28; // r15
  unsigned __int64 v29; // rsi
  unsigned __int64 *v30; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  char v36; // al
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  char v49; // al
  __int64 Valid; // rcx
  _QWORD *v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // r15
  __int64 v55; // rcx
  char v56; // bl
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 *v59; // rcx
  unsigned int v60; // r9d
  unsigned __int64 *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-120h] BYREF
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-118h] BYREF
  __int64 v67; // [rsp+68h] [rbp-110h]
  unsigned __int64 *v68; // [rsp+70h] [rbp-108h]
  __int64 v69[2]; // [rsp+78h] [rbp-100h] BYREF
  __int128 v70; // [rsp+88h] [rbp-F0h]
  __int128 v71; // [rsp+98h] [rbp-E0h]
  int v72; // [rsp+A8h] [rbp-D0h]
  _QWORD v73[3]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v74[56]; // [rsp+C8h] [rbp-B0h] BYREF
  _BYTE v75[56]; // [rsp+100h] [rbp-78h] BYREF

  v67 = (__int64)a4;
  LowLimit = a3;
  v11 = a2;
  v68 = a7;
  v73[2] = a1;
  v13 = 0LL;
  HighLimit = 0LL;
  v73[0] = 0LL;
  *(_OWORD *)v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
  {
    v59 = 0LL;
    v60 = 0;
    if ( a7 )
    {
      v60 = 4;
      v69[0] = __PAIR64__(a6, a5);
      v69[1] = (__int64)a7;
      v59 = v69;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v60, (union tagBROADCASTMSG *)v59, a8, 0);
  }
  v14 = 0LL;
  v73[1] = 0LL;
  if ( a1 )
    v15 = *(_QWORD *)a1;
  else
    LOWORD(v15) = 0;
  v72 = (unsigned __int16)v15;
  if ( (unsigned __int64)(unsigned __int16)v15 >= *(_QWORD *)(gpsi + 8LL)
    || (v14 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v15,
        *(struct tagWND **)(gpKernelHandleTable + 24LL * (unsigned __int16)v15) != a1)
    || *(_BYTE *)(v14 + 24) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v14, 1uLL);
  }
  if ( a2 - 992 > 8 )
  {
    if ( a2 - 577 <= 3 )
      goto LABEL_119;
    if ( a2 < 0x245 || a2 > 0x257 || (v16 = 1, a2 == 589) )
      v16 = 0;
    if ( v16 )
LABEL_119:
      v17 = 1;
    else
      v17 = 0;
    if ( v17 )
    {
      if ( (_WORD)a3 != 1 )
      {
LABEL_20:
        v19 = 0LL;
        goto LABEL_21;
      }
      v19 = 1LL;
    }
    else
    {
      if ( a2 != 528 || (_WORD)a3 != 582 )
        goto LABEL_20;
      v19 = WORD1(a3) == 1;
    }
LABEL_21:
    if ( v19 && !(unsigned int)IsMiPEnabledForWindow(a1) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1528LL);
      return 0LL;
    }
    v20 = a6;
    v21 = a5;
    goto LABEL_23;
  }
  if ( !(unsigned int)xxxDDETrackSendHook(a1) )
    return 0LL;
  if ( (_DWORD)v11 == 992 && (v20 = guDdeSendTimeout) != 0 )
  {
    v21 = a5 | 2;
    v61 = v73;
    if ( a7 )
      v61 = a7;
    v68 = v61;
  }
  else
  {
    v20 = a6;
    v21 = a5;
  }
  if ( (unsigned int)ValidateDDEConvPair(a3, a1) )
  {
    v22 = 1;
    goto LABEL_24;
  }
LABEL_23:
  v22 = a8;
LABEL_24:
  v23 = SGDGetUserSessionState(v19);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v23 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v24 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v24 = *ThreadWin32Thread;
  if ( v24 == *((_QWORD *)a1 + 2) )
  {
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v74);
    if ( a1 != *(struct tagWND **)(v24 + 1504) )
    {
      v26 = (unsigned int)v11 < 0x400 && ((unsigned __int16)MessageTable[v11] >> 14) & 1;
      if ( !v26 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) == 0 )
      {
        v27 = LowLimit;
        if ( ((*(_BYTE *)(v24 + 680) | *(_BYTE *)(**(_QWORD **)(v24 + 464) + 16LL)) & 0x20) == 0 )
          goto LABEL_34;
        *((_QWORD *)&v70 + 1) = *(_QWORD *)a1;
        v32 = (unsigned int)v11;
        LODWORD(v70) = v11;
        v69[1] = LowLimit;
        v69[0] = v67;
        *(_QWORD *)&v71 = 0LL;
        if ( !gbInDestroyHandleTableObjects )
        {
          v33 = SGDGetUserSessionState((unsigned int)v11);
          if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v33 + 8)) != 1 )
          {
            v35 = SGDGetUserSessionState(v34);
            if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v35 + 8))
              || (ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
               && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)
                ? (v36 = 0)
                : (v36 = 1),
                  !v36) )
            {
              __int2c();
            }
          }
          v32 = (unsigned int)v70;
        }
        if ( (unsigned int)(v32 - 577) <= 3 )
          goto LABEL_140;
        if ( (unsigned int)v32 < 0x245 || (unsigned int)v32 > 0x257 || (v37 = 1, (_DWORD)v32 == 589) )
          v37 = 0;
        if ( v37 )
LABEL_140:
          v38 = 1;
        else
          v38 = 0;
        if ( !v38 || (v39 = 1, (_DWORD)v32 == 595) )
          v39 = 0;
        if ( v39 || ((_DWORD)v32 != 528 || LOWORD(v69[1]) != 582 ? (v40 = 0) : (v40 = 1), v40) )
        {
          xxxPointerCallHook(0LL, 0LL, v69, 4LL, 0);
LABEL_34:
          SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v74);
          FreeDelayedHooks();
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
          {
            HighLimit = 0LL;
            LowLimit = 0LL;
            IoGetStackLimits(&LowLimit, &HighLimit);
            if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
              return 0LL;
            v54 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL);
            if ( v54 >= 7 )
              return 0LL;
            if ( IS_USERCRIT_OWNED_EXCLUSIVE(v53) || !IS_USERCRIT_OWNED_AT_ALL(v55) )
            {
              v56 = 0;
              v57 = SGDGetUserSessionState(v55);
              if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v57 + 8)) != 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 50LL);
            }
            else
            {
              v56 = 1;
              UserSessionSwitchLeaveCrit(v55);
              EnterCrit(1LL, 0LL);
            }
            v29 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v54])(
                    a1,
                    (unsigned int)v11,
                    v27,
                    v67);
            if ( v56 )
            {
              UserSessionSwitchLeaveCrit(v58);
              EnterSharedCrit(v63, v62, v64);
            }
            v30 = v68;
            if ( !v68 )
              return v29;
          }
          else
          {
            v28 = v67;
            xxxSendMessageToClient(a1, v11, v27, v67, 0LL, 0, (__int64 *)&HighLimit);
            SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v75);
            if ( a1 != *(struct tagWND **)(v24 + 1504)
              && ((*(_DWORD *)(v24 + 680) | *(_DWORD *)(**(_QWORD **)(v24 + 464) + 16LL)) & 0x2000) != 0 )
            {
              v71 = *(unsigned __int64 *)a1;
              DWORD2(v70) = v11;
              *(_QWORD *)&v70 = v27;
              v69[1] = v28;
              v29 = HighLimit;
              v69[0] = HighLimit;
              xxxCallHook(0, 0LL, (__int64)v69, 12);
            }
            else
            {
              v29 = HighLimit;
            }
            SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v75);
            FreeDelayedHooks();
            if ( (_DWORD)v11 == 576 )
              LODWORD(v13) = 1;
            if ( (_DWORD)v13 )
            {
              FreeTouchInputInfo(v28, 1LL);
            }
            else if ( (_DWORD)v11 == 281 )
            {
              FreeGestureInfo(v28, 1LL);
            }
            v30 = v68;
            if ( !v68 )
              return v29;
          }
          *v30 = v29;
          return 1LL;
        }
        v42 = SGDGetUserSessionState(v32);
        if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v42 + 8)) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
        v43 = 0LL;
        v44 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v44 )
          v43 = *v44;
        if ( !gbInDestroyHandleTableObjects )
        {
          v46 = SGDGetUserSessionState(v45);
          if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v46 + 8)) != 1 )
          {
            v48 = SGDGetUserSessionState(v47);
            if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v48 + 8))
              || (ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainHookLock) != 1
               && !ExIsResourceAcquiredSharedLite((PERESOURCE)gDomainHookLock)
                ? (v49 = 0)
                : (v49 = 1),
                  !v49) )
            {
              __int2c();
            }
          }
        }
        Valid = *(_QWORD *)(v43 + 960);
        if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(v43 + 464) + 80LL)) != 0)
          && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
        {
          Valid = PhkNextValid(Valid);
        }
        xxxCallHook2((struct tagHOOK *)Valid, 0, 0LL, (__int64)v69, 0LL, 0);
      }
    }
    v27 = LowLimit;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( v68 )
    {
      if ( (v21 & 2) != 0 )
      {
        v51 = (_QWORD *)*((_QWORD *)a1 + 2);
        HighLimit = (unsigned __int64)v51;
        if ( !gdwHungAppTimeout )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 267LL);
          v51 = (_QWORD *)HighLimit;
        }
        v52 = v51[56];
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(v52 + 20) > gdwHungAppTimeout
          && (*(_DWORD *)(v52 + 16) & 0x1C07) == 0
          && !(unsigned int)PsGetThreadFreezeCount(*v51)
          && (*(_DWORD *)(*(_QWORD *)(HighLimit + 424) + 12LL) & 0x40) == 0 )
        {
          return 0LL;
        }
      }
      LODWORD(v69[0]) = 2;
      *(_QWORD *)&v71 = __PAIR64__(v20, v21);
      *((_QWORD *)&v71 + 1) = v68;
      v13 = v69;
    }
    return xxxInterSendMsgEx(
             a1,
             v11,
             LowLimit,
             (void *)v67,
             1,
             *((struct tagTHREADINFO **)a1 + 2),
             (__int64)v13,
             v22,
             a9);
  }
  return xxxDefWindowProc(a1, v11, (HWND)LowLimit, v67);
}
