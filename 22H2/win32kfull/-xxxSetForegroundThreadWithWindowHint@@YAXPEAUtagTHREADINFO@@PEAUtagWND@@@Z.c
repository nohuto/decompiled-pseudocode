/*
 * XREFs of ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034B54
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00346D4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetForegroundThread @ 0x1C01D25F0 (xxxSetForegroundThread.c)
 * Callees:
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0035454 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C003E18C (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxSetForegroundThreadWithWindowHint(struct tagTHREADINFO *this, struct tagWND *a2, struct tagWND *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // r8
  unsigned int DLT; // eax
  __int64 v11; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v16; // [rsp+48h] [rbp-31h]
  __int128 v17; // [rsp+58h] [rbp-21h]
  __int64 v18; // [rsp+68h] [rbp-11h]
  __int128 v19; // [rsp+70h] [rbp-9h] BYREF
  __int128 v20; // [rsp+80h] [rbp+7h]
  __int128 v21; // [rsp+90h] [rbp+17h] BYREF
  __int128 v22; // [rsp+A0h] [rbp+27h]
  __int64 v23; // [rsp+B0h] [rbp+37h]

  if ( this != (struct tagTHREADINFO *)gptiForeground )
  {
    if ( !this || !gptiForeground || *((_QWORD *)this + 53) != *(_QWORD *)(gptiForeground + 424LL) )
    {
      EtwTraceFocusedProcessChange();
      v19 = 0LL;
      v20 = 0LL;
      if ( (unsigned int)CitProcessForegroundChange(this, a2, gptiForeground, &v19) )
      {
        if ( this && (v5 = *((_QWORD *)this + 57)) != 0 && *(_QWORD *)(v5 + 288) )
          DWORD1(v19) = *(_DWORD *)(*((_QWORD *)this + 53) + 56LL);
        else
          DWORD1(v19) = 0;
        if ( gptiForeground && (v6 = *(_QWORD *)(gptiForeground + 456LL)) != 0 && *(_QWORD *)(v6 + 288) )
          LODWORD(v19) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
        else
          LODWORD(v19) = 0;
        v15[1] = 9LL;
        v18 = 0LL;
        v16 = v19;
        v15[0] = 0LL;
        v17 = v20;
        anonymous_namespace_::NotifyIAMWindowManagementEvent((unsigned int)v15);
      }
      if ( this )
        *(_QWORD *)(*((_QWORD *)this + 53) + 272LL) = PsChargeProcessWakeCounter(
                                                        **((_QWORD **)this + 53),
                                                        0LL,
                                                        0LL,
                                                        1LL);
      if ( gptiForeground )
      {
        v7 = *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL);
        if ( v7 )
        {
          PsReleaseProcessWakeCounter(v7, 1LL);
          *(_QWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 272LL) = 0LL;
        }
      }
    }
    PriorityBoostCUI::TransitionForegroundPriority(this, a2, a3);
    if ( gptiForeground )
      v8 = *(_QWORD *)(gptiForeground + 440LL);
    else
      v8 = 0LL;
    EtwTraceFocusChange(this);
    v9 = (_QWORD *)gptiForeground;
    if ( gptiForeground )
    {
      if ( !this || *(_QWORD *)(gptiForeground + 424LL) != *((_QWORD *)this + 53) )
      {
        v9 = (_QWORD *)gptiForeground;
        *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 1084LL) = (MEMORY[0xFFFFF78000000320]
                                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      if ( *v9 )
        DisableDelegation();
    }
    DLT = DLT_FOREGROUND::getDLT();
    GetDomainLockRef(DLT);
    gptiForeground = this;
    if ( this && *(_DWORD *)(*((_QWORD *)this + 53) + 56LL) == gpidLogonUI )
      gfEnableHexNumpad |= 2u;
    else
      gfEnableHexNumpad &= ~2u;
    if ( gSessionId != gServiceSessionId && !gProtocolType )
    {
      v23 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      if ( gptiForeground )
      {
        LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 56LL);
        DWORD1(v21) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
        if ( a2 )
          *(_QWORD *)&v22 = *(_QWORD *)a2;
        else
          *(_QWORD *)&v22 = 0LL;
      }
      SendMessageTo(3LL, &v21);
    }
    if ( gptiForeground )
    {
      v11 = *(_QWORD *)(gptiForeground + 440LL);
      if ( v11 )
      {
        if ( (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) != 0 || !gspklGlobalActive || gspklGlobalActive == v11 )
        {
          v14[2] = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v14[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v14;
          v14[1] = v8;
          if ( v8 )
            HMLockObject(v8);
          xxxChangeForegroundKeyboardTable(v8, *(_QWORD *)(gptiForeground + 440LL));
          ThreadUnlock1(v13);
        }
      }
    }
    gafAsyncKeyStateRecentDown[0] = 0LL;
    gafAsyncKeyStateRecentDown[1] = 0LL;
    ++*(_DWORD *)(gpsi + 6988LL);
  }
}
