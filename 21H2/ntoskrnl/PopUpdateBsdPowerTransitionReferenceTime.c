/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E1784
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402A2690 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C50598 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C50598, 8u);
  DWORD2(xmmword_140C50598) = result;
  return result;
}
