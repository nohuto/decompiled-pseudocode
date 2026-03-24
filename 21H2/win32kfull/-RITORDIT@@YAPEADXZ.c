/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x1C010BF68
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C010BEF4 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
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
    return (char *)&unk_1C02F6100;
  return result;
}
