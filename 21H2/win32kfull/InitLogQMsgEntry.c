/*
 * XREFs of InitLogQMsgEntry @ 0x1C01D9AB0
 * Callers:
 *     LogQMsg @ 0x1C01D9BDC (LogQMsg.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

int __fastcall InitLogQMsgEntry(_OWORD *a1, __int64 a2)
{
  __int64 v4; // rax

  *(_DWORD *)(a2 + 160) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_DWORD *)(a2 + 164) = (unsigned int)PsGetCurrentThreadId();
  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  *(_OWORD *)(a2 + 112) = a1[7];
  *(_OWORD *)(a2 + 128) = a1[8];
  *(_OWORD *)(a2 + 144) = a1[9];
  memset((void *)(a2 + 176), 0, 8LL * DWORD1(xmmword_1C03319E0));
  *(_DWORD *)(a2 + 168) = 0;
  if ( (DWORD2(xmmword_1C03319E0) & 0xFFFFFFFD) == 0 )
    *(_DWORD *)(a2 + 168) = RtlWalkFrameChain((PVOID *)(a2 + 176), DWORD1(xmmword_1C03319E0), 0);
  LODWORD(v4) = DWORD2(xmmword_1C03319E0) - 1;
  if ( (unsigned int)(DWORD2(xmmword_1C03319E0) - 1) <= 1 )
  {
    v4 = *(int *)(a2 + 168);
    if ( (int)v4 < SDWORD1(xmmword_1C03319E0) )
    {
      LODWORD(v4) = RtlWalkFrameChain((PVOID *)(a2 + 8 * (v4 + 22)), DWORD1(xmmword_1C03319E0) - v4, 1u);
      *(_DWORD *)(a2 + 168) += v4;
    }
  }
  return v4;
}
