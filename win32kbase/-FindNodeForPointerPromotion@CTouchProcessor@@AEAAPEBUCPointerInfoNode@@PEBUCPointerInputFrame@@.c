/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01F161C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01FBEE4 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C02459A8 (ApiSetPointerPromotionGetCurrentPointerId.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  CPointerInfoNode *v6; // rbx
  __int64 v7; // r8
  CPointerInfoNode *v8; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9600);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 57) & 4) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v4 = *((_DWORD *)a2 + 12);
  v5 = 0;
  v6 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
  if ( !v4 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 30);
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v7 + 480 * (unsigned __int64)v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9638);
    if ( (unsigned int)CPointerInfoNode::IsValid(v6)
      && (*(_DWORD *)v6 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v8) || CurrentPointerId == *((_WORD *)v6 + 86)) )
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
