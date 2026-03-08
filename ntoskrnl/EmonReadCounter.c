/*
 * XREFs of EmonReadCounter @ 0x14051BB64
 * Callers:
 *     EmonSaveProfilingContext @ 0x140A94240 (EmonSaveProfilingContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EmonReadCounter(unsigned int a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 result; // rax
  char v4; // r9
  unsigned __int64 v5; // rax

  if ( a1 >= EmonNumberArchCounters )
  {
    v4 = a1 - EmonNumberArchCounters;
    *a2 = __readmsr(a1 - EmonNumberArchCounters + 777);
    v5 = __readmsr(0x38Du);
    result = (unsigned int)(15LL << (4 * v4)) & (unsigned int)v5;
  }
  else
  {
    *a2 = __readmsr(a1 + 193);
    result = __readmsr(a1 + 390);
  }
  *a3 = result;
  return result;
}
