/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x14089431C
 * Callers:
 *     IoRaiseHardError @ 0x1405058F0 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x140580EB0 (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
