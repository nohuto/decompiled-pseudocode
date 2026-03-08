/*
 * XREFs of ViCtxAllocateIsrContext @ 0x140AE1A64
 * Callers:
 *     VerifierIoConnectInterrupt @ 0x140AE1710 (VerifierIoConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x140AE1E6C (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall ViCtxAllocateIsrContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExAllocatePool2(64LL, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
