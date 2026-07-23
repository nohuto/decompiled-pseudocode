/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E18E4
 * Callers:
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14021FAD0 (RtlComputeCrc32.c)
 */

ULONG32 PopUpdateBsdPowerTransitionReferenceTime()
{
  ULONG32 result; // eax

  *(_QWORD *)&xmmword_140C505A8 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, &xmmword_140C505A8, 8u);
  DWORD2(xmmword_140C505A8) = result;
  return result;
}
