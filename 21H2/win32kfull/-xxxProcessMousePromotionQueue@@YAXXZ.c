/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0214098
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00F3A00 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021424C (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0214458 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010756C (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C02135E4 (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C02145A0 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // cl
  int v7; // esi
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v0 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !qword_1C0335D90 && qword_1C0335D10 )
  {
    dword_1C0335D98 &= ~1u;
    qword_1C0335D90 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0335D10);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0335D10) )
    {
      v10 = (__int64)i;
      if ( !i )
        break;
      v6 = (unsigned __int8)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL));
      if ( glDitMouseHandling || (*(_DWORD *)(v10 + 44) & 0x20) != 0 && v6 )
      {
        v7 = 1;
        v0 = 1;
      }
      else
      {
        v7 = 0;
      }
      PushW32ThreadLock(v10, &v11, (__int64)SpbApcRundown);
      UserSessionSwitchLeaveCrit(v8);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v10, v7);
      EnterCrit(1LL, 0LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v11;
      Win32FreePool(v10);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4, v5) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_20:
        qword_1C0335D90 = 0LL;
        return;
      }
    }
    else if ( v0 )
    {
      goto LABEL_20;
    }
    UserSessionSwitchLeaveCrit(v3);
    ProcessMouseEvent();
    EnterCrit(1LL, 0LL);
    goto LABEL_20;
  }
}
