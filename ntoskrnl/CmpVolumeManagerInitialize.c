/*
 * XREFs of CmpVolumeManagerInitialize @ 0x1408134FC
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

__int64 *CmpVolumeManagerInitialize()
{
  __int64 *result; // rax

  CmpVolumeManager = 0LL;
  result = &qword_140D552D0;
  qword_140D552D8 = (__int64)&qword_140D552D0;
  qword_140D552D0 = (__int64)&qword_140D552D0;
  return result;
}
