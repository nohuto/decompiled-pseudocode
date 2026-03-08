/*
 * XREFs of ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C02018D0
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01FBF9C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::RevalidateFrameProcessing(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        const struct CPointerInfoNode *a4,
        int a5)
{
  unsigned int v5; // ebx
  CPointerInfoNode *v6; // rcx
  struct tagTHREADINFO *v7; // r10

  v5 = 0;
  if ( a3 && (*((_DWORD *)a2 + 318) & 0x2000) == 0 && (*((_DWORD *)a2 + 319) & 0x40) == 0
    || !(unsigned int)CPointerInfoNode::IsValid(a4) )
  {
    return 0LL;
  }
  LOBYTE(v5) = ((unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(v6, v7) != 0) == (a5 != 0);
  return v5;
}
