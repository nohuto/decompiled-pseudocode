__int64 HalpProcessorPrepareForIdle()
{
  void (*v1)(void); // rax

  if ( SLODWORD(KeGetCurrentPrcb()->HalReserved[2]) > 0 && (KeGetCurrentPrcb()->HalReserved[2] & 1) == 0 )
  {
    v1 = (void (*)(void))HalpProfileInterface[9];
    if ( v1 )
      v1();
  }
  return 0LL;
}
