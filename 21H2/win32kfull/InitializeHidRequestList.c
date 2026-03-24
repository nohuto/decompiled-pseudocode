/*
 * XREFs of InitializeHidRequestList @ 0x1C0137200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C033B980 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C033B990 = (__int64)&qword_1C033B988;
  qword_1C033B988 = (__int64)&qword_1C033B988;
  result = &qword_1C033B998;
  qword_1C033B9A0 = (__int64)&qword_1C033B998;
  qword_1C033B998 = (__int64)&qword_1C033B998;
  return result;
}
