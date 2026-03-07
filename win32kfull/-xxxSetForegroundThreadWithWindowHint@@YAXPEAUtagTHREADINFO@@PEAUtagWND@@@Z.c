void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *a1, struct tagWND *a2)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned int ThreadId; // edi
  unsigned int v12; // eax
  _QWORD *v13; // r8
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int128 v25; // [rsp+20h] [rbp-39h] BYREF
  __int128 v26; // [rsp+30h] [rbp-29h]
  __int128 v27; // [rsp+40h] [rbp-19h]
  int v28; // [rsp+50h] [rbp-9h]
  __int128 v29; // [rsp+70h] [rbp+17h] BYREF
  __int128 v30; // [rsp+80h] [rbp+27h]
  int v31; // [rsp+90h] [rbp+37h]

  v2 = gptiForeground;
  v5 = gptiForeground;
  if ( a1 == (struct tagTHREADINFO *)gptiForeground )
    return;
  if ( !a1 )
  {
    v6 = 0LL;
    goto LABEL_7;
  }
  if ( !gptiForeground || *((_QWORD *)a1 + 53) != *(_QWORD *)(gptiForeground + 424LL) )
  {
    v6 = *(unsigned int *)(*((_QWORD *)a1 + 53) + 56LL);
LABEL_7:
    if ( gptiForeground )
      v5 = *(unsigned int *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
    EtwTraceFocusedProcessChange(v5, v6);
    v29 = 0LL;
    v31 = 0;
    v30 = 0LL;
    if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v29) )
    {
      if ( a1 && (v7 = *((_QWORD *)a1 + 57)) != 0 && *(_QWORD *)(v7 + 280) )
        DWORD1(v29) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL);
      else
        DWORD1(v29) = 0;
      if ( gptiForeground && (v8 = *(_QWORD *)(gptiForeground + 456LL)) != 0 && *(_QWORD *)(v8 + 280) )
        LODWORD(v29) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
      else
        LODWORD(v29) = 0;
      memset_0(&v25, 0, 0x50uLL);
      DWORD2(v25) = 8;
      v26 = v29;
      v27 = v30;
      v28 = v31;
      anonymous_namespace_::NotifyIAMWindowManagementEvent(&v25, 0LL);
    }
    if ( a1 )
    {
      ForegroundBoost::SetForegroundPriority(a1, 1LL);
      *(_QWORD *)(*((_QWORD *)a1 + 53) + 272LL) = PsChargeProcessWakeCounter(**((_QWORD **)a1 + 53), 0LL, 0LL, 1LL);
    }
    v2 = gptiForeground;
    if ( gptiForeground )
    {
      ForegroundBoost::SetForegroundPriority(gptiForeground, 0LL);
      v2 = gptiForeground;
      v9 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL);
      if ( v9 )
      {
        PsReleaseProcessWakeCounter(v9, 1LL);
        v2 = gptiForeground;
        *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)v2 )
    v10 = *(_QWORD *)(*(_QWORD *)v2 + 440LL);
  else
    v10 = 0LL;
  if ( a1 )
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
  else
    ThreadId = 0;
  if ( gptiForeground )
    v12 = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
  else
    v12 = 0;
  EtwTraceFocusChange(v12, ThreadId);
  v13 = (_QWORD *)gptiForeground;
  if ( gptiForeground )
  {
    if ( !a1 || *(_QWORD *)(gptiForeground + 424LL) != *((_QWORD *)a1 + 53) )
    {
      v13 = (_QWORD *)gptiForeground;
      *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 1068LL) = (MEMORY[0xFFFFF78000000320]
                                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
    if ( *v13 )
    {
      if ( (unsigned int)Feature_KIDV2__private_IsEnabledDeviceUsage() )
      {
        KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
        if ( KeyboardDelegationTargetQ )
        {
          v15 = *(_QWORD *)(KeyboardDelegationTargetQ + 120);
          if ( v15 )
            zzzDelegateInputFocusLostWindowEvent(v15, 14LL);
        }
      }
      DisableDelegation();
    }
  }
  SetNewForegroundPti(a1);
  if ( *(_DWORD *)SGDGetUserSessionState(v16) != gServiceSessionId )
  {
    *(_QWORD *)&v27 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    if ( gptiForeground )
    {
      LODWORD(v25) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
      DWORD1(v25) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
      if ( a2 )
        *(_QWORD *)&v26 = *(_QWORD *)a2;
      else
        *(_QWORD *)&v26 = 0LL;
    }
    SendMessageTo(2LL, &v25);
  }
  v17 = gptiForeground;
  if ( gptiForeground )
  {
    if ( *(_QWORD *)(gptiForeground + 440LL) )
    {
      v18 = HIDWORD(gpdwCPUserPreferencesMask);
      if ( (v18 & 0x80u) != 0LL
        || !*(_QWORD *)(SGDGetUserSessionState(v18) + 13912)
        || (v20 = SGDGetUserSessionState(v19),
            v17 = gptiForeground,
            *(_QWORD *)(v20 + 13912) == *(_QWORD *)(gptiForeground + 440LL)) )
      {
        v29 = 0LL;
        *(_QWORD *)&v30 = 0LL;
        ThreadLock(v10, &v29);
        xxxChangeForegroundKeyboardTable(v10, *(_QWORD *)(gptiForeground + 440LL), 0LL);
        ThreadUnlock1(v22, v21, v23);
      }
    }
  }
  v24 = SGDGetUserSessionState(v17);
  *(_OWORD *)(v24 + 14120) = 0LL;
  *(_OWORD *)(v24 + 14136) = 0LL;
  ++*(_DWORD *)(gpsi + 6988LL);
}
