/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01D2FFC
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01D6700 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C01CDE88 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  int v3; // r14d
  _DWORD *v5; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // edi
  unsigned int i; // esi
  CPointerInfoNode *v9; // rcx

  v3 = a3;
  v5 = (_DWORD *)(*((_QWORD *)a2 + 31) + 160LL * (unsigned int)a3);
  if ( *v5 != (_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = *((_DWORD *)a2 + 12);
  v7 = 0;
  for ( i = 0; i < v6; ++i )
  {
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480LL * i);
    if ( *((_DWORD *)v9 + 2) == v3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
    {
      v7 = 1;
      break;
    }
  }
  v5[35] = (8 * v7) | v5[35] & 0xFFFFFFF7;
  return v7;
}
