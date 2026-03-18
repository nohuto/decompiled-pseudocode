/*
 * XREFs of PpmInitCoreParkingPolicy @ 0x140B747BC
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C39554 = 100;
  byte_140C3970C = 100;
  result = &unk_140C3970E;
  do
  {
    *(result - 440) = 100;
    *result = 100;
    *(result - 461) = 0;
    *(result - 21) = 0;
    ++result;
    --v0;
  }
  while ( v0 );
  word_140C39548 = 0;
  word_140C39700 = 0;
  dword_140C39550 = 1;
  dword_140C39708 = 1;
  dword_140C3954C = 1;
  dword_140C39704 = 1;
  word_140C39544 = 24902;
  word_140C396FC = 24902;
  byte_140C39546 = 20;
  byte_140C396FE = 20;
  word_140C3967C = 0;
  word_140C39834 = 0;
  byte_140C3967E = 0;
  byte_140C39836 = 0;
  return result;
}
