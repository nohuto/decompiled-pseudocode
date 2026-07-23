/*
 * XREFs of SpiMax311InitializePort @ 0x1405CB550
 * Callers:
 *     <none>
 * Callees:
 *     SpiMax311SetBaud @ 0x1405CB680 (SpiMax311SetBaud.c)
 */

char __fastcall SpiMax311InitializePort(__int64 a1, __int64 a2)
{
  *(_WORD *)(a2 + 12) = 0;
  qword_140CF9AE0 = 0LL;
  word_140CF9AE8 = *(_WORD *)(*(_QWORD *)a2 + 20LL);
  SpiMax311SetBaud(a2, *(unsigned int *)(a2 + 8));
  return 1;
}
