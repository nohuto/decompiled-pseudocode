/*
 * XREFs of ?DoPowerStateAndMonitor@@YAXXZ @ 0x1C00CAA00
 * Callers:
 *     <none>
 * Callees:
 *     _PostTransformableMessage @ 0x1C00CB714 (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall DoPowerStateAndMonitor(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed int v7; // edi
  __int64 GlobalTickCount; // rbx
  char v9; // di
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  signed int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-30h] BYREF
  __int128 v27; // [rsp+38h] [rbp-28h] BYREF
  __int128 v28; // [rsp+48h] [rbp-18h] BYREF

  v28 = 0LL;
  v26 = 0;
  v1 = *(unsigned int *)(SGDGetUserSessionState(a1) + 3152);
  if ( (v1 & 1) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v1) + 13992) & 4) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v2) + 13992) & 0x10) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v3) + 13993) & 1) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v4) + 13993) & 4) != 0
    || (*(_BYTE *)(SGDGetUserSessionState(v5) + 13993) & 0x10) != 0 )
  {
    return;
  }
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive
    && (v7 = *(_DWORD *)(SGDGetUserSessionState(v6) + 2864) - 5000, v7 > 0)
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v7)
    && (GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL),
        GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals))
    && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets)
    && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
  {
    EtwTraceIdleActionExpiration(6LL, (unsigned int)v7);
    CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
    dword_1C0361178 = v7;
  }
  else
  {
    v7 = dword_1C0361178;
  }
  if ( v7 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v7)
    || CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, dword_1C0361178 + 10000) )
  {
    v9 = 0;
    dword_1C0361178 = 0;
  }
  else
  {
    v9 = 1;
  }
  if ( *(int *)(SGDGetUserSessionState(v6) + 2864) > 0 )
  {
    v11 = SGDGetUserSessionState(v10);
    if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *(_DWORD *)(v11 + 2864))
      && !v9
      && (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 3LL) )
    {
      v12 = SGDGetUserSessionState(v10);
      EtwTraceIdleActionExpiration(2LL, *(unsigned int *)(v12 + 2864));
    }
  }
  if ( (*(_DWORD *)(SGDGetUserSessionState(v10) + 2952)
     || *(_DWORD *)(SGDGetUserSessionState(v13) + 2972)
     || *(_DWORD *)(SGDGetUserSessionState(v13) + 2976))
    && !v9 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v26) )
    {
      if ( !gpqForeground || (v15 = *(_QWORD *)(gpqForeground + 128LL)) == 0 )
      {
        *((_QWORD *)&v27 + 1) = v26;
LABEL_40:
        *(_QWORD *)&v27 = 5LL;
        QueuePowerRequest(&v27, 0LL);
        goto LABEL_41;
      }
    }
    else
    {
      if ( *(_DWORD *)(SGDGetUserSessionState(v14) + 2972) || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_41;
      if ( !gpqForeground || (v15 = *(_QWORD *)(gpqForeground + 128LL)) == 0 )
      {
        *((_QWORD *)&v27 + 1) = 17LL;
        goto LABEL_40;
      }
    }
    PostTransformableMessage(v15, 274, 61808, 2, 0);
  }
LABEL_41:
  if ( *(int *)(SGDGetUserSessionState(v13) + 2868) > 0 )
  {
    v17 = SGDGetUserSessionState(v16);
    if ( CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, *(_DWORD *)(v17 + 2868)) )
    {
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 4LL) )
      {
        v19 = SGDGetUserSessionState(v18);
        EtwTraceIdleActionExpiration(5LL, *(unsigned int *)(v19 + 2868));
      }
      *(_DWORD *)(SGDGetUserSessionState(v18) + 2868) = 0;
      LODWORD(v28) = 9;
      QueuePowerRequest(&v28, 0LL);
    }
  }
  if ( giScreenSaveTimeOutMs > 0 && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      v20 = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
      if ( v20 != CInputGlobals::GetLastInputTime(gpInputGlobals) )
      {
        EtwTraceIdleActionExpiration(3LL, giScreenSaveTimeOutMs);
        if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          PostWinlogonMessage(1027LL, 0LL);
      }
    }
    else
    {
      LODWORD(v28) = 6;
      QueuePowerRequest(&v28, 0LL);
    }
  }
  if ( *(int *)(SGDGetUserSessionState(v16) + 2872) > 0 )
  {
    v23 = *(_DWORD *)(SGDGetUserSessionState(v21) + 2872);
    if ( v23 > 0
      && (*(int *)(SGDGetUserSessionState(v22) + 2864) <= 0 || v23 < *(_DWORD *)(SGDGetUserSessionState(v24) + 2864))
      && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v23) )
    {
      if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 5LL) )
        EtwTraceIdleActionExpiration(4LL, (unsigned int)v23);
      if ( !(unsigned int)PowerIsDisplayRequired()
        && *(_DWORD *)(SGDGetUserSessionState(v25) + 3080) == 1
        && !(unsigned int)PowerIsDisplayBurstActive(0LL) )
      {
        v27 = 0LL;
        LODWORD(v27) = 7;
        QueuePowerRequest(&v27, 0LL);
      }
    }
  }
}
