/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1407A5A3C
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140D2EF58;
  qword_140D2EF60 = (__int64)&qword_140D2EF58;
  qword_140D2EF58 = (__int64)&qword_140D2EF58;
  return result;
}
