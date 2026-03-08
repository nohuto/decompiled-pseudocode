/*
 * XREFs of IopGetThreadActiveConsoleId @ 0x140944B3C
 * Callers:
 *     IoRaiseHardError @ 0x140554680 (IoRaiseHardError.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402637A0 (PsGetThreadServerSilo.c)
 *     PsGetServerSiloActiveConsoleId @ 0x1405A148C (PsGetServerSiloActiveConsoleId.c)
 */

__int64 __fastcall IopGetThreadActiveConsoleId(__int64 a1)
{
  __int64 ThreadServerSilo; // rax

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  return PsGetServerSiloActiveConsoleId(ThreadServerSilo);
}
