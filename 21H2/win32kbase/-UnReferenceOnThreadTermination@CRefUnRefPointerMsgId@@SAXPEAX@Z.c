/*
 * XREFs of ?UnReferenceOnThreadTermination@CRefUnRefPointerMsgId@@SAXPEAX@Z @ 0x1C01E4B00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8A20 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::UnReferenceOnThreadTermination(__int64 a1)
{
  CTouchProcessor::UnreferenceMsgDataExternal((struct _DEVICE_OBJECT *)gpTouchProcessor, a1, 8u);
}
