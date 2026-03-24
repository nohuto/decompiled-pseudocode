/*
 * XREFs of ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0007CCC
 * Callers:
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00335D0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     ??$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0@Z@Z @ 0x1C003427C (--$ForEachDescendantInComponentHierarchy@P6AXPEBUtagWND@@@Z@CoreWindowProp@@SAXPEBUtagWND@@P6AX0.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8___ @ 0x1C00342DC (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_6b19aae8bfffc3c0d0465fc64ed598e8__.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     xxxSetBridgeWindowChild @ 0x1C0209198 (xxxSetBridgeWindowChild.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006B788 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetNextComponentWindow(const struct tagWND *a1, const struct tagWND *a2)
{
  __int64 v3; // rbx
  const struct tagWND **v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  if ( !(unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v6) )
    return 0LL;
  v4 = *(const struct tagWND ***)(v6 + 32);
  if ( a2 )
  {
    while ( v4 )
    {
      if ( a2 == v4[1] )
      {
        if ( *v4 )
          return (struct tagWND *)*((_QWORD *)*v4 + 1);
        return (struct tagWND *)v3;
      }
      v4 = (const struct tagWND **)*v4;
    }
    return 0LL;
  }
  if ( v4 )
    return v4[1];
  return (struct tagWND *)v3;
}
