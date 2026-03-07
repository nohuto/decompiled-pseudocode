void __fastcall xxxProcessMousePromotionQueue(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rcx
  __int64 v3; // rcx
  struct tagMOUSE_PROMOTION_QUEUE *v4; // rsi
  __int64 v5; // rax
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  bool v9; // bl
  int v10; // ebx
  __int64 v11; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  v1 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 16312) )
  {
    v4 = (struct tagMOUSE_PROMOTION_QUEUE *)(SGDGetUserSessionState(v2) + 16184);
    if ( *(_QWORD *)v4 )
    {
      v5 = SGDGetUserSessionState(v3);
      *(_DWORD *)(v5 + 16320) &= ~1u;
      *(_QWORD *)(v5 + 16312) = gptiCurrent;
      for ( i = DequeueMousePromotionEntry(v4); ; i = DequeueMousePromotionEntry(v4) )
      {
        v13 = (__int64)i;
        if ( !i )
          break;
        v9 = (unsigned __int8)HasCapture()
          && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 864LL));
        if ( *(_DWORD *)(SGDGetUserSessionState(v8) + 15976) || (*(_DWORD *)(v13 + 44) & 0x20) != 0 && v9 )
        {
          v10 = 1;
          v1 = 1;
        }
        else
        {
          v10 = 0;
        }
        PushW32ThreadLock(v13, &v18, (__int64)SpbApcRundown);
        UserSessionSwitchLeaveCrit(v11);
        xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v13, v10);
        EnterCrit(1LL, 0LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v18;
        Win32FreePool((void *)v13);
      }
      if ( *(_DWORD *)(SGDGetUserSessionState(v7) + 15976) )
      {
        if ( !(unsigned __int8)IsInputThread(v15, v14, v16) )
        {
          xxxWaitForDITMouseInjectionFlush();
LABEL_20:
          *(_QWORD *)(SGDGetUserSessionState(v15) + 16312) = 0LL;
          return;
        }
      }
      else if ( v1 )
      {
        goto LABEL_20;
      }
      UserSessionSwitchLeaveCrit(v15);
      ProcessMouseEvent(v17);
      EnterCrit(1LL, 0LL);
      goto LABEL_20;
    }
  }
}
