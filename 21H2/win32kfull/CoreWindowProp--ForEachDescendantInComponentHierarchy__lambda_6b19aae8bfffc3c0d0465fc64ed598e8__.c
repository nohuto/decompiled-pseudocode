/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00342DC
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00342DC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00354F4 (-TransitionForegroundPriority@PriorityBoostCUI@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0007CCC (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 *     _lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator() @ 0x1C00342AC (_lambda_6b19aae8bfffc3c0d0465fc64ed598e8_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00342DC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003719C (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(
        const struct tagWND *a1,
        char a2)
{
  const struct tagWND *i; // rdx
  __int64 v5; // rdx
  struct tagWND *NextComponentWindow; // rax
  __int64 v7; // rcx
  struct tagWND *v8; // rsi

  if ( a1 && (unsigned int)CoreWindowProp::IsHost(a1) )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, i);
      v8 = NextComponentWindow;
      if ( !NextComponentWindow )
        break;
      lambda_6b19aae8bfffc3c0d0465fc64ed598e8_::operator()(v7, (__int64)NextComponentWindow);
      LOBYTE(v5) = a2;
      CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___(v8, v5);
    }
  }
}
