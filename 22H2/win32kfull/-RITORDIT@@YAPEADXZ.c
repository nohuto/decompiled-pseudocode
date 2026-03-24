/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C010BBE8
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C010BB74 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 */

char *RITORDIT(void)
{
  bool v0; // zf
  char *result; // rax

  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit )
    return "Rit";
  v0 = (unsigned __int8)IsInputThread() == 0;
  result = "Mit";
  if ( v0 )
    return (char *)&unk_1C02F5020;
  return result;
}
