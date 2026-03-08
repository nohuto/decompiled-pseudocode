/*
 * XREFs of ViDmaUninit @ 0x140ADA600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *ViDmaUninit())(_QWORD, _QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  ViVerifyDma = 0;
  if ( (unsigned int)HalPrivateDispatchTable >= 0x3A )
  {
    result = VfRealHalAllocateMapRegisters;
    off_140C01A00[0] = (__int64 (__fastcall *)())VfRealHalAllocateMapRegisters;
  }
  ViDoubleBufferDma = 0;
  return result;
}
