/*
 * XREFs of ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x1C0214A60
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0207790 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::UnReferenceOnThreadTermination(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  CTouchProcessor::UnreferenceMsgDataExternal(*(struct _KTHREAD ***)(v5 + 3424), a1, 8);
}
