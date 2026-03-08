/*
 * XREFs of _anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime @ 0x18010D920
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(
        unsigned __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  GetSystemTimePreciseAsFileTime(a3);
  v8 = *a3;
  QueryPerformanceCounter(&PerformanceCount);
  v6 = 10000000 * (a1 / g_qpcFrequency.QuadPart - PerformanceCount.QuadPart / (unsigned __int64)g_qpcFrequency.QuadPart)
     + 10000000 * (a1 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
     - 10000000 * (PerformanceCount.QuadPart % (unsigned __int64)g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
     + v8;
  *a2 = v6;
  result = HIDWORD(v6);
  a2[1] = result;
  return result;
}
