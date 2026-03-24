/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018E384
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0190000 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD0C0 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C0196F74 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C01CFD2C (ApiSetPointerPromotionGetCurrentPointerId.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  CPointerInfoNode *v6; // rbx
  CPointerInfoNode *v7; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8906);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 19) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 31) & 4) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v4 = *((_DWORD *)a2 + 12);
  v5 = 0;
  v6 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= *((_QWORD *)a2 + 17) + 480 * (unsigned __int64)v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 8944);
    if ( (unsigned int)CPointerInfoNode::IsValid(v6)
      && (*(_DWORD *)v6 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v7) || CurrentPointerId == *((_WORD *)v6 + 86)) )
    {
      break;
    }
    v4 = *((_DWORD *)a2 + 12);
    ++v5;
    v6 = (CPointerInfoNode *)((char *)v6 + 480);
    if ( v5 >= v4 )
      return 0LL;
  }
  return v6;
}
