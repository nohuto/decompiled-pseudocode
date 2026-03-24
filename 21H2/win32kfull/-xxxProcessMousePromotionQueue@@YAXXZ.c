/*
 * XREFs of ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C02193F0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00FD920 (xxxCleanupThreadPointerInputInfo.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C0219628 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C0219834 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C011CBA4 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C02187DC (-DequeueMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C021997C (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 */

void xxxProcessMousePromotionQueue(void)
{
  int v0; // edi
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // cl
  int v6; // esi
  __int64 v7; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rbx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v0 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( !qword_1C033ABD0 && qword_1C033AB50 )
  {
    dword_1C033ABD8 &= ~1u;
    qword_1C033ABD0 = gptiCurrent;
    for ( i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB50);
          ;
          i = DequeueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C033AB50) )
    {
      v9 = (__int64)i;
      if ( !i )
        break;
      v5 = (unsigned __int8)HasCapture()
        && !(unsigned int)CheckIntegrityAccessToCapture(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL));
      if ( glDitMouseHandling || (*(_DWORD *)(v9 + 44) & 0x20) != 0 && v5 )
      {
        v6 = 1;
        v0 = 1;
      }
      else
      {
        v6 = 0;
      }
      PushW32ThreadLock(v9, &v10, (__int64)SpbApcRundown);
      if ( gdwInAtomicOperation )
      {
        v7 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v7);
      xxxSendMousePromotion((const struct tagMOUSE_PROMOTION_ENTRY *)v9, v6);
      EnterCrit(0LL, 1LL);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v10;
      Win32FreePool((void *)v9);
    }
    if ( glDitMouseHandling )
    {
      if ( !(unsigned __int8)IsInputThread(v3, v2, v4) )
      {
        xxxWaitForDITMouseInjectionFlush();
LABEL_26:
        qword_1C033ABD0 = 0LL;
        return;
      }
    }
    else
    {
      if ( v0 )
        goto LABEL_26;
      if ( gdwInAtomicOperation )
      {
        v3 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    UserSessionSwitchLeaveCrit(v3);
    ProcessMouseEvent();
    EnterCrit(0LL, 1LL);
    goto LABEL_26;
  }
}
