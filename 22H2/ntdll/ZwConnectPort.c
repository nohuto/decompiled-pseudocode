/*
 * XREFs of ZwConnectPort @ 0x18009E8D0
 * Callers:
 *     CsrpConnectToServer @ 0x180008FE4 (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 160LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
