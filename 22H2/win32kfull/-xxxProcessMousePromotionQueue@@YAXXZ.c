/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C01F8818
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C009BA60 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F8A18 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F8C9C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C01ACF24 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C01F7C04 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01F8E18 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-18h]

  v22 = 0LL;
  v23 = 0LL;
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
        v16 = (__int64)i;
        if ( !i )
          break;
        v9 = (unsigned __int8)HasCapture()
          && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 888LL));
        if ( *(_DWORD *)(SGDGetUserSessionState(v8) + 15976) || (*(_DWORD *)(v16 + 44) & 0x20) != 0 && v9 )
        {
          v10 = 1;
          v1 = 1;
        }
        else
        {
          v10 = 0;
        }
        PushW32ThreadLock(v16, &v22, (__int64)SpbApcRundown);
        UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
        xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v16, v10);
        EnterCrit(1LL, 0LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v22;
        Win32FreePool((void *)v16);
      }
      if ( *(_DWORD *)(SGDGetUserSessionState(v7) + 15976) )
      {
        if ( !(unsigned __int8)IsInputThread(v18, v17, v19) )
        {
          xxxWaitForDITMouseInjectionFlush();
LABEL_20:
          *(_QWORD *)(SGDGetUserSessionState(v18) + 16312) = 0LL;
          return;
        }
      }
      else if ( v1 )
      {
        goto LABEL_20;
      }
      UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
      ProcessMouseEvent(v21);
      EnterCrit(1LL, 0LL);
      goto LABEL_20;
    }
  }
}
