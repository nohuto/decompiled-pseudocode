/*
 * XREFs of ?ReevaluateQFrameHasDelegation@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C019AB08
 * Callers:
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C019D8EC (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C0196628 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  unsigned int v7; // r15d
  unsigned int v8; // esi
  CPointerInfoNode *v9; // rcx
  __int64 result; // rax

  v5 = 0;
  v6 = (_DWORD *)(*((_QWORD *)a2 + 18) + 160LL * a3);
  if ( *v6 != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14545);
  v7 = *((_DWORD *)a2 + 12);
  v8 = 0;
  do
  {
    if ( v8 >= v7 )
      break;
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 17) + 480LL * v8);
    if ( *((_DWORD *)v9 + 2) == a3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
      v5 = 1;
    ++v8;
  }
  while ( !v5 );
  result = v5;
  v6[35] ^= (v6[35] ^ (8 * v5)) & 8;
  return result;
}
