/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     xxxSetForegroundThread @ 0x1C00052F0 (xxxSetForegroundThread.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 * Callees:
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetNewForegroundPti @ 0x1C00A87C0 (SetNewForegroundPti.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00A9418 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
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
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _OWORD v18[5]; // [rsp+20h] [rbp-39h] BYREF
  __int128 v19; // [rsp+70h] [rbp+17h] BYREF
  __int128 v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+37h]

  v2 = gptiForeground;
  v5 = gptiForeground;
  if ( a1 == (struct tagTHREADINFO *)gptiForeground )
    return;
  if ( a1 )
  {
    if ( gptiForeground && *((_QWORD *)a1 + 53) == *(_QWORD *)(gptiForeground + 424LL) )
      goto LABEL_23;
    v6 = *(unsigned int *)(*((_QWORD *)a1 + 53) + 56LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( gptiForeground )
    v5 = *(unsigned int *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
  EtwTraceFocusedProcessChange(v5, v6);
  v19 = 0LL;
  v21 = 0;
  v20 = 0LL;
  if ( (unsigned int)CitProcessForegroundChange(a1, a2, gptiForeground, &v19) )
  {
    if ( a1 && (v7 = *((_QWORD *)a1 + 57)) != 0 && *(_QWORD *)(v7 + 280) )
      DWORD1(v19) = *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL);
    else
      DWORD1(v19) = 0;
    if ( gptiForeground && (v8 = *(_QWORD *)(gptiForeground + 456LL)) != 0 && *(_QWORD *)(v8 + 280) )
      LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
    else
      LODWORD(v19) = 0;
    memset(v18, 0, sizeof(v18));
    DWORD2(v18[0]) = 8;
    v18[1] = v19;
    v18[2] = v20;
    LODWORD(v18[3]) = v21;
    anonymous_namespace_::NotifyIAMWindowManagementEvent(v18);
  }
  if ( a1 )
  {
    ForegroundBoost::SetForegroundPriority(a1, 1LL);
    *(_QWORD *)(*((_QWORD *)a1 + 53) + 272LL) = PsChargeProcessWakeCounter(**((_QWORD **)a1 + 53), 0LL, 0LL);
  }
  if ( !gptiForeground )
    goto LABEL_51;
  ForegroundBoost::SetForegroundPriority(gptiForeground, 0LL);
  v2 = gptiForeground;
  v9 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL);
  if ( v9 )
  {
    PsReleaseProcessWakeCounter(v9, 1LL);
    v2 = gptiForeground;
    *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL) = 0LL;
  }
LABEL_23:
  if ( !*(_QWORD *)v2 )
  {
LABEL_51:
    v10 = 0LL;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v2 + 440LL);
LABEL_25:
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
      *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 1084LL) = (MEMORY[0xFFFFF78000000320]
                                                                 * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
    if ( *v13 )
      DisableDelegation();
  }
  SetNewForegroundPti(a1);
  if ( gSessionId != gServiceSessionId )
  {
    memset(v18, 0, 40);
    if ( gptiForeground )
    {
      LODWORD(v18[0]) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
      DWORD1(v18[0]) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
      if ( a2 )
        *(_QWORD *)&v18[1] = *(_QWORD *)a2;
      else
        *(_QWORD *)&v18[1] = 0LL;
    }
    SendMessageTo(3LL, v18);
  }
  if ( gptiForeground )
  {
    v14 = *(_QWORD *)(gptiForeground + 440LL);
    if ( v14 )
    {
      if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v14 )
      {
        v19 = 0LL;
        *(_QWORD *)&v20 = 0LL;
        ThreadLock(v10, (__int64 *)&v19);
        xxxChangeForegroundKeyboardTable(v10, *(_QWORD *)(gptiForeground + 440LL));
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  gafAsyncKeyStateRecentDown[0] = 0LL;
  gafAsyncKeyStateRecentDown[1] = 0LL;
  ++*(_DWORD *)(gpsi + 6988LL);
}
