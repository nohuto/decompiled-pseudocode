/*
 * XREFs of AstInitializeBloomFilter @ 0x14085F9F8
 * Callers:
 *     AstInitialize @ 0x140B716E4 (AstInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall AstInitializeBloomFilter(__int64 a1, __int64 a2, __int64 a3)
{
  dword_140C5D310 = -849937013;
  AstIoctlBloomFilter = 0x8000;
  qword_140C5D308 = a3;
}
