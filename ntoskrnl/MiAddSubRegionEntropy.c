/*
 * XREFs of MiAddSubRegionEntropy @ 0x140B609A8
 * Callers:
 *     MiAssignTopLevelRanges @ 0x140B604AC (MiAssignTopLevelRanges.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140222C78 (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 */

__int64 MiAddSubRegionEntropy()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r10

  v0 = qword_140C6A1C8;
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = v1 | (unsigned int)ExGenRandom(1);
  v3 = qword_140C6A1D8;
  qword_140C6A1C8 = v0 + (v2 & 0x7FFFFFFFF8LL);
  qword_140C66CA8[0] = ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30) + v3;
  qword_140C66CE8 = ((qword_140C66CA8[0] + 0x8FFFFFFFFFLL) & 0xFFFFFF8000000000uLL)
                  + ((unsigned __int64)(unsigned __int8)ExGenRandom(1) << 30);
  result = MiHyperSpaceSize();
  qword_140C66CF0 = (v5 & (qword_140C66CE8 + result + 0x7FFFFFFFFFLL)) - 1;
  return result;
}
