/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E17D4
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F76F4 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402FAEE0 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140C50598 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140C50598, 8u);
  DWORD2(xmmword_140C50598) = result;
  return result;
}
