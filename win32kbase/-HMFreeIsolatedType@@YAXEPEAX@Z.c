/*
 * XREFs of ?HMFreeIsolatedType@@YAXEPEAX@Z @ 0x1C0075514
 * Callers:
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C00D3268 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0078704 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A7554 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00A881C (-Free@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00AEAB8 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall HMFreeIsolatedType(__int64 a1, void *a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = HMTagToIsolatedType() - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v6 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 24);
        if ( v6 )
          NSInstrumentation::CTypeIsolation<81920,160>::Free(v6, a2);
      }
    }
    else
    {
      v5 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 16);
      if ( v5 )
        NSInstrumentation::CTypeIsolation<86016,336>::Free(v5, a2);
    }
  }
  else
  {
    v7 = *(_QWORD *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 8);
    if ( v7 )
      NSInstrumentation::CTypeIsolation<40960,160>::Free(v7, a2);
  }
}
