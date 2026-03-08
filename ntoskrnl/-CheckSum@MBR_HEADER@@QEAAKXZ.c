/*
 * XREFs of ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140673920
 * Callers:
 *     ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140673B58 (-ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140673F9C (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x14067476C (-ReadPartitionTable@SC_RAW@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MBR_HEADER::CheckSum(const __m128i *this)
{
  __m128i v1; // xmm1
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1

  v1 = 0LL;
  v2 = 32LL;
  do
  {
    v3 = _mm_loadu_si128(this++);
    v4 = _mm_add_epi32(v3, v1);
    v1 = v4;
    --v2;
  }
  while ( v2 );
  v5 = _mm_add_epi32(v4, _mm_srli_si128(v4, 8));
  return (unsigned int)-_mm_cvtsi128_si32(_mm_add_epi32(v5, _mm_srli_si128(v5, 4)));
}
