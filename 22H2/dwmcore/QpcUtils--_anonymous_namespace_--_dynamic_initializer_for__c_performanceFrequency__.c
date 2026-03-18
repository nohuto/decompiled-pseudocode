/*
 * XREFs of QpcUtils::_anonymous_namespace_::_dynamic_initializer_for__c_performanceFrequency__ @ 0x180003E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER QpcUtils::_anonymous_namespace_::_dynamic_initializer_for__c_performanceFrequency__()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  result = Frequency;
  qword_1803E5B70 = Frequency.QuadPart;
  return result;
}
