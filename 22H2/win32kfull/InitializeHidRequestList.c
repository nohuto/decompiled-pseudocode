/*
 * XREFs of InitializeHidRequestList @ 0x1C0136E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C033A958 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C033A968 = (__int64)&qword_1C033A960;
  qword_1C033A960 = (__int64)&qword_1C033A960;
  result = &qword_1C033A970;
  qword_1C033A978 = (__int64)&qword_1C033A970;
  qword_1C033A970 = (__int64)&qword_1C033A970;
  return result;
}
