/*
 * XREFs of ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1C007C920
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  do
    LODWORD(a1) = _InterlockedIncrement((volatile signed __int32 *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3264));
  while ( !(_DWORD)a1 );
  return (unsigned int)a1;
}
