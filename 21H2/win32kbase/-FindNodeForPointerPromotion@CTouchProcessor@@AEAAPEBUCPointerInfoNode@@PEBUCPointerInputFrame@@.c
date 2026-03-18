/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01C5678
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE6CC (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C020E88C (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int16 CurrentPointerId; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  CPointerInfoNode *v10; // rbx
  unsigned __int64 v11; // rcx
  CPointerInfoNode *v12; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 57) & 4) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  v10 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *((_QWORD *)a2 + 30) + 480LL * v8;
    if ( (unsigned __int64)v10 >= v11 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v5, v7);
    if ( (unsigned int)CPointerInfoNode::IsValid(v10)
      && (*(_DWORD *)v10 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v12) || CurrentPointerId == *((_WORD *)v10 + 86)) )
    {
      break;
    }
    v8 = *((_DWORD *)a2 + 12);
    ++v9;
    v10 = (CPointerInfoNode *)((char *)v10 + 480);
    if ( v9 >= v8 )
      return 0LL;
  }
  return v10;
}
