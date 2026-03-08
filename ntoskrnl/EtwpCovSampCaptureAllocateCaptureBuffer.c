/*
 * XREFs of EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1409EDAB0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureAllocateCaptureBuffer(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  _QWORD *v5; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(8 * *(_DWORD *)(a1 + 1296) + 64), 1450669125LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x50uLL);
    v5[6] = a2;
    v5[2] = 3401298175LL;
    *((_WORD *)v5 + 30) = *(_WORD *)(a1 + 1296);
  }
  return v5;
}
