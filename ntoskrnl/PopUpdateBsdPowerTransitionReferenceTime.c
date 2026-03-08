/*
 * XREFs of PopUpdateBsdPowerTransitionReferenceTime @ 0x14073A984
 * Callers:
 *     PopBsdHandleRequest @ 0x1402B8B24 (PopBsdHandleRequest.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x1402B8B70 (RtlComputeCrc32.c)
 */

__int64 PopUpdateBsdPowerTransitionReferenceTime()
{
  __int64 result; // rax

  *(_QWORD *)&xmmword_140C6A3D0 = MEMORY[0xFFFFF78000000014];
  result = RtlComputeCrc32(0, (char *)&xmmword_140C6A3D0, 8LL);
  DWORD2(xmmword_140C6A3D0) = result;
  return result;
}
