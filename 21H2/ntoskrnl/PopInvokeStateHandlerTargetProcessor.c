/*
 * XREFs of PopInvokeStateHandlerTargetProcessor @ 0x140A4B520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 */

void __fastcall PopInvokeStateHandlerTargetProcessor(
        struct _KDPC *Dpc,
        union _SLIST_HEADER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v5; // r8
  struct _SLIST_ENTRY v6[10]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v6, 0, sizeof(v6));
  RtlpInterlockedPushEntrySList(DeferredContext + 4, &v6[9]);
  do
    PopHandleNextState(DeferredContext, v6, v5);
  while ( LODWORD(v6[0].Next) != 16 );
}
