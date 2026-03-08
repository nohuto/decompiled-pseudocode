/*
 * XREFs of ExpCloseWorkerFactory @ 0x140688D70
 * Callers:
 *     <none>
 * Callees:
 *     ExpShutdownWorkerFactory @ 0x1402037D0 (ExpShutdownWorkerFactory.c)
 */

__int64 __fastcall ExpCloseWorkerFactory(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return ExpShutdownWorkerFactory(a2);
  return result;
}
