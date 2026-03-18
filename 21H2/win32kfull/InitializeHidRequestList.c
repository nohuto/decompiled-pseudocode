/*
 * XREFs of InitializeHidRequestList @ 0x1C0122900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *InitializeHidRequestList()
{
  __int64 *result; // rax

  qword_1C0336DF0 = (__int64)&gHidRequestTable;
  gHidRequestTable = (__int64)&gHidRequestTable;
  qword_1C0336E00 = (__int64)&qword_1C0336DF8;
  qword_1C0336DF8 = (__int64)&qword_1C0336DF8;
  result = &qword_1C0336E08;
  qword_1C0336E10 = (__int64)&qword_1C0336E08;
  qword_1C0336E08 = (__int64)&qword_1C0336E08;
  return result;
}
