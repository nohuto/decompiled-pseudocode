_BYTE *PpmInitCoreParkingPolicy()
{
  __int64 v0; // rcx
  _BYTE *result; // rax

  v0 = 2LL;
  byte_140C39154 = 100;
  byte_140C3930C = 100;
  result = &unk_140C3930E;
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
  word_140C39148 = 0;
  word_140C39300 = 0;
  dword_140C39150 = 1;
  dword_140C39308 = 1;
  dword_140C3914C = 1;
  dword_140C39304 = 1;
  word_140C39144 = 24902;
  word_140C392FC = 24902;
  byte_140C39146 = 20;
  byte_140C392FE = 20;
  word_140C3927C = 0;
  word_140C39434 = 0;
  byte_140C3927E = 0;
  byte_140C39436 = 0;
  return result;
}
