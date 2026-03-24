/*
 * XREFs of _anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper @ 0x1C0223040
 * Callers:
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C00341DC (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 * Callees:
 *     _anonymous_namespace_::RequestPriorityUpdate @ 0x1C0038E6C (_anonymous_namespace_--RequestPriorityUpdate.c)
 */

__int64 __fastcall anonymous_namespace_::TransitionForegroundPriority_DeBoostWindowHelper(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return anonymous_namespace_::RequestPriorityUpdate(*(_QWORD *)(a1 + 16), 1);
  return result;
}
