/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140947B5C
 * Callers:
 *     IoRaiseHardError @ 0x140556B20 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14028C070 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405A397C (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
