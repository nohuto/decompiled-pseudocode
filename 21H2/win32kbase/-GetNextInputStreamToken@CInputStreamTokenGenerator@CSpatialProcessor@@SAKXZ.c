/*
 * XREFs of ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1C01E5200
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     <none>
 */

__int64 CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken(void)
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&CSpatialProcessor::CInputStreamTokenGenerator::nextInputStreamToken);
  while ( !(_DWORD)result );
  return result;
}
