/*
 * XREFs of ViIovIoBuildDeviceIoControlRequest_Exit @ 0x1405CFA80
 * Callers:
 *     <none>
 * Callees:
 *     ViSetIoBuildRequestFlag @ 0x1405CFB10 (ViSetIoBuildRequestFlag.c)
 */

__int64 __fastcall ViIovIoBuildDeviceIoControlRequest_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 80) )
    return ViSetIoBuildRequestFlag();
  return result;
}
