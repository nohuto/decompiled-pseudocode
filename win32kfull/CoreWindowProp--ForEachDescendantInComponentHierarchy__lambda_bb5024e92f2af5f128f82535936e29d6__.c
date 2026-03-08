/*
 * XREFs of CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C009BCB0
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009BB98 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C009BCB0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 * Callees:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0099B60 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C009BCB0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C009BD04 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0222FA4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

void __fastcall CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(
        struct tagWND *a1,
        __int64 a2)
{
  struct tagWND *NextComponentWindow; // rsi
  __int64 **v5; // rbp
  _DWORD *v6; // r14
  __int64 v7; // r8

  if ( a1 )
  {
    if ( (unsigned int)CoreWindowProp::IsHost(a1) )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, 0LL);
      if ( NextComponentWindow )
      {
        v5 = *(__int64 ***)a2;
        v6 = *(_DWORD **)(a2 + 8);
        do
        {
          v7 = 0LL;
          if ( *v6 == 1 )
            v7 = -2LL;
          lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v5, (__int64)NextComponentWindow, v7);
          CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(NextComponentWindow);
          NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a1, NextComponentWindow);
        }
        while ( NextComponentWindow );
      }
    }
  }
}
