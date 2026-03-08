/*
 * XREFs of PsRegisterPicoProvider @ 0x1409B2430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsRegisterPicoProvider(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 != 88LL || *a2 != 96LL )
    return 3221225476LL;
  if ( (*(_DWORD *)(a1 + 72) & 0xFFE00000) != 0 || (*(_DWORD *)(a1 + 76) & 0xFFE00000) != 0 )
    return 3221225485LL;
  result = 0LL;
  if ( PspPicoRegistrationDisabled )
    return 3221225865LL;
  PspPicoProviderRoutines = *(_OWORD *)a1;
  xmmword_140C37D30 = *(_OWORD *)(a1 + 16);
  xmmword_140C37D40 = *(_OWORD *)(a1 + 32);
  xmmword_140C37D50 = *(_OWORD *)(a1 + 48);
  xmmword_140C37D60 = *(_OWORD *)(a1 + 64);
  qword_140C37D70 = *(_QWORD *)(a1 + 80);
  PspPicoProviderRanges = _mm_srli_si128((__m128i)xmmword_140C37D50, 8).m128i_u64[0];
  a2[1] = PspCreatePicoProcess;
  a2[2] = PspCreatePicoThread;
  a2[3] = PspGetPicoProcessContext;
  a2[4] = PspGetPicoThreadContext;
  a2[5] = PspPicoGetContextThreadEx;
  a2[6] = PspPicoSetContextThreadEx;
  a2[7] = PspTerminateThreadByPointer;
  a2[8] = PsResumeThread;
  a2[9] = PspSetPicoThreadDescriptorBase;
  a2[10] = PsSuspendThread;
  a2[11] = PspTerminatePicoProcess;
  *a2 = 96LL;
  return result;
}
