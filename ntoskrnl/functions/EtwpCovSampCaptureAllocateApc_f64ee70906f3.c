_QWORD *__fastcall EtwpCovSampCaptureAllocateApc(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v4; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 160LL, 1450669125LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0xA0uLL);
    v4[6] = a2;
    v4[2] = 2882190508LL;
  }
  return v4;
}
