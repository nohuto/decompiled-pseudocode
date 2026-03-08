/*
 * XREFs of KiInitializeTimer2Data @ 0x1403AC764
 * Callers:
 *     KeInitializeTimerTable @ 0x14080B438 (KeInitializeTimerTable.c)
 * Callees:
 *     <none>
 */

_QWORD *KiInitializeTimer2Data()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  result = qword_140C41F50;
  v1 = 5LL;
  do
  {
    *(result - 2) = 0LL;
    *(result - 1) = 0LL;
    *result = -1LL;
    result += 3;
    --v1;
  }
  while ( v1 );
  KiNextTimer2DueTime = -1LL;
  return result;
}
