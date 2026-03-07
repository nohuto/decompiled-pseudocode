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
