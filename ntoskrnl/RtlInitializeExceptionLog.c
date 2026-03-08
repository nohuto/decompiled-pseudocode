/*
 * XREFs of RtlInitializeExceptionLog @ 0x140B93980
 * Callers:
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)ExAllocatePool2(64LL, 0x11620uLL, 0x67626445u);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  return result;
}
