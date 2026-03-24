/*
 * XREFs of PpmInitHeteroPolicy @ 0x140A6B94C
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PpmInitHeteroPolicy()
{
  char *v0; // rdx
  unsigned int v1; // r8d
  char v2; // cl
  char v3; // cl
  char v4; // cl
  __int64 result; // rax

  PpmHeteroMinRelativePerformance = 0x10000;
  v0 = (char *)&unk_140C1FEF9;
  v1 = 0;
  do
  {
    v2 = v1 != 0 ? 80 : 90;
    *(v0 - 2736) = v2;
    *v0 = v2;
    v3 = -(v1++ != 0);
    v4 = (v3 & 0x14) + 30;
    *(v0 - 4016) = v4;
    *(v0 - 1280) = v4;
    ++v0;
  }
  while ( v1 < 0x40 );
  result = 5LL;
  byte_140C1EF47 = 3;
  dword_140C1F950 = 5;
  dword_140C20400 = 5;
  dword_140C1F94C = 5;
  dword_140C203FC = 5;
  byte_140C1F9F7 = 3;
  word_140C1F949 = 12850;
  word_140C203F9 = 12850;
  return result;
}
