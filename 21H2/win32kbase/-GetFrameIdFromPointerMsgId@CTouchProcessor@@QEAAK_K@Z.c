/*
 * XREFs of ?GetFrameIdFromPointerMsgId@CTouchProcessor@@QEAAK_K@Z @ 0x1C00E7FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetFrameIdFromPointerMsgId(CTouchProcessor *this, unsigned __int64 a2)
{
  return *((unsigned int *)CTouchProcessor::GetMsgData(this, a2) + 7);
}
