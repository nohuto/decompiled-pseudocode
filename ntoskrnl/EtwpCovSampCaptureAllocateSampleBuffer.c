_QWORD *__fastcall EtwpCovSampCaptureAllocateSampleBuffer(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *Pool2; // rax
  _QWORD *v3; // rbx

  v1 = *(_DWORD *)(a1 + 1300);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v1, 1450669125LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x60uLL);
    v3[2] = 1342288122LL;
    *((_DWORD *)v3 + 16) = v1 - 72;
  }
  return v3;
}
