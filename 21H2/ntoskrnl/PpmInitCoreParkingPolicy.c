/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140A72A44
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C1EF34 = 100;
  byte_140C1F9E4 = 100;
  result = &unk_140C1F9E6;
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
  word_140C1EF28 = 0;
  word_140C1F9D8 = 0;
  dword_140C1EF30 = 1;
  dword_140C1F9E0 = 1;
  dword_140C1EF2C = 1;
  dword_140C1F9DC = 1;
  word_140C1EF24 = 24902;
  word_140C1F9D4 = 24902;
  byte_140C1EF26 = 20;
  byte_140C1F9D6 = 20;
  return result;
}
