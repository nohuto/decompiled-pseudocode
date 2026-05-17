/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1800A08D0
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x180053F24 (RtlpGuardGrantSuppressedCallAccess.c)
 *     LdrpInitializeNode @ 0x18006D124 (LdrpInitializeNode.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 416LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
