/*
 * XREFs of ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1C01FC40C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01F3D8C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@H@Z @ 0x1C0205FD8 (-ShouldGenerateMessagesForNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNod.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2CB2 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::NodeMatchesMTGeneration(CTouchProcessor *this, const struct CPointerInfoNode *a2)
{
  BOOL v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r9d
  int v6; // eax

  v2 = CPointerInfoNode::IsForManipulationThread(a2);
  v5 = 0;
  if ( v2 == (v4 != 0) )
  {
    if ( !v4 )
      return 1;
    v6 = *(_DWORD *)(v3 + 4);
    if ( (v6 & 0x200) != 0 && (v6 & 0x400) == 0 )
      return 1;
  }
  return v5;
}
