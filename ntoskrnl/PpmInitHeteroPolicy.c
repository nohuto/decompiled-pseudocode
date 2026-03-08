/*
 * XREFs of PpmInitHeteroPolicy @ 0x140B623E4
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  __int64 v1; // r9
  unsigned int v2; // r8d
  char v3; // cl
  char v4; // cl
  char v5; // cl
  __int64 result; // rax

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_140C393A1;
  v1 = 2LL;
  do
  {
    v2 = 0;
    do
    {
      v3 = v2 != 0 ? 80 : 90;
      *(v0 - 440) = v3;
      *v0 = v3;
      v4 = -(v2++ != 0);
      v5 = (v4 & 0x14) + 30;
      *(v0 - 568) = v5;
      *(v0 - 128) = v5;
      ++v0;
    }
    while ( v2 < 0x40 );
    --v1;
  }
  while ( v1 );
  word_140C3927A = -1;
  result = 5LL;
  word_140C39432 = -1;
  dword_140C39274 = 5;
  dword_140C3942C = 5;
  dword_140C39270 = 5;
  dword_140C39428 = 5;
  byte_140C39167 = 3;
  byte_140C3931F = 3;
  word_140C39269 = 12850;
  word_140C39421 = 12850;
  return result;
}
