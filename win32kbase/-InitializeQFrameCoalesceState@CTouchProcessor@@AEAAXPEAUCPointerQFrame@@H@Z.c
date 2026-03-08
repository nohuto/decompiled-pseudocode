/*
 * XREFs of ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00F2C5A
 * Callers:
 *     ?InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z @ 0x1C00F2C0A (-InitializeQFrame@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K_KVCInputDest@@HK@Z.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01F1344 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0205D38 (-SetupQFramePostMT@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KV.c)
 * Callees:
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C02069F8 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::InitializeQFrameCoalesceState(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        int a3)
{
  unsigned int v4; // eax

  v4 = *((_DWORD *)a2 + 35) & 0xFFFFFFFA | 1;
  if ( a3 )
  {
    *((_DWORD *)a2 + 36) = 1;
    *((_DWORD *)a2 + 35) = v4 | 2;
  }
  else
  {
    *((_DWORD *)a2 + 35) = *((_DWORD *)a2 + 35) & 0xFFFFFFF8 | 1;
    CTouchProcessor::TrackCoalesceOnArrival(this, a2, 10LL);
  }
  *((_DWORD *)a2 + 37) = 0;
}
