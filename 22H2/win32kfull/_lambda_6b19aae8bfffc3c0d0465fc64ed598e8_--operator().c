/*
 * XREFs of _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C003420C
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C003423C (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0035454 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0038E6C (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

__int64 __fastcall lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator()(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 40);
    if ( (*(_BYTE *)(result + 31) & 8) == 0 )
      return anonymous_namespace_::RequestPriorityUpdate(*(_QWORD *)(a2 + 16), 0LL);
  }
  return result;
}
