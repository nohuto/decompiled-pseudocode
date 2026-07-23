/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A73A44
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C1EEF4 = 100;
  byte_140C1F9A4 = 100;
  result = &unk_140C1F9A6;
  do
  {
    *(result - 2736) = 100;
    *result = 100;
    *(result - 2757) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140C1EEE8 = 0;
  word_140C1F998 = 0;
  dword_140C1EEF0 = 1;
  dword_140C1F9A0 = 1;
  dword_140C1EEEC = 1;
  dword_140C1F99C = 1;
  word_140C1EEE4 = 24902;
  word_140C1F994 = 24902;
  byte_140C1EEE6 = 20;
  byte_140C1F996 = 20;
  return result;
}
