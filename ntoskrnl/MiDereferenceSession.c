/*
 * XREFs of MiDereferenceSession @ 0x140791B70
 * Callers:
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x14067E7A0 (MiDereferenceSessionFinal.c)
 */

unsigned __int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  unsigned __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)Process[1].Affinity.StaticBitmap[25],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
